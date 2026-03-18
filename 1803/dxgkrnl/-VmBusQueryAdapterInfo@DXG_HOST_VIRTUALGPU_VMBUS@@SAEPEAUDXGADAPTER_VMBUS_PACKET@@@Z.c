/*
 * XREFs of ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0181080
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D45C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bp
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  void *pPrivateDriverData; // rbx
  KMTQUERYADAPTERINFOTYPE v7; // eax
  PVOID v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  struct _D3DKMT_QUERYADAPTERINFO v14; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v4 = v3;
  if ( v3 )
  {
    v5 = *(unsigned int *)(v3 + 28);
    pPrivateDriverData = 0LL;
    v7 = *(_DWORD *)(v3 + 24);
    v14.hAdapter = 0;
    v14.Type = v7;
    v14.pPrivateDriverData = 0LL;
    *(_QWORD *)&v14.PrivateDriverDataSize = 0LL;
    if ( (_DWORD)v5 )
    {
      if ( (unsigned __int64)*((unsigned int *)a1 + 20) - 32 < v5 || (unsigned int)v5 > 0x20000 )
      {
        v12 = WdLogNewEntry5_WdError((unsigned int)v5);
        *(_QWORD *)(v12 + 24) = *(unsigned int *)(v4 + 28);
        WdLogEvent5_WdError(v12);
LABEL_10:
        if ( pPrivateDriverData )
          operator delete[](pPrivateDriverData);
        goto LABEL_12;
      }
      v14.PrivateDriverDataSize = v5;
      v8 = operator new[]((unsigned int)v5, 0x4B677844u, (POOL_TYPE)512);
      v14.pPrivateDriverData = v8;
      if ( !v8 )
      {
        v10 = WdLogNewEntry5_WdLowResource(v9);
        *(_QWORD *)(v10 + 24) = 3184LL;
        WdLogEvent5_WdLowResource(v10);
LABEL_12:
        LOBYTE(v3) = v2;
        return v3;
      }
      memmove(v8, (const void *)(v4 + 32), *(unsigned int *)(v4 + 28));
    }
    v11 = DxgkQueryAdapterInfoInternal(&v14, 0, *(struct DXGADAPTER **)(*((_QWORD *)a1 + 5) + 16LL));
    pPrivateDriverData = v14.pPrivateDriverData;
    if ( v11 >= 0 )
    {
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v14.pPrivateDriverData, v14.PrivateDriverDataSize);
      v2 = 1;
    }
    goto LABEL_10;
  }
  return v3;
}

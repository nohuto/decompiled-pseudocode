/*
 * XREFs of ?VmBusQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0194BA0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  void *pPrivateDriverData; // rbx
  char v3; // bp
  unsigned __int64 v5; // rdx
  PVOID v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 v11; // rax
  struct _D3DKMT_QUERYADAPTERINFO v12; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  pPrivateDriverData = 0LL;
  memset(&v12, 0, sizeof(v12));
  v3 = 0;
  v5 = *(unsigned int *)(v1 + 28);
  v12.Type = *(_DWORD *)(v1 + 24);
  if ( !(_DWORD)v5 )
  {
LABEL_7:
    v9 = DxgkQueryAdapterInfoInternal(&v12, 0, *(struct DXGADAPTER **)(*((_QWORD *)a1 + 5) + 16LL));
    pPrivateDriverData = v12.pPrivateDriverData;
    if ( v9 >= 0 )
    {
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v12.pPrivateDriverData, v12.PrivateDriverDataSize);
      v3 = 1;
    }
    goto LABEL_9;
  }
  if ( (unsigned __int64)*((unsigned int *)a1 + 20) - 32 >= v5 && (unsigned int)v5 <= 0x20000 )
  {
    v12.PrivateDriverDataSize = v5;
    v6 = operator new[]((unsigned int)v5, 0x4B677844u, (POOL_TYPE)512);
    v12.pPrivateDriverData = v6;
    if ( !v6 )
    {
      v8 = WdLogNewEntry5_WdLowResource(v7);
      *(_QWORD *)(v8 + 24) = 2750LL;
      WdLogEvent5_WdLowResource(v8);
      return v3;
    }
    memmove(v6, (const void *)(v1 + 32), *(unsigned int *)(v1 + 28));
    goto LABEL_7;
  }
  v11 = WdLogNewEntry5_WdError((unsigned int)v5);
  *(_QWORD *)(v11 + 24) = *(unsigned int *)(v1 + 28);
  WdLogEvent5_WdError(v11);
LABEL_9:
  if ( pPrivateDriverData )
    ExFreePoolWithTag(pPrivateDriverData, 0);
  return v3;
}

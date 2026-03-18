/*
 * XREFs of ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017FB60
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEALLOCATION@@@@YAPEAUDXGKVMB_COMMAND_CREATEALLOCATION@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D31C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEALLOCATION@@@@YAPEAUDXGKVMB_COMMAND_CREATEALLOCATIO.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkLock @ 0x1C00CAEF0 (DxgkLock.c)
 *     DxgkLock2 @ 0x1C00F38E0 (DxgkLock2.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusLock2(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // r8
  struct VMBPACKETCOMPLETION__ *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  void *pData; // [rsp+28h] [rbp-38h]
  _D3DKMT_LOCK v11; // [rsp+30h] [rbp-30h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEALLOCATION>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v9 = 0LL;
    pData = 0LL;
    if ( *(_BYTE *)(v2 + 48) )
    {
      memset(&v11, 0, sizeof(v11));
      v11.hAllocation = *(_DWORD *)(v3 + 28);
      v11.hDevice = *(_DWORD *)(v3 + 24);
      v11.Flags.Value = *(_DWORD *)(v3 + 52);
      v11.PrivateDriverData = *(_DWORD *)(v3 + 56);
      v4 = DxgkLock(&v11, v5, v6);
      pData = v11.pData;
    }
    else
    {
      v4 = DxgkLock2(v2 + 24);
      pData = *(void **)(v3 + 40);
    }
    v7 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
    LODWORD(v9) = v4;
    VmBusCompletePacket(v7, &v9, 0x10u);
    LOBYTE(v2) = 1;
  }
  return v2;
}

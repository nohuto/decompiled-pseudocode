/*
 * XREFs of ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0187000
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJECT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D36C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATESYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_CREATESYNCOBJEC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C016D3D0 (DxgkUpdateGpuVirtualAddress.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUpdateGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // eax
  unsigned __int64 v7; // rdx
  int updated; // eax
  __int64 v9; // rax
  struct VMBPACKETCOMPLETION__ *v10; // rcx
  _QWORD v12[9]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATESYNCOBJECT>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    memset(v12, 0, 0x38uLL);
    v12[5] = *(_QWORD *)(v3 + 24);
    LODWORD(v12[6]) = *(_DWORD *)(v3 + 48);
    v12[0] = *(_QWORD *)(v3 + 32);
    v12[1] = *(_QWORD *)(v3 + 40);
    v12[2] = v3 + 56;
    v6 = *(_DWORD *)(v3 + 44);
    if ( v6 && (v4 = (unsigned int)(v6 - 1), v7 = ((unsigned __int64)*((unsigned int *)a1 + 20) - 120) >> 6, v7 >= v4) )
    {
      updated = DxgkUpdateGpuVirtualAddress((__int64)v12, v7, v5);
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v9 + 24) = *(unsigned int *)(v3 + 44);
      WdLogEvent5_WdError(v9);
      updated = -1073741811;
    }
    v10 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
    v13 = updated;
    VmBusCompletePacket(v10, &v13, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}

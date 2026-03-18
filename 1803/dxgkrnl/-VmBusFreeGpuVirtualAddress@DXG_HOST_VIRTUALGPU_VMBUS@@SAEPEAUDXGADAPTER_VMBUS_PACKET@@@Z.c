/*
 * XREFs of ?VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F820
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D3BC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C00D9750 (DxgkFreeGpuVirtualAddress.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFreeGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // eax
  struct VMBPACKETCOMPLETION__ *v6; // rcx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  if ( v2 )
  {
    v5 = DxgkFreeGpuVirtualAddress(v2 + 24, v3, v4);
    v6 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
    v8 = v5;
    VmBusCompletePacket(v6, &v8, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}

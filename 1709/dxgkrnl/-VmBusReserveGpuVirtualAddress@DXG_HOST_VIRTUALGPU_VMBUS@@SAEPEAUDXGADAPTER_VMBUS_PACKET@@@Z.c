/*
 * XREFs of ?VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0194FC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00BC110 (DxgkReserveGpuVirtualAddress.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReserveGpuVirtualAddress(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  struct VMBPACKETCOMPLETION__ *v5; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_QWORD *)a1 + 9);
  if ( (int)DxgkReserveGpuVirtualAddress(v3 + 24, a2, a3) < 0 )
    return 0;
  v5 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v7[1] = *(_QWORD *)(v3 + 88);
  v7[0] = *(_QWORD *)(v3 + 80);
  VmBusCompletePacket(v5, v7, 0x10u);
  return 1;
}

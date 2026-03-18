/*
 * XREFs of ?VmBusReserveGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002EAA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00A36F0 (DxgkReserveGpuVirtualAddress.c)
 */

unsigned __int8 __fastcall VmBusReserveGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  struct VMBPACKETCOMPLETION__ *v3; // rcx
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  if ( (int)DxgkReserveGpuVirtualAddress(v1 + 16) < 0 )
    return 0;
  v3 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v5[1] = *(_QWORD *)(v1 + 80);
  v5[0] = *(_QWORD *)(v1 + 72);
  VmBusCompletePacket(v3, v5, 0x10u);
  return 1;
}

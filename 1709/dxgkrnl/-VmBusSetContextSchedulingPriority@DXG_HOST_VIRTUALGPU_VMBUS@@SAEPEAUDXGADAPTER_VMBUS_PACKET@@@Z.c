/*
 * XREFs of ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0199730
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00F7F40 (DxgkSetContextSchedulingPriority.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetContextSchedulingPriority(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  struct VMBPACKETCOMPLETION__ *v5; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = DxgkSetContextSchedulingPriority(*((_QWORD *)a1 + 9) + 24LL, a2, a3);
  v5 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v7 = v4;
  VmBusCompletePacket(v5, &v7, 4u);
  return 1;
}

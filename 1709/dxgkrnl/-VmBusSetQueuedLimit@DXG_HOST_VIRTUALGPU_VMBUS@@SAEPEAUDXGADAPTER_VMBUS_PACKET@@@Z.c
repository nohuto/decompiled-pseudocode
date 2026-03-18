/*
 * XREFs of ?VmBusSetQueuedLimit@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0199A10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C00EDE20 (DxgkSetQueuedLimit.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetQueuedLimit(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  int v5; // eax
  struct VMBPACKETCOMPLETION__ *v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  v3 = *((_QWORD *)a1 + 9);
  v8 = 0uLL;
  v9 = 0;
  v5 = DxgkSetQueuedLimit(v3 + 24, a2, a3);
  v6 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v9 = v5;
  v8 = *(_OWORD *)(v3 + 24);
  VmBusCompletePacket(v6, &v8, 0x14u);
  return 1;
}

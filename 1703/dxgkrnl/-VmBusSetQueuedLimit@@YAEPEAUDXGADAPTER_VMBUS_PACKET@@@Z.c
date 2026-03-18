/*
 * XREFs of ?VmBusSetQueuedLimit@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0032DB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSetQueuedLimit @ 0x1C00946E0 (DxgkSetQueuedLimit.c)
 */

unsigned __int8 __fastcall VmBusSetQueuedLimit(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  int v3; // eax
  struct VMBPACKETCOMPLETION__ *v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)a1 + 9);
  v6 = 0uLL;
  v7 = 0;
  v3 = DxgkSetQueuedLimit(v1 + 16);
  v4 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v7 = v3;
  v6 = *(_OWORD *)(v1 + 16);
  VmBusCompletePacket(v4, &v6, 0x14u);
  return 1;
}

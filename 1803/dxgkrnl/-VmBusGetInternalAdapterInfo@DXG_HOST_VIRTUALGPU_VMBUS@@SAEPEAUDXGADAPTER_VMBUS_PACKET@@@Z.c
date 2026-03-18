/*
 * XREFs of ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F900
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetInternalAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // r8
  struct VMBPACKETCOMPLETION__ *v2; // rcx
  __int64 v3; // rdx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 5);
  v2 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
  v5 = 0LL;
  v6 = 0LL;
  v3 = *(_QWORD *)(v1 + 16);
  LODWORD(v5) = *(_DWORD *)(v3 + 300);
  HIDWORD(v5) = *(_DWORD *)(v3 + 1664);
  v6 = *(_BYTE *)(v1 + 113) & 1;
  VmBusCompletePacket(v2, &v5, 0x10u);
  return 1;
}

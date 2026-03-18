/*
 * XREFs of PnpProcessCustomDeviceEvent @ 0x140457A28
 * Callers:
 *     PnpDeviceEventWorker @ 0x1404A58F0 (PnpDeviceEventWorker.c)
 * Callees:
 *     PiDcHandleCustomDeviceEvent @ 0x140457A84 (PiDcHandleCustomDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x1404A5D80 (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x1404A6548 (PnpNotifyTargetDeviceChange.c)
 */

__int64 __fastcall PnpProcessCustomDeviceEvent(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rsi
  __int64 v3; // rdi

  v1 = *a1;
  v2 = *(void **)(*a1 + 144LL);
  v3 = *(_QWORD *)(*a1 + 152LL);
  PiDcHandleCustomDeviceEvent(*a1);
  PiUEventNotifyUserMode(v1);
  PnpNotifyTargetDeviceChange((void *)(v3 + 4), v2);
  return 0LL;
}

/*
 * XREFs of PnpProcessCustomDeviceEvent @ 0x14054AD9C
 * Callers:
 *     PnpDeviceEventWorker @ 0x14054B420 (PnpDeviceEventWorker.c)
 * Callees:
 *     PiUEventNotifyUserMode @ 0x14054B8AC (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x14054C0B0 (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14054D954 (PiDcHandleCustomDeviceEvent.c)
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

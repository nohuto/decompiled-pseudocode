/*
 * XREFs of PnpProcessCustomDeviceEvent @ 0x14051EA78
 * Callers:
 *     PnpDeviceEventWorker @ 0x14051FE70 (PnpDeviceEventWorker.c)
 * Callees:
 *     PiUEventNotifyUserMode @ 0x14051F100 (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x14051F60C (PnpNotifyTargetDeviceChange.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14051FDD4 (PiDcHandleCustomDeviceEvent.c)
 */

__int64 __fastcall PnpProcessCustomDeviceEvent(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v2; // rsi
  __int64 v3; // rdi

  v1 = *a1;
  v2 = *(void **)(*a1 + 152LL);
  v3 = *(_QWORD *)(*a1 + 160LL);
  PiDcHandleCustomDeviceEvent(*a1);
  PiUEventNotifyUserMode(v1);
  PnpNotifyTargetDeviceChange((void *)(v3 + 4), v2);
  return 0LL;
}

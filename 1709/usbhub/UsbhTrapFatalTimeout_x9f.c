/*
 * XREFs of UsbhTrapFatalTimeout_x9f @ 0x1C003CEC0
 * Callers:
 *     UsbhHubProcessChangeWorker @ 0x1C000D020 (UsbhHubProcessChangeWorker.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0013490 (UsbhWaitEventWithTimeoutEx.c)
 * Callees:
 *     USBHUB_TriggerCallBacks @ 0x1C004B944 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall __noreturn UsbhTrapFatalTimeout_x9f(__int64 a1, int a2, ULONG_PTR a3)
{
  ULONG_PTR v3; // rdi

  v3 = a2;
  if ( a1 )
    USBHUB_TriggerCallBacks(a1);
  KeBugCheckEx(0xFEu, 8uLL, 6uLL, v3, a3);
}

/*
 * XREFs of USBHUB_FreeBugCheck @ 0x1C004AAA8
 * Callers:
 *     UsbhDriverUnload @ 0x1C004B090 (UsbhDriverUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall USBHUB_FreeBugCheck(struct _KBUGCHECK_REASON_CALLBACK_RECORD *P)
{
  if ( P )
  {
    KeDeregisterBugCheckReasonCallback(P);
    ExFreePoolWithTag(P, 0);
  }
}

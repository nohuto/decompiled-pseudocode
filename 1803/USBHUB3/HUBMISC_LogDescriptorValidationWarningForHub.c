/*
 * XREFs of HUBMISC_LogDescriptorValidationWarningForHub @ 0x1C002C620
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqq @ 0x1C0010A74 (McTemplateK0ppqq.c)
 */

NTSTATUS __fastcall HUBMISC_LogDescriptorValidationWarningForHub(__int64 a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x800000) != 0 )
      return McTemplateK0ppqq(a1, &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_WARNING, 0LL);
  }
  return result;
}

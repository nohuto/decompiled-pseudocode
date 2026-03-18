/*
 * XREFs of HUBMISC_LogDescriptorValidationErrorForHub @ 0x1C002B640
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqq @ 0x1C0010AE4 (McTemplateK0ppqq.c)
 */

NTSTATUS __fastcall HUBMISC_LogDescriptorValidationErrorForHub(__int64 a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
      return McTemplateK0ppqq(a1, &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_FAILURE, 0LL);
  }
  return result;
}

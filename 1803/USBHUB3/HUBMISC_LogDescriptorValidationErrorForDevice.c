/*
 * XREFs of HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C002C490
 * Callers:
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C001BFC0 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBDSM_AddingDeviceToGlobalChildList @ 0x1C001D0C0 (HUBDSM_AddingDeviceToGlobalChildList.c)
 *     HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C002575C (HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader @ 0x1C0025A94 (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader.c)
 * Callees:
 *     McTemplateK0ppqq @ 0x1C0010A74 (McTemplateK0ppqq.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002B5EC (HUBMISC_VerifierDbgBreak.c)
 */

void __fastcall HUBMISC_LogDescriptorValidationErrorForDevice(__int64 a1, ULONG a2)
{
  if ( a1 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
      McTemplateK0ppqq(
        a1,
        &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_FAILURE,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(*(_QWORD *)a1 + 240LL),
        *(_QWORD *)(a1 + 24),
        *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL),
        a2);
    if ( (*(_DWORD *)(a1 + 2436) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierDescriptorValidationFailure", a1 + 504);
    RtlSetBit((PRTL_BITMAP)(a1 + 2592), a2);
  }
}

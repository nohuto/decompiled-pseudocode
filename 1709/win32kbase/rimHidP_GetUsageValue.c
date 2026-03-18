/*
 * XREFs of rimHidP_GetUsageValue @ 0x1C0094650
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x1C00944D4 (RIMGetMaxCountFeatureDetails.c)
 *     RIMExtractPointerPropertyValues @ 0x1C0106F10 (RIMExtractPointerPropertyValues.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C010B328 (RIMIDE_CreateGenericHidDevice.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01110E4 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C0111434 (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C0111890 (rimExtractScantime.c)
 *     rimFindOrCreateActiveContact @ 0x1C0111DBC (rimFindOrCreateActiveContact.c)
 *     RIMExtractCustomPTPSetting @ 0x1C0116898 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetUsageValue(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned int *a5,
        struct _HIDP_PREPARSED_DATA *a6,
        char *a7,
        unsigned int a8)
{
  if ( gpfnHidP_GetUsageValue )
    return gpfnHidP_GetUsageValue(a1, a2, a3, a4, a5, a6, a7, a8);
  else
    return -1073741637;
}

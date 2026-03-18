/*
 * XREFs of rimHidP_GetSpecificButtonCaps @ 0x1C001266C
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C0008920 (RIMDeliverConfigRequest.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C000D190 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMGetPointerDeviceProperties @ 0x1C0012420 (RIMGetPointerDeviceProperties.c)
 *     RIMGetDeviceButtons @ 0x1C00914CC (RIMGetDeviceButtons.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0094000 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMAssignTouchType @ 0x1C0095C58 (RIMAssignTouchType.c)
 *     rimIDECheckConfidenceSupport @ 0x1C010801C (rimIDECheckConfidenceSupport.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C0112E18 (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C01132A8 (rimHidKeyboardIsButtonDevice.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C01139AC (rimValidateCustomHidKeyboardUsages.c)
 *     RIMExtractCustomPTPSetting @ 0x1C0116898 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetSpecificButtonCaps(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        struct _HIDP_BUTTON_CAPS *a5,
        unsigned __int16 *a6,
        struct _HIDP_PREPARSED_DATA *a7)
{
  if ( gpfnHidP_GetSpecificButtonCaps )
    return gpfnHidP_GetSpecificButtonCaps(a1, a2, a3, a4, a5, a6, a7);
  else
    return -1073741637;
}

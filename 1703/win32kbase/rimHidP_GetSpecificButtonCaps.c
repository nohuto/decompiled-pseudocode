/*
 * XREFs of rimHidP_GetSpecificButtonCaps @ 0x1C0009EC4
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C0007C54 (RIMDeliverConfigRequest.c)
 *     RIMGetDeviceButtons @ 0x1C000917C (RIMGetDeviceButtons.c)
 *     RIMAssignTouchType @ 0x1C000972C (RIMAssignTouchType.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0009D7C (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C00582E8 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMGetPointerDeviceProperties @ 0x1C01063E0 (RIMGetPointerDeviceProperties.c)
 *     rimIDECheckConfidenceSupport @ 0x1C0108FF4 (rimIDECheckConfidenceSupport.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C0114344 (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C01147D4 (rimHidKeyboardIsButtonDevice.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C0114ED8 (rimValidateCustomHidKeyboardUsages.c)
 *     RIMExtractCustomPTPSetting @ 0x1C011798C (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
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

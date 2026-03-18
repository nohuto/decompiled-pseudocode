/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C00128A8
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C0008920 (RIMDeliverConfigRequest.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C000FC08 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C000FF9C (RIMIsParallelDevice.c)
 *     RIMGetPointerDeviceProperties @ 0x1C0012420 (RIMGetPointerDeviceProperties.c)
 *     _PopulatePropertyUsageValues @ 0x1C00126C0 (_PopulatePropertyUsageValues.c)
 *     RIMGetPropertyCount @ 0x1C00934B0 (RIMGetPropertyCount.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0094000 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C00944D4 (RIMGetMaxCountFeatureDetails.c)
 *     RIMCacheAxisChildIndex @ 0x1C0094D14 (RIMCacheAxisChildIndex.c)
 *     RIMAssignTouchType @ 0x1C0095C58 (RIMAssignTouchType.c)
 *     RIMExtractPointerPropertyValues @ 0x1C0106F10 (RIMExtractPointerPropertyValues.c)
 *     RIMPopulatePointerDevice @ 0x1C01075C4 (RIMPopulatePointerDevice.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C0108334 (RIMIDECheckScanTimeSupport.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C01139AC (rimValidateCustomHidKeyboardUsages.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C01166F0 (RIMDiscoverCustomPTPSettings.c)
 *     RIMExtractCustomPTPSetting @ 0x1C0116898 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetSpecificValueCaps(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        struct _HIDP_VALUE_CAPS *a5,
        unsigned __int16 *a6,
        struct _HIDP_PREPARSED_DATA *a7)
{
  if ( gpfnHidP_GetSpecificValueCaps )
    return gpfnHidP_GetSpecificValueCaps(a1, a2, a3, a4, a5, a6, a7);
  else
    return -1073741637;
}

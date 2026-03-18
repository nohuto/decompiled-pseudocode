/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C000B1BC
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C0007C54 (RIMDeliverConfigRequest.c)
 *     RIMCacheAxisChildIndex @ 0x1C00080CC (RIMCacheAxisChildIndex.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0008310 (RIMGetMaxCountFeatureDetails.c)
 *     RIMAssignTouchType @ 0x1C000972C (RIMAssignTouchType.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0009D7C (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMGetPropertyCount @ 0x1C0009F18 (RIMGetPropertyCount.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C000AD38 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C000AF88 (RIMIsParallelDevice.c)
 *     _PopulatePropertyUsageValues @ 0x1C0105898 (_PopulatePropertyUsageValues.c)
 *     RIMExtractPointerPropertyValues @ 0x1C0105F90 (RIMExtractPointerPropertyValues.c)
 *     RIMGetPointerDeviceProperties @ 0x1C01063E0 (RIMGetPointerDeviceProperties.c)
 *     RIMPopulatePointerDevice @ 0x1C01068DC (RIMPopulatePointerDevice.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C010930C (RIMIDECheckScanTimeSupport.c)
 *     RIMIDESetPTPPhysicalSize @ 0x1C010B4C4 (RIMIDESetPTPPhysicalSize.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C0114ED8 (rimValidateCustomHidKeyboardUsages.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C01177E4 (RIMDiscoverCustomPTPSettings.c)
 *     RIMExtractCustomPTPSetting @ 0x1C011798C (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
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

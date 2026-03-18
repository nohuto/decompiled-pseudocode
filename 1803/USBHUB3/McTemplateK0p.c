/*
 * XREFs of McTemplateK0p @ 0x1C0006374
 * Callers:
 *     HUBPARENT_ResetHub @ 0x1C0006C50 (HUBPARENT_ResetHub.c)
 *     HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes @ 0x1C00073F0 (HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure @ 0x1C00078B0 (HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x1C00081F0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000B140 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0014A80 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0016110 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C001BFC0 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBDSM_ValidatingMSOSDescriptor @ 0x1C001C140 (HUBDSM_ValidatingMSOSDescriptor.c)
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C001C220 (HUBDSM_ValidatingMSOSExtendedConfigDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C001CAE0 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C001CC60 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C001CDE0 (HUBDSM_ValidatingMsOs20DescriptorSetIfPresent.c)
 *     HUBDSM_ValidatingDeviceQualifierDescriptor @ 0x1C001CFF0 (HUBDSM_ValidatingDeviceQualifierDescriptor.c)
 *     HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader @ 0x1C001E980 (HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0024260 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0024684 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0024C54 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0025174 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C00253B0 (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C0025598 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C002575C (HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader @ 0x1C0025A94 (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C0025CAC (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0025E70 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 *     HUBMISC_LogDeviceReEnumeration @ 0x1C0027970 (HUBMISC_LogDeviceReEnumeration.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C00279F8 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x1C0029D60 (HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode.c)
 *     HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor @ 0x1C002B1FC (HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor.c)
 *     HUBMISC_LogResetTimeout @ 0x1C002C1F4 (HUBMISC_LogResetTimeout.c)
 *     HUBIDLE_AddEvent @ 0x1C00354EC (HUBIDLE_AddEvent.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0066B40 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C0067280 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_EvtDeviceSurpriseRemoval @ 0x1C0067470 (HUBFDO_EvtDeviceSurpriseRemoval.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006A170 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C006AB50 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C006B150 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C00011B4 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0p(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  return McGenEventWriteKM(a1, a2, a3, 2u, &v4);
}

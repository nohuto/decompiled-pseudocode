/*
 * XREFs of RtlValidSid @ 0x1404F5A90
 * Callers:
 *     AdtpPackageParameters @ 0x140155F00 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x140248B54 (SepValidateCAPIDs.c)
 *     RtlpValidateSidBuffer @ 0x140469DC8 (RtlpValidateSidBuffer.c)
 *     SeCaptureSidAndAttributesArray @ 0x140470170 (SeCaptureSidAndAttributesArray.c)
 *     RtlAddMandatoryAce @ 0x1404A23F4 (RtlAddMandatoryAce.c)
 *     RtlConvertSidToUnicodeString @ 0x1404C06A0 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x1404C25CC (RtlLengthSidAsUnicodeString.c)
 *     SeCaptureSid @ 0x1404F32A8 (SeCaptureSid.c)
 *     RtlpSetSecurityObject @ 0x1404F50F0 (RtlpSetSecurityObject.c)
 *     RtlValidSecurityDescriptor @ 0x14050C750 (RtlValidSecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405971D4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405C43B4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x1405C55B0 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405CFE64 (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1406889EC (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x14068B460 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x14068D860 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x140697D8C (PiAuCheckClientInteractive.c)
 *     RtlAddAccessFilterAce @ 0x1406E86E0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1406E89D0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1406E8CF4 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x1406FA138 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1406FBCEC (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1406FBF00 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1406FC05C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1406FC1B4 (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407453E0 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x14081D310 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x14081D4F4 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  if ( (unsigned __int64)Sid > 0x7FFFFFFF0000LL && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu )
    return *(_BYTE *)Sid & 0xF;
  else
    return 0;
}

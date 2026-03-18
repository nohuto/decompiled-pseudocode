/*
 * XREFs of RtlValidSid @ 0x140486030
 * Callers:
 *     AdtpPackageParameters @ 0x14014C5B0 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x140260270 (SepValidateCAPIDs.c)
 *     RtlValidSecurityDescriptor @ 0x140485620 (RtlValidSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x140485700 (RtlpSetSecurityObject.c)
 *     RtlpValidateSidBuffer @ 0x140486AE0 (RtlpValidateSidBuffer.c)
 *     SeCaptureSid @ 0x140487010 (SeCaptureSid.c)
 *     SeCaptureSidAndAttributesArray @ 0x140488B20 (SeCaptureSidAndAttributesArray.c)
 *     RtlConvertSidToUnicodeString @ 0x140489090 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x1404E12AC (RtlLengthSidAsUnicodeString.c)
 *     RtlAddMandatoryAce @ 0x14054A554 (RtlAddMandatoryAce.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14057B66C (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405D6474 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x1405D8980 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405E9464 (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1406B49CC (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x1406B7100 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x1406B9540 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x1406C380C (PiAuCheckClientInteractive.c)
 *     RtlAddAccessFilterAce @ 0x1407204C0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1407207F0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140720B18 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x140731B74 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1407336D4 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1407338F0 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140733A4C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140733BA4 (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407878BC (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x14084E7B4 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x14084E998 (PiAuCreateStandardSecurityObject.c)
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

/*
 * XREFs of RtlValidSid @ 0x1404C80A0
 * Callers:
 *     AdtpPackageParameters @ 0x14017E5D8 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x1402A1D0C (SepValidateCAPIDs.c)
 *     RtlValidSecurityDescriptor @ 0x1404C1B80 (RtlValidSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1404C72B0 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C7830 (SeCaptureSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1404EB1D0 (RtlpSetSecurityObject.c)
 *     RtlConvertSidToUnicodeString @ 0x140517C80 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x140519D3C (RtlLengthSidAsUnicodeString.c)
 *     RtlpValidateSidBuffer @ 0x140540A60 (RtlpValidateSidBuffer.c)
 *     SeCaptureSidAndAttributesArray @ 0x140543A30 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x140543F18 (SeCaptureSid.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405E09D4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405E0F7C (_PnpGetPropertiesSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x140642A60 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14064EBCC (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x14071967C (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x14071BD90 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x14071E4E0 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x1407298EC (PiAuCheckClientInteractive.c)
 *     RtlAddAccessFilterAce @ 0x140783BD0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140783F00 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140784238 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x140795474 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x140796F78 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140797194 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1407972F0 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140797448 (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x1407F403C (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x1408BFD18 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x1408BFF3C (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  BOOLEAN result; // al

  if ( (unsigned __int64)Sid <= 0x7FFFFFFF0000LL )
    return 0;
  result = *(_BYTE *)Sid & 0xF;
  if ( result != 1 || *((_BYTE *)Sid + 1) > 0xFu )
    return 0;
  return result;
}

/*
 * XREFs of SeCompareSigningLevels @ 0x1404F1880
 * Callers:
 *     NtSetCachedSigningLevel2 @ 0x14048B484 (NtSetCachedSigningLevel2.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     PsConvertToGuiThread @ 0x1404F11D0 (PsConvertToGuiThread.c)
 *     MiValidateExistingImage @ 0x1404F12F4 (MiValidateExistingImage.c)
 *     MiValidateSectionSigningPolicy @ 0x1404F1598 (MiValidateSectionSigningPolicy.c)
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 *     SeQuerySigningPolicy @ 0x1404F40E0 (SeQuerySigningPolicy.c)
 *     SepIsMinTCB @ 0x1404F4270 (SepIsMinTCB.c)
 *     WbVerifyVirtualAddressSignature @ 0x140539FCC (WbVerifyVirtualAddressSignature.c)
 *     SeGetImageRequiredSigningLevel @ 0x1405626F0 (SeGetImageRequiredSigningLevel.c)
 *     SepIsImageInMinTcbList @ 0x14056EA44 (SepIsImageInMinTcbList.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x140581720 (PsQueryProcessSignatureMitigationPolicy.c)
 *     NtCompareSigningLevels @ 0x1405829D0 (NtCompareSigningLevels.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_1403A5CC0 )
    return ((__int64 (*)(void))qword_1403A5CC0)();
  return result;
}

/*
 * XREFs of SeCompareSigningLevels @ 0x1405040A0
 * Callers:
 *     NtCompareSigningLevels @ 0x1404521D0 (NtCompareSigningLevels.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     WbVerifyVirtualAddressSignature @ 0x140503C14 (WbVerifyVirtualAddressSignature.c)
 *     PsConvertToGuiThread @ 0x140503CF0 (PsConvertToGuiThread.c)
 *     MiValidateExistingImage @ 0x140503E04 (MiValidateExistingImage.c)
 *     MiValidateSectionSigningPolicy @ 0x1405040C8 (MiValidateSectionSigningPolicy.c)
 *     SeGetImageRequiredSigningLevel @ 0x140504F5C (SeGetImageRequiredSigningLevel.c)
 *     SeQuerySigningPolicy @ 0x14053A940 (SeQuerySigningPolicy.c)
 *     SepIsMinTCB @ 0x14053AAD0 (SepIsMinTCB.c)
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     SepIsImageInMinTcbList @ 0x140580228 (SepIsImageInMinTcbList.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x14059A3E0 (PsQueryProcessSignatureMitigationPolicy.c)
 *     NtSetCachedSigningLevel2 @ 0x1405E4024 (NtSetCachedSigningLevel2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140362660 )
    return ((__int64 (*)(void))qword_140362660)();
  return result;
}

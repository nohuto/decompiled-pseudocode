/*
 * XREFs of SeCompareSigningLevels @ 0x140545CB0
 * Callers:
 *     PsQueryProcessSignatureMitigationPolicy @ 0x14041F8A0 (PsQueryProcessSignatureMitigationPolicy.c)
 *     SeCompareSigningLevelsForAuditableProcess @ 0x140456BE0 (SeCompareSigningLevelsForAuditableProcess.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     SepIsImageInMinTcbList @ 0x1404F70A4 (SepIsImageInMinTcbList.c)
 *     MiValidateExistingImage @ 0x14051108C (MiValidateExistingImage.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     SeQuerySigningPolicy @ 0x140545370 (SeQuerySigningPolicy.c)
 *     PsConvertToGuiThread @ 0x140545BA0 (PsConvertToGuiThread.c)
 *     SeGetImageRequiredSigningLevel @ 0x140546BA4 (SeGetImageRequiredSigningLevel.c)
 *     NtSetCachedSigningLevel2 @ 0x1405847B4 (NtSetCachedSigningLevel2.c)
 *     NtCompareSigningLevels @ 0x1406F01A0 (NtCompareSigningLevels.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140348BC0 )
    return ((__int64 (*)(void))qword_140348BC0)();
  return result;
}

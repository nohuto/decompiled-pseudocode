/*
 * XREFs of RtlQueryPackageIdentity @ 0x14006E7F0
 * Callers:
 *     EtwpQueryTokenPackageInfo @ 0x1404F8DC4 (EtwpQueryTokenPackageInfo.c)
 *     PfSnCheckModernApp @ 0x14050DB3C (PfSnCheckModernApp.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14055A1FC (PopEtGetProcessSidAndPackageIdentity.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     PspIdentityBasedJobBreakaway @ 0x14077AFF0 (PspIdentityBasedJobBreakaway.c)
 *     EtwpApplyPackageIdFilter @ 0x1407B15DC (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x14006E850 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall RtlQueryPackageIdentity(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  __int64 result; // rax

  result = RtlQueryPackageClaims(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( a6 )
      *a6 = 0;
  }
  return result;
}

/*
 * XREFs of RtlQueryPackageIdentity @ 0x140088580
 * Callers:
 *     EtwpQueryTokenPackageInfo @ 0x1404ED4D0 (EtwpQueryTokenPackageInfo.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     PfSnCheckModernApp @ 0x140564844 (PfSnCheckModernApp.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406D29A8 (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspIdentityBasedJobBreakaway @ 0x1406E0D48 (PspIdentityBasedJobBreakaway.c)
 *     EtwpApplyPackageIdFilter @ 0x140712820 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140088710 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall RtlQueryPackageIdentity(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, bool *a6)
{
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  v7[0] = 0LL;
  result = RtlQueryPackageClaims(a1, a2, a3, a4, a5, 0LL, v7, 0LL);
  if ( (int)result >= 0 )
  {
    if ( a6 )
      *a6 = LOWORD(v7[0]) != 0LL;
  }
  return result;
}

/*
 * XREFs of RtlQueryPackageIdentity @ 0x140019A00
 * Callers:
 *     PfSnCheckModernApp @ 0x140447F04 (PfSnCheckModernApp.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1404593A4 (PopEtGetProcessSidAndPackageIdentity.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     EtwpQueryTokenPackageInfo @ 0x1404DCA98 (EtwpQueryTokenPackageInfo.c)
 *     PspIdentityBasedJobBreakaway @ 0x140717048 (PspIdentityBasedJobBreakaway.c)
 *     EtwpApplyPackageIdFilter @ 0x140750908 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140019A60 (RtlQueryPackageClaims.c)
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

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

NTSTATUS __cdecl RtlQueryPackageIdentity(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PBOOLEAN Packaged)
{
  NTSTATUS result; // eax
  _PS_PKG_CLAIM v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  result = RtlQueryPackageClaims(TokenHandle, PackageFullName, PackageSize, AppId, AppIdSize, 0LL, &v7, 0LL);
  if ( result >= 0 )
  {
    if ( Packaged )
      *Packaged = LOWORD(v7.Flags) != 0LL;
  }
  return result;
}

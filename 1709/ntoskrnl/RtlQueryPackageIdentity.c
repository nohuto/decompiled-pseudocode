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

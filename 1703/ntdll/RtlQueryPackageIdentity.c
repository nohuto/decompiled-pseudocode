/*
 * XREFs of RtlQueryPackageIdentity @ 0x180061980
 * Callers:
 *     sub_1800616E4 @ 0x1800616E4 (sub_1800616E4.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D3C90 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800D6E6C @ 0x1800D6E6C (sub_1800D6E6C.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x1800619D0 (RtlQueryPackageIdentityEx.c)
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
  unsigned __int64 v7[3]; // [rsp+40h] [rbp-18h] BYREF

  result = RtlQueryPackageIdentityEx(TokenHandle, PackageFullName, PackageSize, AppId, AppIdSize, 0LL, v7);
  if ( result >= 0 )
  {
    if ( Packaged )
      *Packaged = v7[0] != 0;
  }
  return result;
}

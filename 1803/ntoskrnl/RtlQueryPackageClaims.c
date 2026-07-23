/*
 * XREFs of RtlQueryPackageClaims @ 0x14006E850
 * Callers:
 *     RtlQueryPackageIdentity @ 0x14006E7F0 (RtlQueryPackageIdentity.c)
 *     SepDesktopAppxSubProcessToken @ 0x14006EBC0 (SepDesktopAppxSubProcessToken.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14029FFE0 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SeQuerySigningPolicyWorker @ 0x1404F7BDC (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x14006E6CC (RtlStringCbPrintfExW.c)
 *     RtlpQueryPackageIdentityAttributes @ 0x14006E9A4 (RtlpQueryPackageIdentityAttributes.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 */

NTSTATUS __cdecl RtlQueryPackageClaims(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PGUID DynamicId,
        PPS_PKG_CLAIM PkgClaim,
        PULONG64 AttributesPresent)
{
  NTSTATUS result; // eax
  NTSTATUS v12; // ebx
  __int64 v13; // rcx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-388h] BYREF
  size_t pcbRemaining; // [rsp+48h] [rbp-380h] BYREF
  char v16; // [rsp+50h] [rbp-378h] BYREF
  __int64 v17; // [rsp+58h] [rbp-370h]

  result = RtlpQueryPackageIdentityAttributes(
             (_DWORD)TokenHandle,
             (_DWORD)PackageFullName,
             (unsigned int)&v16,
             (_DWORD)PkgClaim,
             (__int64)AttributesPresent);
  v12 = result;
  if ( result < 0 )
    return result;
  if ( PackageFullName )
  {
    if ( PackageSize )
    {
      result = RtlStringCbPrintfExW(
                 PackageFullName,
                 *PackageSize,
                 &ppszDestEnd,
                 &pcbRemaining,
                 0x800u,
                 L"%wZ",
                 *(_QWORD *)(v17 + 32));
      v12 = result;
      if ( result < 0 )
        return result;
      *PackageSize = (char *)ppszDestEnd - (char *)PackageFullName + 2;
      goto LABEL_7;
    }
    return -1073741811;
  }
  if ( PackageSize )
    return -1073741811;
LABEL_7:
  if ( AppId )
  {
    result = RtlStringCbPrintfExW(AppId, *AppIdSize, &ppszDestEnd, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v17 + 32) + 16LL);
    v12 = result;
    if ( result < 0 )
      return result;
    *AppIdSize = (char *)ppszDestEnd - (char *)AppId + 2;
  }
  if ( DynamicId )
  {
    v13 = v17;
    *(_QWORD *)&DynamicId->Data1 = 0LL;
    *(_QWORD *)DynamicId->Data4 = 0LL;
    if ( *(_DWORD *)(v13 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v13 + 32) + 48LL), DynamicId);
  }
  return v12;
}

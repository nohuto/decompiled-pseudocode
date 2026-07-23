/*
 * XREFs of RtlQueryPackageClaims @ 0x140019A60
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1400198CC (SepDesktopAppxSubProcessToken.c)
 *     RtlQueryPackageIdentity @ 0x140019A00 (RtlQueryPackageIdentity.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14025E54C (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SeQuerySigningPolicyWorker @ 0x14053A578 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlpQueryPackageIdentityAttributes @ 0x140019BB4 (RtlpQueryPackageIdentityAttributes.c)
 *     RtlStringCbPrintfExW @ 0x140019CFC (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
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

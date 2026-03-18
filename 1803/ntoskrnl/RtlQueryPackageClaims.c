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

NTSTATUS __fastcall RtlQueryPackageClaims(
        int a1,
        wchar_t *a2,
        size_t *a3,
        wchar_t *a4,
        size_t *a5,
        GUID *Guid,
        int a7,
        __int64 a8)
{
  NTSTATUS result; // eax
  NTSTATUS v12; // ebx
  __int64 v13; // rcx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-388h] BYREF
  size_t pcbRemaining; // [rsp+48h] [rbp-380h] BYREF
  char v16; // [rsp+50h] [rbp-378h] BYREF
  __int64 v17; // [rsp+58h] [rbp-370h]

  result = RtlpQueryPackageIdentityAttributes(a1, (_DWORD)a2, (unsigned int)&v16, a7, a8);
  v12 = result;
  if ( result < 0 )
    return result;
  if ( a2 )
  {
    if ( a3 )
    {
      result = RtlStringCbPrintfExW(a2, *a3, &ppszDestEnd, &pcbRemaining, 0x800u, L"%wZ", *(_QWORD *)(v17 + 32));
      v12 = result;
      if ( result < 0 )
        return result;
      *a3 = (char *)ppszDestEnd - (char *)a2 + 2;
      goto LABEL_7;
    }
    return -1073741811;
  }
  if ( a3 )
    return -1073741811;
LABEL_7:
  if ( a4 )
  {
    result = RtlStringCbPrintfExW(a4, *a5, &ppszDestEnd, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v17 + 32) + 16LL);
    v12 = result;
    if ( result < 0 )
      return result;
    *a5 = (char *)ppszDestEnd - (char *)a4 + 2;
  }
  if ( Guid )
  {
    v13 = v17;
    *(_QWORD *)&Guid->Data1 = 0LL;
    *(_QWORD *)Guid->Data4 = 0LL;
    if ( *(_DWORD *)(v13 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v13 + 32) + 48LL), Guid);
  }
  return v12;
}

/*
 * XREFs of RtlQueryPackageClaims @ 0x180071250
 * Callers:
 *     AppModelPolicy_GetPolicy_Internal @ 0x1800710A0 (AppModelPolicy_GetPolicy_Internal.c)
 *     RtlQueryPackageIdentityEx @ 0x1800711E0 (RtlQueryPackageIdentityEx.c)
 * Callees:
 *     RtlpQueryPackageIdentityAttributes @ 0x1800713CC (RtlpQueryPackageIdentityAttributes.c)
 *     RtlStringCbPrintfExW @ 0x180071518 (RtlStringCbPrintfExW.c)
 *     RtlGUIDFromString @ 0x1800716B0 (RtlGUIDFromString.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
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
  __int64 v14; // [rsp+40h] [rbp-388h] BYREF
  char v15; // [rsp+48h] [rbp-380h] BYREF
  __int64 v16; // [rsp+58h] [rbp-370h]

  result = RtlpQueryPackageIdentityAttributes(TokenHandle, (__int64)AttributesPresent);
  v12 = result;
  if ( result < 0 )
    return result;
  if ( PackageFullName )
  {
    if ( PackageSize )
    {
      result = RtlStringCbPrintfExW(
                 (_DWORD)PackageFullName,
                 *PackageSize,
                 (unsigned int)&v14,
                 (unsigned int)&v15,
                 2048,
                 (__int64)L"%wZ",
                 *(_QWORD *)(v16 + 32));
      v12 = result;
      if ( result < 0 )
        return result;
      *PackageSize = v14 - (_QWORD)PackageFullName + 2;
      goto LABEL_5;
    }
    return -1073741811;
  }
  if ( PackageSize )
    return -1073741811;
LABEL_5:
  if ( AppId )
  {
    result = RtlStringCbPrintfExW(
               (_DWORD)AppId,
               *AppIdSize,
               (unsigned int)&v14,
               0,
               2048,
               (__int64)L"%wZ",
               *(_QWORD *)(v16 + 32) + 16LL);
    v12 = result;
    if ( result < 0 )
      return result;
    *AppIdSize = v14 - (_QWORD)AppId + 2;
  }
  if ( DynamicId )
  {
    v13 = v16;
    *(_QWORD *)&DynamicId->Data1 = 0LL;
    *(_QWORD *)DynamicId->Data4 = 0LL;
    if ( *(_DWORD *)(v13 + 24) > 3u )
      RtlGUIDFromString((PUNICODE_STRING)(*(_QWORD *)(v13 + 32) + 48LL), DynamicId);
  }
  return v12;
}

/*
 * XREFs of RtlQueryPackageClaims @ 0x180061A40
 * Callers:
 *     sub_1800618A8 @ 0x1800618A8 (sub_1800618A8.c)
 *     RtlQueryPackageIdentityEx @ 0x1800619D0 (RtlQueryPackageIdentityEx.c)
 * Callees:
 *     sub_180061BBC @ 0x180061BBC (sub_180061BBC.c)
 *     sub_180061D0C @ 0x180061D0C (sub_180061D0C.c)
 *     RtlGUIDFromString @ 0x180061EA0 (RtlGUIDFromString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
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

  result = sub_180061BBC(TokenHandle, (__int64)AttributesPresent);
  v12 = result;
  if ( result < 0 )
    return result;
  if ( PackageFullName )
  {
    if ( PackageSize )
    {
      result = sub_180061D0C(
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
    result = sub_180061D0C(
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

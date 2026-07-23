/*
 * XREFs of sub_1800CC970 @ 0x1800CC970
 * Callers:
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x18006D330 (RtlQueryPackageIdentity.c)
 *     sub_18006D6B4 @ 0x18006D6B4 (sub_18006D6B4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __fastcall sub_1800CC970(_WORD *a1)
{
  NTSTATUS result; // eax
  ULONG_PTR AppIdSize; // [rsp+40h] [rbp-1B8h] BYREF
  ULONG_PTR PackageSize; // [rsp+48h] [rbp-1B0h] BYREF
  WCHAR AppId[72]; // [rsp+50h] [rbp-1A8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+E0h] [rbp-118h] BYREF

  AppIdSize = 132LL;
  PackageSize = 256LL;
  memset(PackageFullName, 0, sizeof(PackageFullName));
  memset(AppId, 0, 0x84uLL);
  result = RtlQueryPackageIdentity((HANDLE)0xFFFFFFFFFFFFFFFCLL, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
  if ( result >= 0 )
    return sub_18006D6B4(a1, 0x184uLL, 0LL, 0LL, 0, L"%s!%s", PackageFullName, AppId, AppIdSize, PackageSize);
  return result;
}

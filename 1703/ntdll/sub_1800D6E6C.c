/*
 * XREFs of sub_1800D6E6C @ 0x1800D6E6C
 * Callers:
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x180061980 (RtlQueryPackageIdentity.c)
 *     sub_180061D0C @ 0x180061D0C (sub_180061D0C.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __fastcall sub_1800D6E6C(_WORD *a1)
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
    return sub_180061D0C(a1, 0x184uLL, 0LL, 0LL, 0, L"%s!%s", PackageFullName, AppId, AppIdSize, PackageSize);
  return result;
}

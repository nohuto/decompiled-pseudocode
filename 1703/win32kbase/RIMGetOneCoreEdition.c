/*
 * XREFs of RIMGetOneCoreEdition @ 0x1C000A0B0
 * Callers:
 *     RIMIsRunningOnDesktop @ 0x1C0008234 (RIMIsRunningOnDesktop.c)
 *     RIMIsRunningOnMobile @ 0x1C000A090 (RIMIsRunningOnMobile.c)
 *     RIMIsRunningOnSurfaceHub @ 0x1C010C8C0 (RIMIsRunningOnSurfaceHub.c)
 * Callees:
 *     <none>
 */

__int64 RIMGetOneCoreEdition()
{
  unsigned int v0; // ecx
  int v2; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v4; // [rsp+50h] [rbp+8h] BYREF
  char v5; // [rsp+58h] [rbp+10h] BYREF
  char v6; // [rsp+60h] [rbp+18h] BYREF

  v0 = dword_1C01891A4;
  if ( (unsigned int)dword_1C01891A4 > 0xD )
  {
    v4 = dword_1C01891A4;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    v2 = ZwQueryLicenseValue(&DestinationString, &v6, &v4, 4LL, &v5);
    v0 = dword_1C01891A4;
    if ( v2 >= 0 )
      v0 = v4;
    dword_1C01891A4 = v0;
  }
  return v0;
}

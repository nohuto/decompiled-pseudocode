/*
 * XREFs of ?Initialize@OSInfo@@SAXXZ @ 0x1801CAA48
 * Callers:
 *     ?Startup@@YAJXZ @ 0x18018E4E8 (-Startup@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void OSInfo::Initialize(void)
{
  _SYSTEM_INFO SystemInfo; // [rsp+20h] [rbp-168h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+50h] [rbp-138h] BYREF
  unsigned __int8 v2; // [rsp+16Ah] [rbp-1Eh]

  GetSystemInfo(&SystemInfo);
  VersionInformation.dwOSVersionInfoSize = 284;
  if ( GetVersionExW(&VersionInformation) )
    OSInfo::ProductType = v2;
}

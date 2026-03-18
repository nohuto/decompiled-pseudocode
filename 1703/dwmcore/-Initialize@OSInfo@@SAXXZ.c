/*
 * XREFs of ?Initialize@OSInfo@@SAXXZ @ 0x1800C7558
 * Callers:
 *     ?Startup@@YAJXZ @ 0x1800C6E38 (-Startup@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
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

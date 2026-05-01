/*
 * XREFs of ?HampSystemIsLegacyHangReportingEnabled@@YAKXZ @ 0x180041878
 * Callers:
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180038014 (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 HampSystemIsLegacyHangReportingEnabled(void)
{
  unsigned int v0; // ebx
  DWORD v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+58h] [rbp+10h] BYREF

  v2 = 4;
  v0 = 0;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\PLM",
         L"HungAppPolicy",
         0x18u,
         0LL,
         &v3,
         &v2) )
  {
    return 1;
  }
  else
  {
    LOBYTE(v0) = v3 != 2;
  }
  return v0;
}

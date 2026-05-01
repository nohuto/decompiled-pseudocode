/*
 * XREFs of ?HampOptInOpenPolicyKey@@YAKEPEAPEAUHKEY__@@@Z @ 0x180030CEC
 * Callers:
 *     HamOptInIsPackageFamilyNameEnabledEx @ 0x1800305D8 (HamOptInIsPackageFamilyNameEnabledEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampOptInOpenPolicyKey(__int64 a1, HKEY *a2)
{
  LSTATUS v3; // eax
  HKEY v4; // rcx
  unsigned int v5; // ebx
  HKEY hKey; // [rsp+30h] [rbp-28h] BYREF
  HLOCAL hMem; // [rsp+38h] [rbp-20h]
  HLOCAL v9; // [rsp+40h] [rbp-18h]

  hKey = 0LL;
  hMem = 0LL;
  v9 = 0LL;
  v3 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager",
         0,
         0x20019u,
         &hKey);
  v4 = hKey;
  v5 = v3;
  if ( v3 )
  {
    if ( hKey )
      RegCloseKey(hKey);
  }
  else
  {
    hKey = 0LL;
    *a2 = v4;
  }
  if ( hMem )
    LocalFree(hMem);
  if ( v9 )
    LocalFree(v9);
  return v5;
}

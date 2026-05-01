/*
 * XREFs of IsStartScreenFilterEnabled @ 0x1801913A8
 * Callers:
 *     ?ShouldStartOpenOnUnlock@XamlLauncher@@AEAA_NXZ @ 0x18014B308 (-ShouldStartOpenOnUnlock@XamlLauncher@@AEAA_NXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18014B890 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::queryLockdownMode @ 0x1801912DC (_anonymous_namespace_--queryLockdownMode.c)
 */

__int64 IsStartScreenFilterEnabled()
{
  int LockdownMode; // eax
  HKEY v1; // rdi
  BOOL v2; // ebx
  DWORD cbData; // [rsp+50h] [rbp+8h] BYREF
  DWORD Type; // [rsp+58h] [rbp+10h] BYREF
  int Data; // [rsp+60h] [rbp+18h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+20h] BYREF

  LockdownMode = anonymous_namespace_::queryLockdownMode();
  if ( LockdownMode <= 0 )
    return 0LL;
  if ( LockdownMode <= 2 )
    return 1LL;
  if ( LockdownMode != 3 )
    return 0LL;
  v1 = 0LL;
  hKey = 0LL;
  v2 = !RegOpenKeyExW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\StartMenu",
          0,
          0x20019u,
          &hKey)
    && (v1 = hKey, cbData = 4, !RegQueryValueExW(hKey, L"KioskMode", 0LL, &Type, (LPBYTE)&Data, &cbData))
    && Type == 4
    && Data != 0;
  if ( v1 )
    RegCloseKey(v1);
  return v2;
}

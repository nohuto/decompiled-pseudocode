/*
 * XREFs of ?IsOneCoreEdition@@YAHXZ @ 0x180173770
 * Callers:
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1801734DC (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 *     ?SecurityShim_SharedMessagePortSecurity@@YAJPEBGPEAPEAX@Z @ 0x180173800 (-SecurityShim_SharedMessagePortSecurity@@YAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsOneCoreEdition(void)
{
  unsigned int v0; // ebx
  int Data; // [rsp+40h] [rbp+8h] BYREF
  DWORD cbData; // [rsp+48h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  v0 = 0;
  cbData = 4;
  hKey = 0LL;
  Data = 0;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Input", 0, 0x20019u, &hKey) )
    RegQueryValueExW(hKey, L"IsOneCore", 0LL, 0LL, (LPBYTE)&Data, &cbData);
  if ( hKey )
    RegCloseKey(hKey);
  LOBYTE(v0) = Data == 1;
  return v0;
}

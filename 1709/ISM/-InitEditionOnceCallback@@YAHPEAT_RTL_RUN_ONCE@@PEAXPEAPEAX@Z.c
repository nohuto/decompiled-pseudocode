/*
 * XREFs of ?InitEditionOnceCallback@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1800016B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitEditionOnceCallback(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  unsigned int v3; // eax
  DWORD Type; // [rsp+30h] [rbp-10h] BYREF
  BYTE Data[4]; // [rsp+34h] [rbp-Ch] BYREF
  HKEY hKey; // [rsp+38h] [rbp-8h] BYREF
  DWORD cbData; // [rsp+68h] [rbp+28h] BYREF

  RtlGetDeviceFamilyInfoEnum(0LL, &gdwDeviceFamily, 0LL);
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", 0, 1u, &hKey) )
  {
    if ( hKey )
    {
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"EnableMitInputProcessing", 0LL, &Type, Data, &cbData) && Type == 4 )
      {
        v3 = gdwMitConfig;
        if ( cbData == 4 )
          v3 = *(_DWORD *)Data;
        gdwMitConfig = v3;
      }
    }
  }
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\CoreShell\\ViewEventDispatcher", 0, 1u, &hKey) )
  {
    if ( hKey )
    {
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"RunAsServiceHostComponent", 0LL, (LPDWORD)Data, (LPBYTE)&Type, &cbData)
        && *(_DWORD *)Data == 4
        && cbData == 4 )
      {
        gbIsRunningWithCShell = Type == 1;
      }
    }
  }
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", 0, 1u, &hKey) && hKey )
  {
    cbData = 4;
    RegQueryValueExW(hKey, L"OneCoreNoBootDWM", 0LL, &Type, Data, &cbData);
  }
  return 1LL;
}

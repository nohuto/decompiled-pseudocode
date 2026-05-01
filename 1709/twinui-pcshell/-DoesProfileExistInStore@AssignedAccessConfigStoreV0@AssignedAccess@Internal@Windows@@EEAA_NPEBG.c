/*
 * XREFs of ?DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x1801DEFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::DoesProfileExistInStore(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *this,
        const unsigned __int16 *a2)
{
  char v3; // bl
  HKEY v4; // rsi
  const wchar_t **v5; // rdi
  HKEY phkResult; // [rsp+30h] [rbp-30h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-28h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-20h] BYREF
  int v10; // [rsp+48h] [rbp-18h]
  const wchar_t *v11; // [rsp+50h] [rbp-10h]
  int v12; // [rsp+58h] [rbp-8h]
  char vars0; // [rsp+60h] [rbp+0h] BYREF
  DWORD Type; // [rsp+90h] [rbp+30h] BYREF
  DWORD cbData; // [rsp+98h] [rbp+38h] BYREF

  hKey = 0LL;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown", 0, 0x20019u, &hKey) )
  {
    v3 = 0;
  }
  else
  {
    phkResult = 0LL;
    if ( !RegOpenKeyExW(hKey, a2, 0, 0x20019u, &phkResult) )
    {
      v4 = phkResult;
      v9 = L"AppUserModelId";
      v5 = &v9;
      v12 = 4;
      v3 = 1;
      v11 = L"ConfigLevel";
      v10 = 1;
      while ( !RegQueryValueExW(v4, *v5, 0LL, &Type, 0LL, &cbData) && Type == *((_DWORD *)v5 + 2) && cbData )
      {
        v5 += 2;
        if ( v5 == (const wchar_t **)&vars0 )
          goto LABEL_11;
      }
    }
    v3 = 0;
LABEL_11:
    if ( phkResult )
      RegCloseKey(phkResult);
  }
  if ( hKey )
    RegCloseKey(hKey);
  return v3;
}

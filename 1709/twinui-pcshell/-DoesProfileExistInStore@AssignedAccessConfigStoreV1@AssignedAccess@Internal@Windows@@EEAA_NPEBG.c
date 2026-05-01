/*
 * XREFs of ?DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x1801DF110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::DoesProfileExistInStore(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this,
        const unsigned __int16 *a2)
{
  bool v3; // bl
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF
  HKEY phkResult; // [rsp+58h] [rbp+20h] BYREF

  hKey = 0LL;
  if ( RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration\\Configs",
         0,
         0x20019u,
         &hKey) )
  {
    v3 = 0;
  }
  else
  {
    phkResult = 0LL;
    v3 = RegOpenKeyExW(hKey, a2, 0, 0x20019u, &phkResult) == 0;
    if ( phkResult )
      RegCloseKey(phkResult);
  }
  if ( hKey )
    RegCloseKey(hKey);
  return v3;
}

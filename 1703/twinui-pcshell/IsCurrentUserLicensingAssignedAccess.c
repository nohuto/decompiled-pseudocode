/*
 * XREFs of IsCurrentUserLicensingAssignedAccess @ 0x180191478
 * Callers:
 *     _anonymous_namespace_::isAssignedAccessUser @ 0x180191014 (_anonymous_namespace_--isAssignedAccessUser.c)
 * Callees:
 *     ?QueryStringValue@CRegKey@ATL@@QEAAJPEBGPEAGPEAK@Z @ 0x180190E30 (-QueryStringValue@CRegKey@ATL@@QEAAJPEBGPEAGPEAK@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 IsCurrentUserLicensingAssignedAccess()
{
  HKEY v0; // rdi
  HKEY v1; // rsi
  unsigned int v2; // ebx
  unsigned __int64 v3; // rcx
  DWORD cbData[2]; // [rsp+48h] [rbp-C0h] BYREF
  HKEY phkResult; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+58h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A8h] BYREF
  HKEY v9[4]; // [rsp+68h] [rbp-A0h] BYREF
  BYTE Data[528]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int16 v11[264]; // [rsp+298h] [rbp+190h] BYREF

  v7 = 0LL;
  cbData[1] = 0;
  v9[1] = 0LL;
  v9[2] = 0LL;
  v0 = 0LL;
  phkResult = 0LL;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown", 0, 0x20019u, &phkResult)
    || (v0 = phkResult,
        v9[0] = phkResult,
        cbData[0] = 260,
        ATL::CRegKey::QueryStringValue(v9, L"VDAApp", (BYTE *)v11, cbData)) )
  {
    v2 = 0;
  }
  else
  {
    hKey = 0LL;
    v1 = 0LL;
    if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SYSTEM\\CurrentControlSet\\Control\\ProductOptions", 0, 0x20019u, &hKey)
      || (v1 = hKey,
          cbData[0] = 520,
          v2 = 1,
          RegQueryValueExW(hKey, L"SubscriptionPfnList", 0LL, (LPDWORD)&phkResult, Data, cbData))
      || (_DWORD)phkResult != 7
      || (cbData[0] & 1) != 0
      || !(cbData[0] >> 1)
      || (v3 = (unsigned __int64)cbData[0] >> 1, *((_WORD *)&v9[3] + v3 + 3))
      || cbData[0] >> 1 > 1 && *((_WORD *)&v9[3] + v3 + 2)
      || (int)ClipGetLicenseAndPolicyForPfn(
                Data,
                L"Virtualization-DesktopAccess",
                &cbData[1],
                4LL,
                (char *)&v7 + 4,
                &v7,
                1) >= 0
      && cbData[1] == 1 )
    {
      v2 = 0;
    }
    if ( v1 )
      RegCloseKey(v1);
  }
  if ( v0 )
    RegCloseKey(v0);
  return v2;
}

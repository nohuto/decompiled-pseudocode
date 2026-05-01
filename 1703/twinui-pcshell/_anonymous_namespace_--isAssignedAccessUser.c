/*
 * XREFs of _anonymous_namespace_::isAssignedAccessUser @ 0x180191014
 * Callers:
 *     _anonymous_namespace_::queryLockdownMode @ 0x1801912DC (_anonymous_namespace_--queryLockdownMode.c)
 * Callees:
 *     ?QueryStringValue@CRegKey@ATL@@QEAAJPEBGPEAGPEAK@Z @ 0x180190E30 (-QueryStringValue@CRegKey@ATL@@QEAAJPEBGPEAGPEAK@Z.c)
 *     _anonymous_namespace_::isAdministrator @ 0x180190EC0 (_anonymous_namespace_--isAdministrator.c)
 *     IsCurrentUserLicensingAssignedAccess @ 0x180191478 (IsCurrentUserLicensingAssignedAccess.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

char __fastcall anonymous_namespace_::isAssignedAccessUser(HANDLE TokenHandle)
{
  HKEY v3; // r14
  HKEY v4; // rdi
  PSID *v5; // rbx
  DWORD v6; // esi
  BOOL i; // eax
  PSID *v8; // rcx
  void *v9; // rax
  BOOL v10; // eax
  bool v11; // bl
  WCHAR *v12; // rsi
  LSTATUS v13; // ebx
  LSTATUS Value; // eax
  DWORD ReturnLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HKEY phkResult; // [rsp+40h] [rbp-C8h] BYREF
  BYTE Data[8]; // [rsp+48h] [rbp-C0h] BYREF
  HKEY hKey; // [rsp+50h] [rbp-B8h] BYREF
  LPWSTR StringSid; // [rsp+58h] [rbp-B0h] BYREF
  HKEY v20[3]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 v21[264]; // [rsp+78h] [rbp-90h] BYREF

  if ( (unsigned int)IsCurrentUserLicensingAssignedAccess() )
    return 1;
  hKey = 0LL;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\Windows Embedded\\Lockdown", 0, 0x20019u, &hKey) )
    return 0;
  v3 = hKey;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  memset(v20, 0, sizeof(v20));
  for ( i = GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, ReturnLength);
        ;
        i = GetTokenInformation(TokenHandle, TokenUser, v9, v6, ReturnLength) )
  {
    if ( i )
    {
      v10 = ConvertSidToStringSidW(*v5, &StringSid);
      v8 = v5;
      if ( v10 )
      {
        v12 = StringSid;
        free(v5);
        goto LABEL_20;
      }
LABEL_12:
      free(v8);
      goto LABEL_13;
    }
    v8 = v5;
    if ( v6 >= ReturnLength[0] )
      goto LABEL_12;
    v6 = 16;
    if ( ReturnLength[0] + 1 > 0x10 )
      v6 = ReturnLength[0] + 1;
    v9 = (void *)_o_realloc(v5, v6);
    if ( !v9 )
      break;
    v5 = (PSID *)v9;
  }
  free(v5);
  v12 = 0LL;
LABEL_20:
  if ( !v12 )
    goto LABEL_13;
  phkResult = 0LL;
  v13 = RegOpenKeyExW(v3, v12, 0, 0x20019u, &phkResult);
  if ( !v13 )
  {
    v4 = phkResult;
    v20[0] = phkResult;
  }
  LocalFree(v12);
  if ( v13 )
    goto LABEL_13;
  ReturnLength[0] = 4;
  Value = RegQueryValueExW(v4, L"ConfigLevel", 0LL, (LPDWORD)&phkResult, Data, ReturnLength);
  if ( Value )
  {
    if ( Value == 2 )
      goto LABEL_30;
    goto LABEL_13;
  }
  if ( (_DWORD)phkResult != 4 || *(_DWORD *)Data != 1 && anonymous_namespace_::isAdministrator(TokenHandle) )
    goto LABEL_13;
LABEL_30:
  ReturnLength[0] = 260;
  if ( ATL::CRegKey::QueryStringValue(v20, L"AppUserModelId", (BYTE *)v21, ReturnLength) )
  {
LABEL_13:
    v11 = 0;
    goto LABEL_14;
  }
  v11 = ReturnLength[0] != 0;
LABEL_14:
  if ( v4 )
    RegCloseKey(v4);
  if ( v3 )
    RegCloseKey(v3);
  return v11;
}

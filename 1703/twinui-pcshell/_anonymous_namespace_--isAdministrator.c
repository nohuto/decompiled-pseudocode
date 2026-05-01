/*
 * XREFs of _anonymous_namespace_::isAdministrator @ 0x180190EC0
 * Callers:
 *     _anonymous_namespace_::isAssignedAccessUser @ 0x180191014 (_anonymous_namespace_--isAssignedAccessUser.c)
 *     _anonymous_namespace_::queryLockdownMode @ 0x1801912DC (_anonymous_namespace_--queryLockdownMode.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::isAdministrator(HANDLE TokenHandle)
{
  _DWORD *v1; // rbx
  signed int LastError; // eax
  signed int v4; // ecx
  bool v5; // si
  HLOCAL v6; // rdi
  signed int v7; // eax
  unsigned int v8; // ebp
  int v9; // ebp
  int v10; // ebp
  DWORD TokenInformationLength; // [rsp+58h] [rbp+10h] BYREF
  DWORD cbSid; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  TokenInformationLength = 0;
  if ( !GetTokenInformation(TokenHandle, TokenGroups, 0LL, 0, &TokenInformationLength) )
  {
    if ( GetLastError() != 122 )
      goto LABEL_5;
    v1 = LocalAlloc(0, TokenInformationLength);
    if ( !v1 )
    {
LABEL_8:
      v5 = 1;
      goto LABEL_23;
    }
    if ( !GetTokenInformation(TokenHandle, TokenGroups, v1, TokenInformationLength, &TokenInformationLength) )
    {
LABEL_5:
      LastError = GetLastError();
      v4 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v4 = LastError;
      if ( v4 < 0 )
        goto LABEL_8;
    }
  }
  cbSid = 68;
  v6 = LocalAlloc(0, 0x44uLL);
  if ( v6 )
  {
    if ( !CreateWellKnownSid(WinBuiltinAdministratorsSid, 0LL, v6, &cbSid) )
    {
      LocalFree(v6);
      v6 = 0LL;
    }
    if ( v6 )
    {
      v9 = 0;
      if ( *v1 )
      {
        while ( !EqualSid(v6, *(PSID *)&v1[4 * v9 + 2]) )
        {
          if ( (unsigned int)++v9 >= *v1 )
            goto LABEL_20;
        }
        v10 = 1;
      }
      else
      {
LABEL_20:
        v10 = 0;
      }
      v8 = v10 ^ 1;
      LocalFree(v6);
      goto LABEL_22;
    }
  }
  else
  {
    SetLastError(0xEu);
  }
  v7 = GetLastError();
  v8 = (unsigned __int16)v7 | 0x80070000;
  if ( v7 <= 0 )
    v8 = v7;
LABEL_22:
  v5 = v8 != 1;
LABEL_23:
  if ( v1 )
    LocalFree(v1);
  return v5;
}

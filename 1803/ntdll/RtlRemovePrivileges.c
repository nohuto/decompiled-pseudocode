/*
 * XREFs of RtlRemovePrivileges @ 0x180086DE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 *     ZwAdjustPrivilegesToken @ 0x18009B2E0 (ZwAdjustPrivilegesToken.c)
 */

NTSTATUS __cdecl RtlRemovePrivileges(HANDLE TokenHandle, PULONG PrivilegesToKeep, ULONG PrivilegeCount)
{
  __int64 v3; // rbx
  ULONG v4; // r9d
  NTSTATUS result; // eax
  DWORD v7; // edx
  __int64 i; // rcx
  unsigned __int64 LowPart; // r9
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-1D8h] BYREF
  _TOKEN_PRIVILEGES TokenInformation[27]; // [rsp+40h] [rbp-1C8h] BYREF

  v3 = 0LL;
  v4 = 0;
  if ( PrivilegeCount )
  {
    while ( *PrivilegesToKeep - 2 <= 0x22 )
    {
      v3 |= 1LL << *PrivilegesToKeep;
      ++v4;
      ++PrivilegesToKeep;
      if ( v4 >= PrivilegeCount )
        goto LABEL_4;
    }
    return -1073741811;
  }
  else
  {
LABEL_4:
    result = ZwQueryInformationToken(TokenHandle, 3u, TokenInformation, 0x1B0u, ReturnLength);
    if ( result >= 0 )
    {
      v7 = TokenInformation[0].PrivilegeCount;
      for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
      {
        LowPart = TokenInformation[0].Privileges[i].Luid.LowPart;
        if ( _bittest64(&v3, LowPart) )
        {
          v3 &= ~(1LL << LowPart);
        }
        else
        {
          TokenInformation[0].Privileges[i].Attributes = 4;
          v7 = TokenInformation[0].PrivilegeCount;
        }
      }
      if ( v3 )
        return 262;
      else
        return ZwAdjustPrivilegesToken(TokenHandle, 0, TokenInformation, 0x1B0u, 0LL, 0LL);
    }
  }
  return result;
}

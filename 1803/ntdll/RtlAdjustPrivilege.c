/*
 * XREFs of RtlAdjustPrivilege @ 0x18007B4A0
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008A690 (RtlpVerifyAndCommitUILanguageSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenThreadToken @ 0x18009AF40 (ZwOpenThreadToken.c)
 *     ZwAdjustPrivilegesToken @ 0x18009B2E0 (ZwAdjustPrivilegesToken.c)
 *     ZwOpenProcessToken @ 0x18009CED0 (ZwOpenProcessToken.c)
 */

NTSTATUS __cdecl RtlAdjustPrivilege(ULONG Privilege, BOOLEAN Enable, BOOLEAN Client, PBOOLEAN WasEnabled)
{
  NTSTATUS result; // eax
  int v8; // edi
  HANDLE TokenHandle[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG ReturnLength; // [rsp+40h] [rbp-30h] BYREF
  _TOKEN_PRIVILEGES NewState; // [rsp+48h] [rbp-28h] BYREF
  _TOKEN_PRIVILEGES PreviousState; // [rsp+58h] [rbp-18h] BYREF

  if ( Client == 1 )
    result = ZwOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x28u, 0, TokenHandle);
  else
    result = ZwOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, TokenHandle);
  if ( result >= 0 )
  {
    TokenHandle[1] = (HANDLE)Privilege;
    NewState.Privileges[0].Luid = (LUID)Privilege;
    NewState.PrivilegeCount = 1;
    NewState.Privileges[0].Attributes = Enable != 0 ? 2 : 0;
    v8 = ZwAdjustPrivilegesToken(TokenHandle[0], 0, &NewState, 0x10u, &PreviousState, &ReturnLength);
    ZwClose(TokenHandle[0]);
    if ( v8 == 262 )
      v8 = -1073741727;
    if ( v8 >= 0 )
    {
      if ( PreviousState.PrivilegeCount )
        *WasEnabled = (PreviousState.Privileges[0].Attributes & 2) != 0;
      else
        *WasEnabled = Enable;
    }
    return v8;
  }
  return result;
}

/*
 * XREFs of ?SetDisconnectDesktopSecurity@@YAJPEAUHDESK__@@@Z @ 0x1C00D7FB0
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00D7E24 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall SetDisconnectDesktopSecurity(HDESK Handle)
{
  __int64 v2; // rsi
  void *v3; // rdi
  ULONG v4; // eax
  void *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  void *v8; // rbp
  NTSTATUS v9; // ebx
  __int64 v10; // rax
  void *SecurityDescriptor; // rax
  unsigned int v13; // [rsp+30h] [rbp-38h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-34h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  v2 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v3 = 0LL;
  v4 = RtlLengthRequiredSid(1u);
  v5 = (void *)Win32AllocPoolWithQuota(v4, 1702064981LL);
  v8 = v5;
  if ( v5 )
  {
    *RtlSubAuthoritySid(v5, 0) = 18;
    v9 = RtlInitializeSid(v8, &IdentifierAuthority, 1u);
  }
  else
  {
    v9 = -1073741801;
  }
  if ( v9 >= 0 )
  {
    v10 = AllocAce(0LL, 0LL, 0LL, 983551LL, v8, &v13);
    v2 = v10;
    if ( v10 && (SecurityDescriptor = (void *)CreateSecurityDescriptor(v10, v13, 0LL), (v3 = SecurityDescriptor) != 0LL) )
      v9 = ZwSetSecurityObject(Handle, 4u, SecurityDescriptor);
    else
      v9 = -1073741801;
  }
  if ( v8 )
    Win32FreePool(v8, v6, v7);
  if ( v2 )
    Win32FreePool(v2, v6, v7);
  if ( v3 )
    Win32FreePool(v3, v6, v7);
  return (unsigned int)v9;
}

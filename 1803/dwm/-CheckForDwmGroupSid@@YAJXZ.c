/*
 * XREFs of ?CheckForDwmGroupSid@@YAJXZ @ 0x140002A20
 * Callers:
 *     WinMain @ 0x140001AC0 (WinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x140003040 (__security_check_cookie.c)
 */

__int64 CheckForDwmGroupSid(void)
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax
  signed int LastError; // eax
  int v4; // r9d
  ULONG SubAuthority2; // [rsp+20h] [rbp-68h]
  WINBOOL IsMember; // [rsp+60h] [rbp-28h] BYREF
  PSID SidToCheck; // [rsp+68h] [rbp-20h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+70h] [rbp-18h] BYREF

  v0 = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  SidToCheck = 0LL;
  IsMember = 0;
  v1 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 2u, 0x5Au, 0, 0, 0, 0, 0, 0, 0, &SidToCheck);
  if ( v1 < 0 )
  {
    v0 = v1 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1 | 0x10000000, 0x20u);
  }
  else
  {
    SetLastError(0);
    if ( CheckTokenMembership(0LL, SidToCheck, &IsMember) )
    {
      if ( IsMember )
        goto LABEL_4;
      v0 = -2147024891;
      SubAuthority2 = 38;
      v4 = -2147024891;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      SubAuthority2 = 34;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v0 = LastError;
      v4 = LastError;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, SubAuthority2);
  }
LABEL_4:
  if ( SidToCheck )
    RtlFreeSid(SidToCheck);
  return v0;
}

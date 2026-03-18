/*
 * XREFs of ?ModifyTokenPrivileges@@YAJXZ @ 0x140002AA0
 * Callers:
 *     wWinMain @ 0x140001A80 (wWinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001910 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x140003960 (__security_check_cookie.c)
 */

__int64 ModifyTokenPrivileges(void)
{
  unsigned int v0; // ebx
  HANDLE CurrentProcess; // rax
  signed int LastError; // eax
  unsigned int PreviousState; // [rsp+20h] [rbp-60h]
  void *TokenHandle; // [rsp+38h] [rbp-48h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [rsp+40h] [rbp-40h] BYREF
  __int64 v7; // [rsp+50h] [rbp-30h]
  int v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+5Ch] [rbp-24h]
  int v10; // [rsp+64h] [rbp-1Ch]
  __int64 v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]

  v0 = 0;
  TokenHandle = 0LL;
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  if ( OpenProcessToken(CurrentProcess, 0x20u, &TokenHandle) )
  {
    NewState.Privileges[0].Luid = (LUID)30LL;
    v7 = 23LL;
    v9 = 33LL;
    v11 = 14LL;
    NewState.PrivilegeCount = 4;
    NewState.Privileges[0].Attributes = 2;
    v8 = 2;
    v10 = 2;
    v12 = 2;
    SetLastError(0);
    if ( AdjustTokenPrivileges(TokenHandle, 0, &NewState, 0x34u, 0LL, 0LL) )
      goto LABEL_3;
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    PreviousState = 77;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    PreviousState = 60;
  }
  if ( LastError >= 0 )
    LastError = -2003304445;
  v0 = LastError;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, PreviousState);
LABEL_3:
  if ( TokenHandle )
    CloseHandle(TokenHandle);
  return v0;
}

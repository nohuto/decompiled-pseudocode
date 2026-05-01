/*
 * XREFs of ?RmpSystemEnableAsyncInSwap@@YAXXZ @ 0x180061610
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180037CC4 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void RmpSystemEnableAsyncInSwap(void)
{
  int v0; // ebx
  NTSTATUS v1; // eax
  const struct _TlgProvider_t *v2; // rcx
  NTSTATUS v3; // [rsp+38h] [rbp-29h] BYREF
  __int64 v4; // [rsp+40h] [rbp-21h] BYREF
  void *TokenHandle[2]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD SystemInformation[3]; // [rsp+58h] [rbp-9h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [rsp+70h] [rbp+Fh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp+1Fh] BYREF
  NTSTATUS *v9; // [rsp+A0h] [rbp+3Fh]
  __int64 v10; // [rsp+A8h] [rbp+47h]

  TokenHandle[0] = 0LL;
  v0 = 0;
  if ( ImpersonateSelf(SecurityImpersonation) )
  {
    v0 = 1;
    v3 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x20u, 0, TokenHandle);
    if ( v3 >= 0 )
    {
      TokenHandle[1] = (void *)13;
      NewState.Privileges[0].Luid = (LUID)13LL;
      NewState.PrivilegeCount = 1;
      NewState.Privileges[0].Attributes = 2;
      v3 = NtAdjustPrivilegesToken(TokenHandle[0], 0, &NewState, 0x10u, 0LL, 0LL);
      if ( !v3 )
      {
        SystemInformation[1] = &v4;
        SystemInformation[0] = 0x1300000001LL;
        SystemInformation[2] = 8LL;
        v4 = 0x101000004LL;
        v1 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
        if ( v1 >= 0 )
          v1 = 0;
        v3 = v1;
      }
    }
  }
  else
  {
    v3 = -1073741555;
  }
  if ( TokenHandle[0] )
    NtClose(TokenHandle[0]);
  if ( v0 )
    RevertToSelf();
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v10 = 4LL;
      v9 = &v3;
      TlgWrite(v2, &unk_180080B8C, 0LL, 0LL, 3u, &pData);
    }
  }
}

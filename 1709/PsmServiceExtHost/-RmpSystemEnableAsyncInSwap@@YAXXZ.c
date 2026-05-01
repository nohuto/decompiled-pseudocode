/*
 * XREFs of ?RmpSystemEnableAsyncInSwap@@YAXXZ @ 0x180040CB4
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800242F0 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void RmpSystemEnableAsyncInSwap(void)
{
  int v0; // ebx
  NTSTATUS v1; // eax
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  NTSTATUS v5; // [rsp+38h] [rbp-29h] BYREF
  __int64 v6; // [rsp+40h] [rbp-21h] BYREF
  void *TokenHandle[2]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD SystemInformation[3]; // [rsp+58h] [rbp-9h] BYREF
  struct _TOKEN_PRIVILEGES NewState; // [rsp+70h] [rbp+Fh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp+1Fh] BYREF
  NTSTATUS *v11; // [rsp+A0h] [rbp+3Fh]
  __int64 v12; // [rsp+A8h] [rbp+47h]

  TokenHandle[0] = 0LL;
  v0 = 0;
  if ( ImpersonateSelf(SecurityImpersonation) )
  {
    v0 = 1;
    v5 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0x20u, 0, TokenHandle);
    if ( v5 >= 0 )
    {
      TokenHandle[1] = (void *)13;
      NewState.Privileges[0].Luid = (LUID)13LL;
      NewState.PrivilegeCount = 1;
      NewState.Privileges[0].Attributes = 2;
      v5 = NtAdjustPrivilegesToken(TokenHandle[0], 0, &NewState, 0x10u, 0LL, 0LL);
      if ( !v5 )
      {
        SystemInformation[1] = &v6;
        SystemInformation[0] = 0x1300000001LL;
        v6 = 0x101000003LL;
        SystemInformation[2] = 8LL;
        v1 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
        if ( v1 >= 0 )
          v1 = 0;
        v5 = v1;
      }
    }
  }
  else
  {
    v5 = -1073741555;
  }
  if ( TokenHandle[0] )
    NtClose(TokenHandle[0]);
  if ( v0 )
    RevertToSelf();
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v12 = 4LL;
      v11 = &v5;
      TlgWrite(v2, &unk_18005A921, v3, v4, 3u, &pData);
    }
  }
}

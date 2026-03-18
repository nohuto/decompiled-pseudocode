/*
 * XREFs of NtUserRemoteRedrawScreen @ 0x1C01DE9F0
 * Callers:
 *     <none>
 * Callees:
 *     RemoteRedrawScreen @ 0x1C013A8A8 (RemoteRedrawScreen.c)
 */

__int64 NtUserRemoteRedrawScreen()
{
  __int64 v0; // rcx
  __int64 CurrentProcess; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // ebx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v0);
  v5 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( gnShadowers || gbConnected )
      v6 = RemoteRedrawScreen();
    else
      v6 = -1073741823;
  }
  else
  {
    v6 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v5, v2, v3, v4);
  return v6;
}

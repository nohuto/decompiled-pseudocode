/*
 * XREFs of ?TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ @ 0x1800DDBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetCallingProcessId@CallerIdentity@@YAJPEAK@Z @ 0x1801C19C4 (-GetCallingProcessId@CallerIdentity@@YAJPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RemoteLauncherForegroundHandler::TryAcquireForegroundRightsForRemoteLaunch(
        RemoteLauncherForegroundHandler *this,
        unsigned int *a2)
{
  int CallingProcessId; // ebx
  __int64 v4; // rdx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwProcessId; // [rsp+38h] [rbp+10h] BYREF

  dwProcessId = 0;
  CallingProcessId = CallerIdentity::GetCallingProcessId((CallerIdentity *)&dwProcessId, a2);
  if ( CallingProcessId < 0 )
  {
    v4 = 31LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\remotelauncherforegroundhandler\\lib\\remotelauncherforegroundhandler.cpp",
      (const char *)(unsigned int)CallingProcessId);
    return (unsigned int)CallingProcessId;
  }
  CallingProcessId = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 24LL))(*((_QWORD *)this + 7));
  if ( CallingProcessId < 0 )
  {
    v4 = 32LL;
    goto LABEL_3;
  }
  if ( AllowSetForegroundWindow(dwProcessId) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x21,
             (__int64)"pcshell\\twinui\\remotelauncherforegroundhandler\\lib\\remotelauncherforegroundhandler.cpp",
             v6);
}

/*
 * XREFs of ?TryAcquireForegroundRightsForRemoteLaunch@RemoteLauncherForegroundHandler@@UEAAJXZ @ 0x18018A4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x18008EE04 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18008EE28 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall RemoteLauncherForegroundHandler::TryAcquireForegroundRightsForRemoteLaunch(
        RemoteLauncherForegroundHandler *this)
{
  DWORD ProcessId; // edi
  __int64 v3; // rcx
  int CallingProcessHandle; // ebx
  __int64 v5; // rdx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE Process; // [rsp+38h] [rbp+10h] BYREF

  ProcessId = 0;
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&Process);
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v3, 0, &Process);
  if ( CallingProcessHandle >= 0 )
    ProcessId = GetProcessId(Process);
  CAutoHandle<void *>::~CAutoHandle<void *>(&Process);
  if ( CallingProcessHandle < 0 )
  {
    v5 = 31LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\remotelauncherforegroundhandler\\lib\\remotelauncherforegroundhandler.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
    return (unsigned int)CallingProcessHandle;
  }
  CallingProcessHandle = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6));
  if ( CallingProcessHandle < 0 )
  {
    v5 = 32LL;
    goto LABEL_5;
  }
  if ( AllowSetForegroundWindow(ProcessId) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x21,
             (__int64)"pcshell\\twinui\\remotelauncherforegroundhandler\\lib\\remotelauncherforegroundhandler.cpp",
             v7);
}

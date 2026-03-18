/*
 * XREFs of NtUserSetActiveProcessForMonitor @ 0x1C0042E30
 * Callers:
 *     <none>
 * Callees:
 *     xxxRefreshDisplayOrientation @ 0x1C0042640 (xxxRefreshDisplayOrientation.c)
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C00907F8 (LockProcessByClientId.c)
 *     ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x1C01AC340 (-IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall NtUserSetActiveProcessForMonitor(int a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  struct tagMONITOR *v4; // rdi
  __int64 v6; // r8
  __int64 ProcessWin32Process; // rsi
  __int64 v9; // rcx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = a1;
  v4 = 0LL;
  UserSessionSwitchEnterCrit();
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent)
    && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 432) + 8LL) + 160LL) )
  {
    v9 = 5LL;
LABEL_13:
    UserSetLastError(v9);
    goto LABEL_9;
  }
  if ( a2 && (v4 = (struct tagMONITOR *)ValidateHmonitor(a2)) == 0LL || (int)LockProcessByClientId(v3, &Object) < 0 )
  {
    v9 = 87LL;
    goto LABEL_13;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( ProcessWin32Process )
  {
    if ( !v4 || (unsigned int)IsMonitorConnectedToInternalPanel(v4) )
    {
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 256LL) = ProcessWin32Process;
      xxxRefreshDisplayOrientation();
    }
    v2 = 1LL;
  }
  else
  {
    UserSetLastError(87LL);
  }
  ObfDereferenceObject(Object);
LABEL_9:
  LeaveCrit();
  return v2;
}

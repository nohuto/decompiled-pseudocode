/*
 * XREFs of NtUserSetActiveProcessForMonitor @ 0x1C00BA1B0
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C001BB38 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     xxxRefreshDisplayOrientation @ 0x1C00BA280 (xxxRefreshDisplayOrientation.c)
 *     ?IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z @ 0x1C01A8FB8 (-IsMonitorConnectedToInternalPanel@@YAHPEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall NtUserSetActiveProcessForMonitor(int a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v3; // rbp
  struct tagMONITOR *v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 ProcessWin32Process; // rsi
  __int64 v11; // rcx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = (void *)a1;
  v4 = 0LL;
  UserSessionSwitchEnterCrit();
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v7 + 408) + 8LL);
    if ( *(_QWORD *)(v6 + 160) )
    {
      v11 = 5LL;
LABEL_13:
      UserSetLastError(v11);
      goto LABEL_9;
    }
  }
  if ( a2 && (v4 = (struct tagMONITOR *)ValidateHmonitor(a2, v6, v7, v8)) == 0LL
    || (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) < 0 )
  {
    v11 = 87LL;
    goto LABEL_13;
  }
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( ProcessWin32Process )
  {
    if ( !v4 || (unsigned int)IsMonitorConnectedToInternalPanel(v4) )
    {
      *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 256LL) = ProcessWin32Process;
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

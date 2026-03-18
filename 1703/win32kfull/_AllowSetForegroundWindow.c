/*
 * XREFs of _AllowSetForegroundWindow @ 0x1C00191D0
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C001BB38 (LockProcessByClientId.c)
 *     CanForceForeground @ 0x1C001BDE0 (CanForceForeground.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall AllowSetForegroundWindow(int a1)
{
  __int64 v1; // rdi
  bool v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx
  __int64 ProcessWin32Process; // rsi
  struct tagTHREADINFO *PtiLastWokenHotKey; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  v2 = 0;
  v5 = IAMThreadAccessGranted(gptiCurrent);
  if ( v5 )
  {
    v3 = gppiLockSFW;
    gppiLockSFW = 0LL;
  }
  v6 = v5 != 0;
  if ( !v5 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4, v3);
    v6 = CanForceForeground(CurrentProcessWin32Process);
  }
  if ( !v6 )
  {
    v8 = 5LL;
LABEL_7:
    UserSetLastError(v8);
    return 0LL;
  }
  if ( (_DWORD)v1 == -1 )
  {
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  }
  else
  {
    if ( (int)LockProcessByClientId(v1, &Object) < 0
      || (ProcessWin32Process = PsGetProcessWin32Process(Object), ObfDereferenceObject(Object), !ProcessWin32Process) )
    {
      v8 = 87LL;
      goto LABEL_7;
    }
    PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
    v14 = PsGetCurrentProcessWin32Process(v13, v12);
    if ( (unsigned int)IsDesktopApp(v14)
      && (!PtiLastWokenHotKey || *((_QWORD *)PtiLastWokenHotKey + 47) == PsGetCurrentProcessWin32Process(v16, v15)) )
    {
      v2 = 1;
    }
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(ProcessWin32Process + 288), v2);
  }
  return 1LL;
}

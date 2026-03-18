/*
 * XREFs of _AllowSetForegroundWindow @ 0x1C0110E60
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C00907F8 (LockProcessByClientId.c)
 *     CanForceForeground @ 0x1C0090A90 (CanForceForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall AllowSetForegroundWindow(int a1)
{
  void *v1; // rdi
  bool v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  BOOL v5; // r8d
  int v6; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx
  __int64 ProcessWin32Process; // rsi
  struct tagTHREADINFO *PtiLastWokenHotKey; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = (void *)a1;
  v2 = 0;
  v5 = IAMThreadAccessGranted(gptiCurrent);
  if ( v5 )
  {
    v3 = gppiLockSFW;
    gppiLockSFW = 0LL;
  }
  v6 = v5;
  if ( !v5 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v6 = CanForceForeground(CurrentProcessWin32Process);
  }
  if ( !v6 )
  {
    v8 = 5LL;
LABEL_7:
    UserSetLastError(v8, v3);
    return 0LL;
  }
  if ( (_DWORD)v1 == -1 )
  {
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  }
  else
  {
    if ( (int)LockProcessByClientId(v1, (PEPROCESS *)&Object) < 0
      || (ProcessWin32Process = PsGetProcessWin32Process(Object), ObfDereferenceObject(Object), !ProcessWin32Process) )
    {
      v8 = 87LL;
      goto LABEL_7;
    }
    PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
    v13 = PsGetCurrentProcessWin32Process(v12);
    if ( (unsigned int)IsDesktopApp(v13, v14, v15, v16)
      && (!PtiLastWokenHotKey || *((_QWORD *)PtiLastWokenHotKey + 50) == PsGetCurrentProcessWin32Process(v17)) )
    {
      v2 = 1;
    }
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(ProcessWin32Process + 296), v2);
  }
  return 1LL;
}

/*
 * XREFs of xxxEnableWindow @ 0x1C009DF50
 * Callers:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxEnableScrollBar @ 0x1C0083C74 (xxxEnableScrollBar.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C009DE30 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01B5244 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx

  if ( IsNonImmersiveBand((__int64)a1) )
    return xxxEnableWindowWorker(a1, a2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  if ( !(unsigned int)IsDesktopApp(CurrentProcessWin32Process, v7, v8, v9)
    || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent) )
  {
    return xxxEnableWindowWorker(a1, a2);
  }
  UserSetLastError(5LL, v10);
  return (*((unsigned __int8 *)a1 + 71) >> 3) & 1;
}

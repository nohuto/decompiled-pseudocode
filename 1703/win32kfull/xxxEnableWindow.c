/*
 * XREFs of xxxEnableWindow @ 0x1C00B7870
 * Callers:
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxEnableScrollBar @ 0x1C00D7060 (xxxEnableScrollBar.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00B78BC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     IsNonImmersiveBand @ 0x1C00B79A8 (IsNonImmersiveBand.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01B21BC (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax

  v2 = a2;
  if ( (unsigned int)IsNonImmersiveBand(a1, a2) )
    return xxxEnableWindowWorker(a1, v2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4);
  if ( !(unsigned int)IsDesktopApp(CurrentProcessWin32Process)
    || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent) )
  {
    return xxxEnableWindowWorker(a1, v2);
  }
  UserSetLastError(5LL);
  return (*((unsigned __int8 *)a1 + 71) >> 3) & 1;
}

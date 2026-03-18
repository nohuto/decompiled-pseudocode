/*
 * XREFs of zzzInternalHideCaret @ 0x1C0038688
 * Callers:
 *     NtUserHideCaret @ 0x1C00384B0 (NtUserHideCaret.c)
 *     xxxBeginPaint @ 0x1C005DAD0 (xxxBeginPaint.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 *     zzzInternalDestroyCaret @ 0x1C00B031C (zzzInternalDestroyCaret.c)
 *     zzzHideCaret @ 0x1C020BE4C (zzzHideCaret.c)
 * Callees:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0028A5C (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00AFDFC (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void zzzInternalHideCaret()
{
  __int64 v0; // rbx

  v0 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( (*(_DWORD *)(v0 + 264) & 1) != 0 )
    UT_InvertCaret();
  *(_DWORD *)(v0 + 264) &= ~1u;
  if ( ++*(_DWORD *)(v0 + 268) == 1 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v0 + 256), (struct tagQ *)v0);
    xxxWindowEvent(32771, *(_QWORD *)(v0 + 256), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
  }
}

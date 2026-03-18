/*
 * XREFs of zzzInternalHideCaret @ 0x1C0064468
 * Callers:
 *     NtUserHideCaret @ 0x1C0064270 (NtUserHideCaret.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     xxxBeginPaint @ 0x1C007F174 (xxxBeginPaint.c)
 *     zzzInternalDestroyCaret @ 0x1C00849D4 (zzzInternalDestroyCaret.c)
 *     zzzHideCaret @ 0x1C020DDBC (zzzHideCaret.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C007DB30 (-UT_InvertCaret@@YAXXZ.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00844C0 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void zzzInternalHideCaret()
{
  __int64 v0; // rbx

  v0 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( (*(_DWORD *)(v0 + 296) & 1) != 0 )
    UT_InvertCaret();
  *(_DWORD *)(v0 + 296) &= ~1u;
  if ( ++*(_DWORD *)(v0 + 300) == 1 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v0 + 288), (struct tagQ *)v0);
    xxxWindowEvent(32771, *(_QWORD *)(v0 + 288), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
  }
}

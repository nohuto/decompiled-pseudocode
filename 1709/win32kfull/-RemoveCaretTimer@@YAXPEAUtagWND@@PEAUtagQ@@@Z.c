/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00844C0
 * Callers:
 *     zzzInternalHideCaret @ 0x1C0064468 (zzzInternalHideCaret.c)
 *     CaretBlinkProc @ 0x1C0081230 (CaretBlinkProc.c)
 *     zzzSetCaretPos @ 0x1C0084540 (zzzSetCaretPos.c)
 *     _SetCaretBlinkTime @ 0x1C011C350 (_SetCaretBlinkTime.c)
 * Callees:
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 42) )
  {
    FindTimer((_DWORD)a1, 0xFFFF, 2, 1, 0LL);
    *((_QWORD *)a2 + 42) = 0LL;
  }
}

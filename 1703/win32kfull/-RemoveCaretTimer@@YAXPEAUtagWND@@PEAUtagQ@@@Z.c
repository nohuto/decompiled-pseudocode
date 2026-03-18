/*
 * XREFs of ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00AFDFC
 * Callers:
 *     zzzInternalHideCaret @ 0x1C0038688 (zzzInternalHideCaret.c)
 *     zzzSetCaretPos @ 0x1C00AFE70 (zzzSetCaretPos.c)
 *     _SetCaretBlinkTime @ 0x1C00BB9A0 (_SetCaretBlinkTime.c)
 *     CaretBlinkProc @ 0x1C00C8AF0 (CaretBlinkProc.c)
 * Callees:
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 */

void __fastcall RemoveCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  if ( *((_QWORD *)a2 + 37) )
  {
    FindTimer((_DWORD)a1, 0xFFFF, 2, 1, 0LL);
    *((_QWORD *)a2 + 37) = 0LL;
  }
}

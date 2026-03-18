/*
 * XREFs of ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00B218C
 * Callers:
 *     zzzInternalShowCaret @ 0x1C00385D8 (zzzInternalShowCaret.c)
 *     zzzSetCaretPos @ 0x1C00AFE70 (zzzSetCaretPos.c)
 *     _SetCaretBlinkTime @ 0x1C00BB9A0 (_SetCaretBlinkTime.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00B21F0 (_SetSystemTimer.c)
 */

void __fastcall CreateCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  int v2; // r8d

  if ( !*((_QWORD *)a2 + 37) )
  {
    v2 = *(_DWORD *)(gpsi + 5392LL);
    if ( v2 != -1 && ((*(_DWORD *)(gpsi + 2220LL) & 4) != 0 || !gProtocolType) )
      *((_QWORD *)a2 + 37) = SetSystemTimer((_DWORD)a1, 0xFFFF, v2, (unsigned int)CaretBlinkProc, 0);
  }
}

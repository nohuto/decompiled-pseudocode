/*
 * XREFs of ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00861CC
 * Callers:
 *     zzzInternalShowCaret @ 0x1C0064398 (zzzInternalShowCaret.c)
 *     zzzSetCaretPos @ 0x1C0084540 (zzzSetCaretPos.c)
 *     _SetCaretBlinkTime @ 0x1C011C350 (_SetCaretBlinkTime.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0086E20 (_SetSystemTimer.c)
 */

void __fastcall CreateCaretTimer(struct tagWND *a1, struct tagQ *a2)
{
  int v3; // edi

  v3 = (int)a1;
  if ( !*((_QWORD *)a2 + 42)
    && *(_DWORD *)(gpsi + 4980LL) != -1
    && *(_DWORD *)UPDWORDPointer(8226LL)
    && ((*(_DWORD *)(gpsi + 2220LL) & 4) != 0 || !gProtocolType) )
  {
    *((_QWORD *)a2 + 42) = SetSystemTimer(v3, 0xFFFF, *(_DWORD *)(gpsi + 4980LL), (unsigned int)CaretBlinkProc, 0);
    if ( *(_DWORD *)(gpsi + 4980LL) )
      *((_DWORD *)a2 + 76) = *(_DWORD *)UPDWORDPointer(8226LL) / *(_DWORD *)(gpsi + 4980LL) + 1;
    else
      *((_DWORD *)a2 + 76) = -1;
  }
}

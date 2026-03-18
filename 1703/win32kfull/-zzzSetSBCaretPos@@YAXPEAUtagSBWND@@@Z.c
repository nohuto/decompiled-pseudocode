/*
 * XREFs of ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C020ED14
 * Callers:
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 * Callees:
 *     zzzSetCaretPos @ 0x1C00AFE70 (zzzSetCaretPos.c)
 */

void __fastcall zzzSetSBCaretPos(struct tagSBWND *a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // ecx

  if ( *(_QWORD *)a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL) )
  {
    v1 = *((_DWORD *)a1 + 2);
    if ( v1 )
      v2 = *((_DWORD *)a1 + 17);
    else
      v2 = *((_DWORD *)a1 + 10);
    if ( v1 )
      v3 = *((_DWORD *)a1 + 10);
    else
      v3 = *((_DWORD *)a1 + 17);
    zzzSetCaretPos(v3 + 2, v2 + 2);
  }
}

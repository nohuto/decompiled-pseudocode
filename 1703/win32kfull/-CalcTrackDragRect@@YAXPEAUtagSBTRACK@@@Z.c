/*
 * XREFs of ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020DEA4
 * Callers:
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020E1C8 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     xxxSBTrackInit @ 0x1C020F468 (xxxSBTrackInit.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

void __fastcall CalcTrackDragRect(struct tagSBTRACK *a1)
{
  _DWORD *v1; // rbx
  _DWORD *v2; // rsi
  int v4; // edx
  __int64 v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d

  v1 = (_DWORD *)((char *)a1 + 32);
  v2 = (_DWORD *)((char *)a1 + 32);
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      v4 = *(_DWORD *)(gpsi + 1916LL);
    else
      v4 = *(_DWORD *)(gpsi + 2304LL);
    ++v1;
  }
  else
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      v4 = *(_DWORD *)(gpsi + 1920LL);
    else
      v4 = *(_DWORD *)(gpsi + 2308LL);
    v2 = v1 + 1;
  }
  v5 = *((_QWORD *)a1 + 12);
  v6 = 2 * v4;
  v7 = *(_DWORD *)(v5 + 24);
  v8 = 8 * (*(_DWORD *)(v5 + 28) - v7);
  *v2 = v7 - v8;
  *v1 = *(_DWORD *)(*((_QWORD *)a1 + 12) + 16LL) - v6;
  v2[2] = v8 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 28LL);
  v1[2] = v6 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 20LL);
}

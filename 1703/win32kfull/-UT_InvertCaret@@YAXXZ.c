/*
 * XREFs of ?UT_InvertCaret@@YAXXZ @ 0x1C0028A5C
 * Callers:
 *     zzzInternalShowCaret @ 0x1C00385D8 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C0038688 (zzzInternalHideCaret.c)
 *     zzzSetCaretPos @ 0x1C00AFE70 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x1C00C8AF0 (CaretBlinkProc.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0029270 (GrePolyPatBlt.c)
 *     IsVisible @ 0x1C0069E24 (IsVisible.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GreSaveDC @ 0x1C007DF40 (GreSaveDC.c)
 *     _ExcludeUpdateRgn @ 0x1C00F82DC (_ExcludeUpdateRgn.c)
 */

void UT_InvertCaret(void)
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 DC; // rax
  __int64 v3; // rbp
  HDC v4; // rsi
  __int64 v5; // rbx

  v0 = *(_QWORD *)(gptiCurrent + 384LL);
  v1 = *(_QWORD *)(v0 + 256);
  if ( v1 && (unsigned int)IsVisible(*(_QWORD *)(v0 + 256)) )
  {
    DC = _GetDC();
    v3 = *(_QWORD *)(v1 + 176);
    v4 = (HDC)DC;
    if ( v3 )
    {
      GreSaveDC(DC);
      if ( (*(_BYTE *)(v1 + 61) & 1) != 0 )
        ExcludeUpdateRgn(v4);
    }
    if ( *(_QWORD *)(v0 + 288) > 1uLL )
    {
      v5 = GreSelectBitmap(ghdcMem, *(_QWORD *)(v0 + 288));
      NtGdiBitBltInternal(v4, *(unsigned int *)(v0 + 272), *(unsigned int *)(v0 + 276), *(unsigned int *)(v0 + 284));
      GreSelectBitmap(ghdcMem, v5);
    }
    else
    {
      GrePolyPatBlt(v4);
    }
    if ( v3 )
      GreRestoreDC(v4, 0xFFFFFFFFLL);
    _ReleaseDC(v4);
  }
  else
  {
    *(_DWORD *)(v0 + 264) &= ~1u;
  }
}

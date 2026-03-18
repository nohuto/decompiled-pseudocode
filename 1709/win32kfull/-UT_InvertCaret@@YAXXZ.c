/*
 * XREFs of ?UT_InvertCaret@@YAXXZ @ 0x1C007DB30
 * Callers:
 *     zzzInternalShowCaret @ 0x1C0064398 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C0064468 (zzzInternalHideCaret.c)
 *     CaretBlinkProc @ 0x1C0081230 (CaretBlinkProc.c)
 *     zzzSetCaretPos @ 0x1C0084540 (zzzSetCaretPos.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     IsVisible @ 0x1C006D048 (IsVisible.c)
 *     GrePolyPatBlt @ 0x1C007F804 (GrePolyPatBlt.c)
 *     _ExcludeUpdateRgn @ 0x1C0080120 (_ExcludeUpdateRgn.c)
 *     GreSaveDC @ 0x1C0080270 (GreSaveDC.c)
 */

void UT_InvertCaret(void)
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 DC; // rax
  __int64 v3; // rbp
  HDC v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _DWORD v7[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]

  v0 = *(_QWORD *)(gptiCurrent + 408LL);
  v1 = *(_QWORD *)(v0 + 288);
  if ( v1 && (unsigned int)IsVisible(*(_QWORD *)(v0 + 288)) )
  {
    DC = _GetDC();
    v3 = *(_QWORD *)(v1 + 176);
    v4 = (HDC)DC;
    if ( v3 )
    {
      GreSaveDC(DC);
      if ( (*(_BYTE *)(v1 + 61) & 1) != 0 )
        ExcludeUpdateRgn(v4, (struct tagWND *)v1);
    }
    v5 = *(_QWORD *)(v0 + 328);
    if ( v5 > 1 )
    {
      v6 = GreSelectBitmap(*(_QWORD *)ghdcMem, *(_QWORD *)(v0 + 328));
      NtGdiBitBltInternal(
        v4,
        *(_DWORD *)(v0 + 308),
        *(_DWORD *)(v0 + 312),
        *(_DWORD *)(v0 + 320),
        *(_DWORD *)(v0 + 316),
        *(HDC *)ghdcMem,
        0,
        0,
        6684742,
        0,
        0);
      GreSelectBitmap(*(_QWORD *)ghdcMem, v6);
    }
    else
    {
      v7[0] = *(_DWORD *)(v0 + 308);
      v7[1] = *(_DWORD *)(v0 + 312);
      v7[2] = *(_DWORD *)(v0 + 320);
      v7[3] = *(_DWORD *)(v0 + 316);
      if ( v5 == 1 )
        v8 = *(_QWORD *)(gpsi + 4928LL);
      else
        v8 = ghbrWhite;
      GrePolyPatBlt(v4, 0x5A0049u, (struct _POLYPATBLT *)v7, 1u);
    }
    if ( v3 )
      GreRestoreDC(v4, 0xFFFFFFFFLL);
    _ReleaseDC(v4);
  }
  else
  {
    *(_DWORD *)(v0 + 296) &= ~1u;
  }
}

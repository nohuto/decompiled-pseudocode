/*
 * XREFs of BitBltSysBmp @ 0x1C00D642C
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00D6088 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C00D6334 (-DrawCaptionButtons@@YAXHHH@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C020EA64 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C020ED64 (DrawSize.c)
 *     xxxTrackCaptionButton @ 0x1C02110AC (xxxTrackCaptionButton.c)
 *     MNDrawArrow @ 0x1C02157A4 (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetLayout @ 0x1C002AFE0 (GreGetLayout.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     IS_UI_LANGID @ 0x1C00D65A8 (IS_UI_LANGID.c)
 *     FixHDCBITSBmp @ 0x1C00D6694 (FixHDCBITSBmp.c)
 */

__int64 __fastcall BitBltSysBmp(HDC a1, int a2, int a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned int v10; // esi
  BOOL v11; // edx
  _QWORD *v13; // rax
  __int64 v14; // rax
  int v15; // edx

  v5 = a4;
  if ( gpdaHDCBITSCreation == -1 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v13 = (_QWORD *)gpsi;
      if ( *(_WORD *)(gpsi + 8678LL) != 96 )
      {
        v14 = gpsi + 7188LL;
        goto LABEL_14;
      }
    }
    else
    {
      v13 = (_QWORD *)gpsi;
    }
    v14 = *v13 + 5700LL;
LABEL_14:
    v9 = v14 + 16 * v5;
    goto LABEL_5;
  }
  if ( gpdaHDCBITSCreation == 2 )
    v8 = gpsi + 5700LL;
  else
    v8 = gpsi + 7188LL;
  v9 = 16LL * a4 + v8;
LABEL_5:
  FixHDCBITSBmp();
  v10 = NtGdiBitBltInternal(
          a1,
          a2,
          a3,
          *(_DWORD *)(v9 + 8),
          *(_DWORD *)(v9 + 12),
          *(HDC *)(gpDispInfo + 56LL),
          *(_DWORD *)v9,
          *(_DWORD *)(v9 + 4),
          13369376,
          0,
          0);
  if ( (unsigned int)IS_UI_LANGID() )
    v11 = 1;
  else
    v11 = *(_WORD *)(gpsi + 8692LL) == 1037;
  if ( v11 && (GreGetLayout(a1) & 1) != 0 && (unsigned int)(v5 - 11) <= 2 )
  {
    v15 = a2 + 2;
    if ( (_DWORD)v5 != 12 )
      v15 = a2;
    return (unsigned int)NtGdiBitBltInternal(
                           a1,
                           v15,
                           a3 + 2,
                           *(_DWORD *)(v9 + 8) - 4,
                           *(_DWORD *)(v9 + 12) - 4,
                           *(HDC *)(gpDispInfo + 56LL),
                           *(_DWORD *)v9 + 2,
                           *(_DWORD *)(v9 + 4) + 2,
                           -2134114272,
                           0,
                           0);
  }
  return v10;
}

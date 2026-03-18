/*
 * XREFs of BitBltSysBmp @ 0x1C0082AFC
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0082784 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C00829DC (-DrawCaptionButtons@@YAXHHH@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0210290 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0210548 (DrawSize.c)
 *     xxxTrackCaptionButton @ 0x1C02125C4 (xxxTrackCaptionButton.c)
 *     MNDrawArrow @ 0x1C02166CC (MNDrawArrow.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     GreGetLayout @ 0x1C007EAB0 (GreGetLayout.c)
 *     IS_UI_LANGID @ 0x1C0082C8C (IS_UI_LANGID.c)
 *     GreGetDCDpiScaleValue @ 0x1C0082CD4 (GreGetDCDpiScaleValue.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     FixHDCBITSBmpEx @ 0x1C0112F44 (FixHDCBITSBmpEx.c)
 */

__int64 __fastcall BitBltSysBmp(HDC a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rdi
  LONG v6; // r13d
  int *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  BOOL v13; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebp
  int v18; // r8d
  int v19; // r9d

  v4 = a4;
  v6 = a2;
  v8 = 0LL;
  if ( gpdaHDCBITSCreation == -1 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2) & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432)
      && (v15 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432) + 8LL),
          (*(_DWORD *)(v15 + 52) & 1) != 0)
      && *(_WORD *)(PsGetCurrentProcessWin32Process(v15) + 284) != 96 )
    {
      v16 = gpsi + 8484LL;
    }
    else
    {
      v16 = gpsi + 6996LL;
    }
    v10 = 16 * v4 + v16;
    if ( (int)GreGetDCDpiScaleValue(a1) <= 1 )
      goto LABEL_4;
    v8 = (int *)(16 * v4 + gpsi + 6996LL);
  }
  else
  {
    v9 = 16LL * a4;
    if ( gpdaHDCBITSCreation == 2 )
    {
      v10 = v9 + gpsi + 6996LL;
LABEL_4:
      FixHDCBITSBmpEx(0LL);
      v11 = NtGdiBitBltInternal(
              a1,
              v6,
              a3,
              *(_DWORD *)(v10 + 8),
              *(_DWORD *)(v10 + 12),
              *(HDC *)(gpDispInfo + 56LL),
              *(_DWORD *)v10,
              *(_DWORD *)(v10 + 4),
              13369376,
              0,
              0);
      goto LABEL_5;
    }
    v10 = v9 + gpsi + 8484LL;
  }
  if ( !v8 )
    goto LABEL_4;
  FixHDCBITSBmpEx(a1);
  v11 = GreStretchBltInternal(
          a1,
          v6,
          a3,
          *(_DWORD *)(v10 + 8),
          *(_DWORD *)(v10 + 12),
          *(HDC *)(gpDispInfo + 56LL),
          *v8,
          v8[1],
          v8[2],
          v8[3],
          13369376,
          0,
          0);
LABEL_5:
  v12 = v11;
  if ( (unsigned int)IS_UI_LANGID() )
    v13 = 1;
  else
    v13 = *(_WORD *)(gpsi + 9988LL) == 1037;
  if ( v13 && (GreGetLayout(a1) & 1) != 0 && (unsigned int)(v4 - 11) <= 2 )
  {
    v17 = v6 + 2;
    v18 = a3 + 2;
    if ( (_DWORD)v4 != 12 )
      v17 = v6;
    v19 = *(_DWORD *)(v10 + 8) - 4;
    if ( v8 )
      return (unsigned int)GreStretchBltInternal(
                             a1,
                             v17,
                             v18,
                             v19,
                             *(_DWORD *)(v10 + 12) - 4,
                             *(HDC *)(gpDispInfo + 56LL),
                             *v8 + 2,
                             v8[1] + 2,
                             v8[2] - 4,
                             v8[3] - 4,
                             -2134114272,
                             0,
                             0);
    else
      return (unsigned int)NtGdiBitBltInternal(
                             a1,
                             v17,
                             v18,
                             v19,
                             *(_DWORD *)(v10 + 12) - 4,
                             *(HDC *)(gpDispInfo + 56LL),
                             *(_DWORD *)v10 + 2,
                             *(_DWORD *)(v10 + 4) + 2,
                             -2134114272,
                             0,
                             0);
  }
  return v12;
}

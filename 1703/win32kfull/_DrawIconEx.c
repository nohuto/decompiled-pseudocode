/*
 * XREFs of _DrawIconEx @ 0x1C0044444
 * Callers:
 *     NtUserDrawIconEx @ 0x1C0044B50 (NtUserDrawIconEx.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CB59C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0210840 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C02166C4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreSetBrushOrg @ 0x1C0029144 (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C0029270 (GrePolyPatBlt.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     BltIcon @ 0x1C00447E0 (BltIcon.c)
 *     GetAnimatedCursorFrame @ 0x1C00465D8 (GetAnimatedCursorFrame.c)
 *     _GetIconSize @ 0x1C0048BA8 (_GetIconSize.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007DB44 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetBrushOrg @ 0x1C0114B20 (GreGetBrushOrg.c)
 */

__int64 __fastcall DrawIconEx(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9)
{
  char v9; // r12
  unsigned int v10; // ebx
  __int64 AnimatedCursorFrame; // r15
  int v12; // r13d
  unsigned int v13; // edi
  __int64 v14; // rcx
  unsigned int v15; // r14d
  int v16; // esi
  int v17; // eax
  int v18; // eax
  int v20; // edi
  HDC CompatibleDC; // r12
  __int64 CompatibleBitmapInternal; // rax
  int v23[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v24; // [rsp+70h] [rbp-29h]
  __int64 v25; // [rsp+78h] [rbp-21h]
  __int64 v26; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v27; // [rsp+88h] [rbp-11h]
  int v28; // [rsp+8Ch] [rbp-Dh]
  __int64 v29; // [rsp+90h] [rbp-9h]
  int v33; // [rsp+100h] [rbp+67h]

  v9 = a9;
  v10 = 0;
  v33 = 0;
  AnimatedCursorFrame = a4;
  v12 = 0;
  v13 = (a9 & 0x10) != 0 ? 0x80000000 : 0;
  if ( (*(_DWORD *)(a4 + 80) & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame(a4, a7)) != 0 )
  {
    if ( *(_QWORD *)(AnimatedCursorFrame + 128) )
    {
      if ( (v9 & 3) == 3 )
        v12 = 1;
      v33 = v12;
    }
    GetIconSize(AnimatedCursorFrame, &a9, v23);
    v15 = a5;
    if ( !a5 )
    {
      if ( (v9 & 8) != 0 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v14) & 0xF) != 0 )
          v15 = *(_DWORD *)(gpsi + 1924LL);
        else
          v15 = *(_DWORD *)(gpsi + 2312LL);
      }
      else
      {
        v15 = a9;
      }
    }
    v16 = a6;
    if ( !a6 )
    {
      if ( (v9 & 8) != 0 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(2LL) & 0xF) != 0 )
          v16 = *(_DWORD *)(gpsi + 1928LL);
        else
          v16 = *(_DWORD *)(gpsi + 2316LL);
      }
      else
      {
        v16 = v23[0] / 2;
      }
    }
    if ( a8 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
      if ( CompatibleDC )
      {
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, 0LL, 0LL);
        v25 = CompatibleBitmapInternal;
        if ( CompatibleBitmapInternal )
        {
          v24 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
          GreGetBrushOrg(a1);
          GreSetBrushOrg(CompatibleDC, v23[0], v23[1], 0LL);
          v29 = a8;
          v26 = 0LL;
          v27 = v15;
          v28 = v16;
          GrePolyPatBlt(CompatibleDC, 0xF00021u, (struct _POLYPATBLT *)&v26, 1u);
          if ( v33 )
          {
            BltIcon(CompatibleDC, v16, ghdcMem, AnimatedCursorFrame, 3, v13 | 0xCC0020);
          }
          else
          {
            BltIcon(CompatibleDC, v16, ghdcMem, AnimatedCursorFrame, 1, v13 | 0x8800C6);
            BltIcon(CompatibleDC, v16, ghdcMem, AnimatedCursorFrame, 2, v13 | 0x660046);
          }
          NtGdiBitBltInternal(a1, a2, a3, v15);
          GreSelectBitmap(CompatibleDC, v24);
          GreDeleteObject(v25);
          v10 = 1;
        }
        GreDeleteDC(CompatibleDC);
      }
    }
    else
    {
      if ( v12 )
      {
        BltIcon(a1, v16, ghdcMem, AnimatedCursorFrame, 3, v13 | 0xCC0020);
      }
      else
      {
        v17 = v9 & 1;
        a9 = v17;
        if ( (v9 & 1) != 0 )
        {
          if ( (v9 & 2) != 0 )
            v18 = v13 | 0x8800C6;
          else
            v18 = v13 | 0xCC0020;
          BltIcon(a1, v16, ghdcMem, AnimatedCursorFrame, 1, v18);
          v17 = a9;
        }
        if ( (v9 & 2) != 0 )
        {
          if ( v17 )
            v20 = v13 | 0x660046;
          else
            v20 = v13 | 0xCC0020;
          BltIcon(a1, v16, ghdcMem, AnimatedCursorFrame, 2, v20);
        }
      }
      return 1;
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  return v10;
}

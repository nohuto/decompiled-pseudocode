/*
 * XREFs of _DrawIconEx @ 0x1C009B010
 * Callers:
 *     NtUserDrawIconEx @ 0x1C009AE70 (NtUserDrawIconEx.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CF95C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0211F68 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0217880 (xxxRealDrawMenuItem.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     GreSetBrushOrg @ 0x1C007F6C8 (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C007F804 (GrePolyPatBlt.c)
 *     GetAnimatedCursorFrame @ 0x1C0089978 (GetAnimatedCursorFrame.c)
 *     BltIcon @ 0x1C009B384 (BltIcon.c)
 *     _GetIconSize @ 0x1C009B6FC (_GetIconSize.c)
 *     GreGetBrushOrg @ 0x1C011CB2C (GreGetBrushOrg.c)
 */

__int64 __fastcall DrawIconEx(
        HDC a1,
        LONG a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8,
        unsigned int a9)
{
  char v9; // r12
  unsigned int v10; // ebx
  __int64 AnimatedCursorFrame; // rdi
  int v12; // r13d
  unsigned int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int DpiDependentMetric; // r14d
  unsigned int v17; // esi
  unsigned int v18; // eax
  HDC CompatibleDC; // r12
  __int64 CompatibleBitmapInternal; // rax
  unsigned int DpiForSystem; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  int v25[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v26; // [rsp+70h] [rbp-29h]
  __int64 v27; // [rsp+78h] [rbp-21h]
  __int64 v28; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v29; // [rsp+88h] [rbp-11h]
  unsigned int v30; // [rsp+8Ch] [rbp-Dh]
  __int64 v31; // [rsp+90h] [rbp-9h]
  int v35; // [rsp+100h] [rbp+67h]

  v9 = a9;
  v10 = 0;
  v35 = 0;
  AnimatedCursorFrame = a4;
  v12 = 0;
  v13 = (a9 & 0x10) != 0 ? 0x80000000 : 0;
  if ( (*(_DWORD *)(a4 + 80) & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame(a4, a7)) != 0 )
  {
    if ( *(_QWORD *)(AnimatedCursorFrame + 128) )
    {
      if ( (v9 & 3) == 3 )
        v12 = 1;
      v35 = v12;
    }
    GetIconSize(AnimatedCursorFrame, &a9, v25);
    DpiDependentMetric = a5;
    if ( !a5 )
    {
      if ( (v9 & 8) != 0 )
      {
        DpiForSystem = GetDpiForSystem(v15, v14);
        DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem);
      }
      else
      {
        DpiDependentMetric = a9;
      }
    }
    v17 = a6;
    if ( !a6 )
    {
      if ( (v9 & 8) != 0 )
      {
        v23 = GetDpiForSystem(2LL, v14);
        v18 = GetDpiDependentMetric(6LL, v23);
      }
      else
      {
        v18 = v25[0] / 2;
      }
      v17 = v18;
    }
    if ( a8 )
    {
      CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
      if ( CompatibleDC )
      {
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, DpiDependentMetric, v17, 0, 0LL, 0LL);
        v27 = CompatibleBitmapInternal;
        if ( CompatibleBitmapInternal )
        {
          v26 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
          GreGetBrushOrg(a1);
          GreSetBrushOrg(CompatibleDC, v25[0], v25[1], 0LL);
          v31 = a8;
          v28 = 0LL;
          v29 = DpiDependentMetric;
          v30 = v17;
          GrePolyPatBlt(CompatibleDC, 15728673, (struct _POLYPATBLT *)&v28, 1);
          if ( v35 )
          {
            BltIcon(CompatibleDC, 0, 0, v17, *(HDC *)ghdcMem, AnimatedCursorFrame, 3, v13 | 0xCC0020);
          }
          else
          {
            BltIcon(CompatibleDC, 0, 0, v17, *(HDC *)ghdcMem, AnimatedCursorFrame, 1, v13 | 0x8800C6);
            BltIcon(CompatibleDC, 0, 0, v17, *(HDC *)ghdcMem, AnimatedCursorFrame, 2, v13 | 0x660046);
          }
          NtGdiBitBltInternal(a1, a2, a3, DpiDependentMetric, v17, CompatibleDC, 0, 0, 13369376, -1, 0);
          GreSelectBitmap(CompatibleDC, v26);
          GreDeleteObject(v27);
          v10 = 1;
        }
        GreDeleteDC(CompatibleDC);
      }
    }
    else
    {
      if ( v12 )
      {
        BltIcon(a1, a2, a3, v17, *(HDC *)ghdcMem, AnimatedCursorFrame, 3, v13 | 0xCC0020);
      }
      else
      {
        if ( (v9 & 1) != 0 )
          BltIcon(a1, a2, a3, v17, *(HDC *)ghdcMem, AnimatedCursorFrame, 1, v13 | ((v9 & 2) != 0 ? 8913094 : 13369376));
        if ( (v9 & 2) != 0 )
          BltIcon(a1, a2, a3, v17, *(HDC *)ghdcMem, AnimatedCursorFrame, 2, v13 | ((v9 & 1) != 0 ? 6684742 : 13369376));
      }
      return 1;
    }
  }
  else
  {
    UserSetLastError(87LL, v24);
  }
  return v10;
}

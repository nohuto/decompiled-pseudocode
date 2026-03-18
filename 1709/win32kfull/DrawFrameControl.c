/*
 * XREFs of DrawFrameControl @ 0x1C007E640
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C007DEFC (-CreateDPIBitmapStrip@@YAHH@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0082784 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0210290 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1C02166CC (MNDrawArrow.c)
 * Callees:
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C007EA48 (GreSetBkMode.c)
 *     GreGetLayout @ 0x1C007EAB0 (GreGetLayout.c)
 *     DrawPushButton @ 0x1C007EAF4 (DrawPushButton.c)
 *     GrePolyPatBlt @ 0x1C007F804 (GrePolyPatBlt.c)
 *     ?GetCaptionChar@@YAGI@Z @ 0x1C0080050 (-GetCaptionChar@@YAGI@Z.c)
 *     ?DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0080088 (-DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z @ 0x1C0080B08 (-DrawMenuMark@@YAHPEAUHDC__@@PEAUtagRECT@@II@Z.c)
 *     GreSetTextAlign @ 0x1C0080E00 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C0080F98 (GreGetTextAlign.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0081ED8 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C009C3DC (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C009C70C (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     GreCreateFontIndirectW @ 0x1C00B1984 (GreCreateFontIndirectW.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     GreSetGraphicsMode @ 0x1C02981EC (GreSetGraphicsMode.c)
 */

__int64 __fastcall DrawFrameControl(HDC a1, struct tagRECT *a2, unsigned int a3, int a4)
{
  int v8; // r15d
  unsigned int v9; // r14d
  int v10; // ecx
  unsigned int v11; // edi
  int v12; // r13d
  __int64 FontIndirectW; // r13
  __int64 v14; // r8
  unsigned __int16 CaptionChar; // ax
  __int64 v16; // r8
  unsigned int v18; // r8d
  LONG top; // edx
  int v20; // eax
  int v21; // eax
  RECT v22; // [rsp+30h] [rbp-69h] BYREF
  __int64 v23; // [rsp+40h] [rbp-59h]
  _DWORD v24[4]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v25; // [rsp+58h] [rbp-41h]
  _DWORD v26[36]; // [rsp+60h] [rbp-39h] BYREF
  int v28; // [rsp+110h] [rbp+77h]

  v28 = 0;
  v8 = 0;
  v9 = 1;
  v22 = *a2;
  if ( (GreGetLayout(a1) & 1) != 0 )
  {
    v8 = GreSetGraphicsMode(a1);
    if ( v8 )
    {
      if ( (GreGetTextAlign(a1) & 6) != 6 )
        GreSetTextAlign(a1);
    }
  }
  v10 = a4 | 0x8000;
  if ( *(_WORD *)(gpsi + 9972LL) != 1 )
    v10 = a4;
  v11 = v10 | 0x4000;
  if ( (v10 & 0x8000) == 0 )
    v11 = v10;
  if ( a3 != 2 && a3 != 5 && (a3 != 4 || (v11 & 0x10) != 0) && (a3 != 3 || (v11 & 0x18) == 0) )
  {
    DrawPushButton(a1);
    if ( (v11 & 0x2000) != 0 )
      *a2 = v22;
    v28 = 1;
  }
  if ( (unsigned int)GreSetBkMode(a1) )
  {
    v12 = v22.bottom - v22.top;
    if ( v22.right - v22.left < v22.bottom - v22.top )
      v12 = v22.right - v22.left;
    if ( v12 > 0 )
    {
      memset(v26, 0, 0x5CuLL);
      v26[0] = v12;
      v26[4] = 400;
      *(_OWORD *)&v26[7] = *(_OWORD *)L"Marlett";
      HIBYTE(v26[5]) = 2;
      FontIndirectW = GreCreateFontIndirectW(v26, 0LL);
      v23 = GreSelectFont(a1, FontIndirectW, v14);
      if ( v28 )
      {
        if ( a3 == 1 )
        {
          CaptionChar = GetCaptionChar(v11);
          DrawIt(a1, &v22, v11, CaptionChar);
          goto LABEL_20;
        }
        if ( a3 != 3 )
        {
          if ( a3 != 4 )
            v9 = 0;
          goto LABEL_20;
        }
        v18 = v11;
      }
      else
      {
        if ( a3 != 2 && a3 != 5 )
        {
          if ( a3 == 4 )
            DrawBox(a1, &v22, v11);
          else
            DrawGrip(a1, a2, v11);
LABEL_20:
          if ( v8 )
          {
            GreSetGraphicsMode(a1);
            GreSetTextAlign(a1);
          }
          GreSetBkMode(a1);
          GreSelectFont(a1, v23, v16);
          GreDeleteObject(FontIndirectW);
          return v9;
        }
        if ( (v11 & 0x18) == 0 )
        {
          DrawMenuMark(a1, &v22, a3, v11);
          goto LABEL_20;
        }
        if ( (v11 & 0x800) == 0 )
        {
          top = a2->top;
          v20 = a2->right - a2->left;
          v24[0] = a2->left;
          v24[2] = v20;
          v21 = a2->bottom - top;
          v24[1] = top;
          v24[3] = v21;
          v25 = *(_QWORD *)(gpsi + 4712LL);
          GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v24, 1u);
        }
        v18 = v11 & 0x1100 | (((v11 >> 3) & 1) == 0);
      }
      DrawScrollArrow(a1, &v22, v18);
      goto LABEL_20;
    }
  }
  if ( v8 )
  {
    GreSetGraphicsMode(a1);
    GreSetTextAlign(a1);
  }
  return 0LL;
}

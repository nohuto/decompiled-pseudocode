/*
 * XREFs of DrawFrameControl @ 0x1C002B024
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C002A968 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00D6088 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C020EA64 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     MNDrawArrow @ 0x1C02157A4 (MNDrawArrow.c)
 * Callees:
 *     GreSetTextAlign @ 0x1C000E1DC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C000E37C (GreGetTextAlign.c)
 *     DrawPushButton @ 0x1C002898C (DrawPushButton.c)
 *     GrePolyPatBlt @ 0x1C0029270 (GrePolyPatBlt.c)
 *     GreGetLayout @ 0x1C002AFE0 (GreGetLayout.c)
 *     GreSetBkMode @ 0x1C002B384 (GreSetBkMode.c)
 *     GreCreateFontIndirectW @ 0x1C002B45C (GreCreateFontIndirectW.c)
 *     DrawIt @ 0x1C00442B8 (DrawIt.c)
 *     DrawMenuMark @ 0x1C00F68BC (DrawMenuMark.c)
 *     DrawBox @ 0x1C00F69D0 (DrawBox.c)
 *     GetCaptionChar @ 0x1C00F6D80 (GetCaptionChar.c)
 *     DrawScrollArrow @ 0x1C010A398 (DrawScrollArrow.c)
 *     DrawGrip @ 0x1C010B3C8 (DrawGrip.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     GreSetGraphicsMode @ 0x1C029C860 (GreSetGraphicsMode.c)
 */

_BOOL8 __fastcall DrawFrameControl(HDC a1, RECT *a2, int a3, int a4)
{
  int v8; // r14d
  int TextAlign; // r15d
  int v10; // ecx
  unsigned int v11; // edi
  __int16 v12; // r9
  int v14; // r12d
  __int64 FontIndirectW; // r12
  LONG top; // edx
  int v17; // eax
  int v18; // eax
  BOOL v19; // edi
  RECT v20; // [rsp+30h] [rbp-69h] BYREF
  __int64 v21; // [rsp+40h] [rbp-59h]
  _DWORD v22[4]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v23; // [rsp+58h] [rbp-41h]
  _DWORD v24[36]; // [rsp+60h] [rbp-39h] BYREF
  int v25; // [rsp+118h] [rbp+7Fh]

  v25 = 0;
  v20 = *a2;
  v8 = 0;
  TextAlign = 0;
  if ( (GreGetLayout(a1) & 1) != 0 )
  {
    v8 = GreSetGraphicsMode(a1);
    if ( v8 )
    {
      TextAlign = GreGetTextAlign(a1);
      if ( (TextAlign & 6) != 6 )
        GreSetTextAlign(a1, TextAlign ^ 2);
    }
  }
  v10 = a4 | 0x8000;
  if ( *(_WORD *)(gpsi + 8676LL) != 1 )
    v10 = a4;
  v11 = v10 | 0x4000;
  if ( (v10 & 0x8000) == 0 )
    v11 = v10;
  if ( a3 != 2 && a3 != 5 && (a3 != 4 || (v11 & 0x10) != 0) && (a3 != 3 || (v11 & 0x18) == 0) )
  {
    v12 = 12288;
    if ( a3 == 3 )
      v12 = 0x2000;
    DrawPushButton(a1, &v20, v11, v11 & 0xC000 | v12);
    if ( (v11 & 0x2000) != 0 )
      *a2 = v20;
    v25 = 1;
  }
  if ( !(unsigned int)GreSetBkMode(a1) )
    goto LABEL_21;
  v14 = v20.bottom - v20.top;
  if ( v20.right - v20.left < v20.bottom - v20.top )
    v14 = v20.right - v20.left;
  if ( v14 <= 0 )
  {
LABEL_21:
    if ( v8 )
    {
      GreSetGraphicsMode(a1);
      GreSetTextAlign(a1, TextAlign);
    }
    return 0LL;
  }
  memset(v24, 0, 0x5CuLL);
  v24[0] = v14;
  v24[4] = 400;
  *(_OWORD *)&v24[7] = *(_OWORD *)L"Marlett";
  HIBYTE(v24[5]) = 2;
  FontIndirectW = GreCreateFontIndirectW(v24);
  v21 = GreSelectFontInternal(a1);
  if ( v25 )
  {
    if ( a3 == 1 )
    {
      GetCaptionChar(v11);
      DrawIt(a1);
    }
    else
    {
      if ( a3 != 3 )
      {
        v19 = a3 == 4;
        goto LABEL_44;
      }
      DrawScrollArrow(a1, &v20, v11);
    }
  }
  else if ( a3 == 2 || a3 == 5 )
  {
    if ( (v11 & 0x18) != 0 )
    {
      if ( (v11 & 0x800) == 0 )
      {
        top = a2->top;
        v17 = a2->right - a2->left;
        v22[0] = a2->left;
        v22[2] = v17;
        v18 = a2->bottom - top;
        v22[1] = top;
        v22[3] = v18;
        v23 = *(_QWORD *)(gpsi + 5120LL);
        GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v22, 1u);
      }
      DrawScrollArrow(a1, &v20, v11 & 0x1100 | (((v11 >> 3) & 1) == 0));
      v19 = 1;
      goto LABEL_44;
    }
    DrawMenuMark(a1, &v20);
  }
  else if ( a3 == 4 )
  {
    DrawBox(a1);
  }
  else
  {
    DrawGrip(a1);
  }
  v19 = 1;
LABEL_44:
  if ( v8 )
  {
    GreSetGraphicsMode(a1);
    GreSetTextAlign(a1, TextAlign);
  }
  GreSetBkMode(a1);
  GreSelectFontInternal(a1);
  GreDeleteObject(FontIndirectW);
  return v19;
}

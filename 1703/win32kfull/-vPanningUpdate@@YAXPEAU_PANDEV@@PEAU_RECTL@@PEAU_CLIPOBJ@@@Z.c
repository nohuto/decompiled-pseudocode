/*
 * XREFs of ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0276B00
 * Callers:
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C02745D0 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0274730 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C02750A0 (-PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x1C02753C0 (-PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0275530 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0275690 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0275810 (-PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0275B30 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0275C90 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C0276C3C (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 */

void __fastcall vPanningUpdate(struct _PANDEV *a1, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  LONG left; // edx
  LONG top; // eax
  LONG right; // r9d
  bool v8; // cc
  LONG bottom; // eax
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  HSEMAPHORE v13; // [rsp+38h] [rbp-28h] BYREF
  struct _RECTL v14; // [rsp+40h] [rbp-20h] BYREF

  if ( a3 && a3->iDComplexity )
  {
    left = a2->left;
    top = a2->top;
    if ( a3->rclBounds.left > left )
      left = a3->rclBounds.left;
    right = a2->right;
    if ( a3->rclBounds.top > top )
      top = a3->rclBounds.top;
    v8 = a3->rclBounds.right < right;
    v14.top = top;
    if ( v8 )
      right = a3->rclBounds.right;
    bottom = a2->bottom;
    v8 = a3->rclBounds.bottom < bottom;
    v14.left = left;
    if ( v8 )
      bottom = a3->rclBounds.bottom;
    v14.bottom = bottom;
    v14.right = right;
  }
  else
  {
    v14 = *a2;
    right = v14.right;
    left = v14.left;
  }
  if ( left < right && v14.top < v14.bottom )
  {
    v13 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
    EngAcquireSemaphore(v13);
    v11 = *((_QWORD *)a1 + 12);
    v10 = *((_QWORD *)a1 + 11);
    v12 = *((_QWORD *)a1 + 10);
    RGNOBJ::vSet((RGNOBJ *)&v11, &v14);
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v10, (struct RGNOBJ *)&v12, (struct RGNOBJ *)&v11, BYTE2(gafjRgnOp)) )
      RGNOBJ::vSet((RGNOBJ *)&v10);
    *((_QWORD *)a1 + 11) = v12;
    *((_QWORD *)a1 + 10) = v10;
    *((_DWORD *)a1 + 26) = 1;
    PANDEVLOCK::vUnLock((PANDEVLOCK *)&v13);
  }
}

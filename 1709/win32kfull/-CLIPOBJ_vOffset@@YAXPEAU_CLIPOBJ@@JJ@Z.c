/*
 * XREFs of ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001D83C
 * Callers:
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C001E550 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     OffLineTo @ 0x1C00E8C40 (OffLineTo.c)
 *     OffAlphaBlend @ 0x1C00E9020 (OffAlphaBlend.c)
 *     OffTransparentBlt @ 0x1C00EBA30 (OffTransparentBlt.c)
 *     OffCopyBits @ 0x1C00EC748 (OffCopyBits.c)
 *     OffBitBlt @ 0x1C011A5C8 (OffBitBlt.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0136660 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     OffStrokePath @ 0x1C0136A94 (OffStrokePath.c)
 *     OffGradientFill @ 0x1C0137B88 (OffGradientFill.c)
 *     OffStretchBltROP @ 0x1C0138A84 (OffStretchBltROP.c)
 *     OffStretchBlt @ 0x1C0139734 (OffStretchBlt.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C025A130 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C025AC70 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0272340 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     OffDrawStream @ 0x1C02A0988 (OffDrawStream.c)
 *     OffFillPath @ 0x1C02A0AD4 (OffFillPath.c)
 *     OffPlgBlt @ 0x1C02A0BFC (OffPlgBlt.c)
 *     OffStrokeAndFillPath @ 0x1C02A0DB0 (OffStrokeAndFillPath.c)
 *     OffTextOut @ 0x1C02A0F28 (OffTextOut.c)
 * Callees:
 *     <none>
 */

void __fastcall CLIPOBJ_vOffset(struct _CLIPOBJ *a1, LONG a2, LONG a3)
{
  struct _POINTL v3; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && (a2 || a3) )
  {
    a1->rclBounds.left += a2;
    a1->rclBounds.right += a2;
    a1->rclBounds.top += a3;
    a1->rclBounds.bottom += a3;
    if ( a1->iDComplexity )
    {
      v3.x = a2;
      v3.y = a3;
      RGNOBJ::bOffset((RGNOBJ *)&a1[2].rclBounds.top, &v3);
    }
  }
}

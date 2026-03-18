/*
 * XREFs of ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00A732C
 * Callers:
 *     ?SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C006F270 (-SpBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHO.c)
 *     OffTransparentBlt @ 0x1C00A5320 (OffTransparentBlt.c)
 *     OffBitBlt @ 0x1C00A5454 (OffBitBlt.c)
 *     OffCopyBits @ 0x1C00A5D08 (OffCopyBits.c)
 *     OffAlphaBlend @ 0x1C00A70C0 (OffAlphaBlend.c)
 *     OffLineTo @ 0x1C00A71F8 (OffLineTo.c)
 *     OffStrokePath @ 0x1C0121D54 (OffStrokePath.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0121E80 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     OffGradientFill @ 0x1C0131878 (OffGradientFill.c)
 *     OffStretchBltROP @ 0x1C0133B94 (OffStretchBltROP.c)
 *     OffStretchBlt @ 0x1C01347F4 (OffStretchBlt.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0259000 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0259B30 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0275970 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     OffDrawStream @ 0x1C02A42A8 (OffDrawStream.c)
 *     OffFillPath @ 0x1C02A43F4 (OffFillPath.c)
 *     OffPlgBlt @ 0x1C02A451C (OffPlgBlt.c)
 *     OffStrokeAndFillPath @ 0x1C02A46D0 (OffStrokeAndFillPath.c)
 *     OffTextOut @ 0x1C02A4848 (OffTextOut.c)
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

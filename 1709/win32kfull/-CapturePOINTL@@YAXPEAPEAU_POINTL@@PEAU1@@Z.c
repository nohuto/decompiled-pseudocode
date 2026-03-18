/*
 * XREFs of ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C00BA5C0
 * Callers:
 *     NtGdiEngTextOut @ 0x1C00B84F0 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C00B8F70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C0131CB0 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C0131F00 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C0132370 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngFillPath @ 0x1C028DD30 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C028DF30 (NtGdiEngGradientFill.c)
 *     NtGdiEngPaint @ 0x1C028E530 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C028E6C0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C028EAF0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C028EDD0 (NtGdiEngStrokePath.c)
 * Callees:
 *     <none>
 */

void __fastcall CapturePOINTL(struct _POINTL **a1, struct _POINTL *a2)
{
  struct _POINTL *v2; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (struct _POINTL *)MmUserProbeAddress;
    *a2 = *v2;
    *a1 = a2;
  }
}

/*
 * XREFs of ?CaptureAndFakeBRUSHOBJ@@YAPEAU_BRUSHOBJ@@PEAU1@0@Z @ 0x1C012F920
 * Callers:
 *     NtGdiEngTextOut @ 0x1C009ABE0 (NtGdiEngTextOut.c)
 *     NtGdiEngBitBlt @ 0x1C012EE90 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C012F4E0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngFillPath @ 0x1C0291620 (NtGdiEngFillPath.c)
 *     NtGdiEngLineTo @ 0x1C0291C30 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C0291E30 (NtGdiEngPaint.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02923F0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02926C0 (NtGdiEngStrokePath.c)
 * Callees:
 *     <none>
 */

struct _BRUSHOBJ *__fastcall CaptureAndFakeBRUSHOBJ(struct _BRUSHOBJ *a1, struct _BRUSHOBJ *a2)
{
  if ( !a1 )
    return 0LL;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (struct _BRUSHOBJ *)W32UserProbeAddress;
  *a2 = *a1;
  if ( a2 && a2->iSolidColor == -1 )
    return 0LL;
  a2->pvRbrush = 0LL;
  return a2;
}

/*
 * XREFs of ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C0098510
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C0096EB0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngTextOut @ 0x1C009ABE0 (NtGdiEngTextOut.c)
 *     NtGdiEngCopyBits @ 0x1C012EC40 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C012EE90 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C012F4E0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x1C0290F40 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngEraseSurface @ 0x1C02914C0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngGradientFill @ 0x1C0291820 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C0291C30 (NtGdiEngLineTo.c)
 *     NtGdiEngPlgBlt @ 0x1C0291FC0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C0292950 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall CaptureRECTL(struct _RECTL **a1, struct _RECTL *a2)
{
  struct _RECTL *v2; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v2 >= W32UserProbeAddress )
      v2 = (struct _RECTL *)W32UserProbeAddress;
    *a2 = *v2;
    *a1 = a2;
  }
}

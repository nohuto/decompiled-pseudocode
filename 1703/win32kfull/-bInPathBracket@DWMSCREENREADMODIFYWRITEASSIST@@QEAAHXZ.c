/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C027D9F8
 * Callers:
 *     NtGdiLineTo @ 0x1C00A60E0 (NtGdiLineTo.c)
 *     NtGdiRectangle @ 0x1C00F94C0 (NtGdiRectangle.c)
 *     NtGdiInvertRgn @ 0x1C0120D80 (NtGdiInvertRgn.c)
 *     GrePolyPolyline @ 0x1C0121150 (GrePolyPolyline.c)
 *     GrePolyPolygon @ 0x1C0123240 (GrePolyPolygon.c)
 *     GrePolyBezier @ 0x1C027E8C0 (GrePolyBezier.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *((_QWORD *)this + 3);
  if ( !*(_QWORD *)v1 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 176LL) & 1) == 0 )
    return 0;
  return v2;
}

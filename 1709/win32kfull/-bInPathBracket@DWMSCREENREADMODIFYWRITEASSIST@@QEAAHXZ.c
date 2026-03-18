/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C027A510
 * Callers:
 *     NtGdiLineTo @ 0x1C00E7C80 (NtGdiLineTo.c)
 *     NtGdiRectangle @ 0x1C0105710 (NtGdiRectangle.c)
 *     NtGdiInvertRgn @ 0x1C012B620 (NtGdiInvertRgn.c)
 *     GrePolyPolygon @ 0x1C01327D0 (GrePolyPolygon.c)
 *     GrePolyPolyline @ 0x1C01391F0 (GrePolyPolyline.c)
 *     GrePolyBezier @ 0x1C027B3D0 (GrePolyBezier.c)
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

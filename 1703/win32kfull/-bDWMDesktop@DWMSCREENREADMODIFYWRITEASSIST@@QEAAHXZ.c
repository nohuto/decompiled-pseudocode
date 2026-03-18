/*
 * XREFs of ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C009264C
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

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 *v1; // rax
  unsigned int v2; // ecx
  __int64 v3; // rdx

  v1 = (__int64 *)*((_QWORD *)this + 3);
  v2 = 0;
  v3 = *v1;
  if ( *v1 && *(_DWORD *)(v3 + 508) )
    return (*(_DWORD *)(v3 + 36) & 0x4000) != 0;
  return v2;
}

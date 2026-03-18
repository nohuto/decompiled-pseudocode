/*
 * XREFs of ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C001E0E0
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

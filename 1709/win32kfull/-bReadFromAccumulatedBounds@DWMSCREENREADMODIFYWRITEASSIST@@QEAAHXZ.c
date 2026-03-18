/*
 * XREFs of ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C027A538
 * Callers:
 *     NtGdiLineTo @ 0x1C00E7C80 (NtGdiLineTo.c)
 *     NtGdiRectangle @ 0x1C0105710 (NtGdiRectangle.c)
 *     NtGdiInvertRgn @ 0x1C012B620 (NtGdiInvertRgn.c)
 *     GrePolyPolygon @ 0x1C01327D0 (GrePolyPolygon.c)
 *     GrePolyPolyline @ 0x1C01391F0 (GrePolyPolyline.c)
 *     GrePolyBezier @ 0x1C027B3D0 (GrePolyBezier.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C012CCF4 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  _QWORD **v1; // rax
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rdx
  struct _RECTL v7; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD **)*((_QWORD *)this + 3);
  v3 = 0;
  if ( *v1 )
  {
    if ( (unsigned int)GreGetBounds(**v1, &v7, 4LL) )
    {
      v4 = **((_QWORD **)this + 3);
      v5 = *(_DWORD *)(v4 + 40) & 1;
      v7.left -= *(_DWORD *)(v4 + 8 * v5 + 1432);
      v7.right -= *(_DWORD *)(v4 + 8 * v5 + 1432);
      v7.top -= *(_DWORD *)(v4 + 8 * v5 + 1436);
      v7.bottom -= *(_DWORD *)(v4 + 8 * v5 + 1436);
      if ( !ERECTL::bEmpty((ERECTL *)&v7) )
        return (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect(this, &v7);
    }
  }
  return v3;
}

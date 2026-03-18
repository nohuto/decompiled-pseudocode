/*
 * XREFs of ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C027DA20
 * Callers:
 *     NtGdiLineTo @ 0x1C00A60E0 (NtGdiLineTo.c)
 *     NtGdiRectangle @ 0x1C00F94C0 (NtGdiRectangle.c)
 *     NtGdiInvertRgn @ 0x1C0120D80 (NtGdiInvertRgn.c)
 *     GrePolyPolyline @ 0x1C0121150 (GrePolyPolyline.c)
 *     GrePolyPolygon @ 0x1C0123240 (GrePolyPolygon.c)
 *     GrePolyBezier @ 0x1C027E8C0 (GrePolyBezier.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0124ABC (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
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
      v5 = (*(_BYTE *)(v4 + 40) & 1) != 0 ? 8 : 0;
      v7.left -= *(_DWORD *)(v5 + v4 + 1432);
      v7.right -= *(_DWORD *)(v5 + v4 + 1432);
      v7.top -= *(_DWORD *)(v5 + v4 + 1436);
      v7.bottom -= *(_DWORD *)(v5 + v4 + 1436);
      if ( !ERECTL::bEmpty((ERECTL *)&v7) )
        return (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect(this, &v7);
    }
  }
  return v3;
}

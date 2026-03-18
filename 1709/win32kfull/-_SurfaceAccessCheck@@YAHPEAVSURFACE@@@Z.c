/*
 * XREFs of ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001CDEC
 * Callers:
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001C7A8 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C001C99C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0102874 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _SurfaceAccessCheck(struct SURFACE *a1, __int64 a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a1 + 28);
  if ( (v2 & 0x800) != 0 )
    return UserSurfaceAccessCheck(*((_QWORD *)a1 + 73), a2);
  if ( (v2 & 0x10000000) != 0 )
    return UserScreenAccessCheck(a1, a2);
  return 1LL;
}

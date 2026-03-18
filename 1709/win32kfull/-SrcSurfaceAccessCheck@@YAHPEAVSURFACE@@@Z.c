/*
 * XREFs of ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0102874
 * Callers:
 *     GrePlgBlt @ 0x1C0001CD0 (GrePlgBlt.c)
 *     GreMaskBlt @ 0x1C01023EC (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C012CEF0 (NtGdiTransparentBlt.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C025D114 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001CDEC (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall SrcSurfaceAccessCheck(struct SURFACE *a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !*((_DWORD *)a1 + 148) || ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) == *((_DWORD *)a1 + 148) )
    return (unsigned int)_SurfaceAccessCheck(a1, a2);
  return v2;
}

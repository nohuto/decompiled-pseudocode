/*
 * XREFs of SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0023CF0
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C001E2A4 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreHintSpriteShape @ 0x1C0023878 (GreHintSpriteShape.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C009EE10 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00A0010 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00A132C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GreSfmOpenCompositorRef @ 0x1C00BC52C (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C00BC634 (GreSfmCloseCompositorRef.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C00BDA1C (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GrepSfmRemoveSurfaces @ 0x1C011AA90 (GrepSfmRemoveSurfaces.c)
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C002596C (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C00269F8 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 */

SFMLOGICALSURFACE *__fastcall SFMLOGICALSURFACEREF_vDestructorWrap(SFMLOGICALSURFACE **a1)
{
  SFMLOGICALSURFACE *result; // rax
  SFMLOGICALSURFACE *v3; // rcx
  int v4; // eax

  result = *a1;
  if ( *a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)result + 3);
    if ( *((_DWORD *)a1 + 2) == 1 )
    {
      v3 = *a1;
      v4 = *((_DWORD *)v3 + 62);
      if ( (v4 & 0x80u) != 0 && (v4 & 8) != 0 && (v4 & 0x10) != 0 )
      {
        *((_DWORD *)v3 + 62) &= ~0x10u;
        SFMLOGICALSURFACE::StopSfmStateTracking(*a1, 0LL, gpSfmState);
      }
      return (SFMLOGICALSURFACE *)bhLSurfDestroyLogicalSurfaceObject(*a1, 1LL);
    }
  }
  return result;
}

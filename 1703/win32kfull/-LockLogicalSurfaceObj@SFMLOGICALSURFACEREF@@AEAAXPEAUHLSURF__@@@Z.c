/*
 * XREFs of ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0023D38
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C001E2A4 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreHintSpriteShape @ 0x1C0023878 (GreHintSpriteShape.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0023D64 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00A0010 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00A132C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GreSfmOpenCompositorRef @ 0x1C00BC52C (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C00BC634 (GreSfmCloseCompositorRef.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C00BDA1C (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GrepSfmRemoveSurfaces @ 0x1C011AA90 (GrepSfmRemoveSurfaces.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACEREF::LockLogicalSurfaceObj(SFMLOGICALSURFACEREF *this, HLSURF a2)
{
  HLSURF v3; // rcx

  if ( a2 )
  {
    v3 = a2;
    LOBYTE(a2) = 18;
    *(_QWORD *)this = HmgLock(v3, a2);
  }
}

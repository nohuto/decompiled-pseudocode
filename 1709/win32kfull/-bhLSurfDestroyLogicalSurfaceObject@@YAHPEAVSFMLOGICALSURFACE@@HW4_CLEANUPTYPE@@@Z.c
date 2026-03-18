/*
 * XREFs of ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0092358
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x1C008A9C0 (GreSfmCloseCompositorRef.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C008AAEC (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C008C3D0 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C008E7F0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0091650 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     GrepSfmRemoveSurfaces @ 0x1C01233E0 (GrepSfmRemoveSurfaces.c)
 *     CleanupHLSURF @ 0x1C0126590 (CleanupHLSURF.c)
 * Callees:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C008F07C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall bhLSurfDestroyLogicalSurfaceObject(HLSURF *a1, int a2, int a3)
{
  HLSURF v3; // rsi
  unsigned int v4; // ebx
  HLSURF *v7; // rdi
  char v9; // [rsp+20h] [rbp-18h]

  v3 = *a1;
  v4 = 0;
  v7 = a1;
  if ( *a1 )
  {
    v9 = 18;
    v7 = (HLSURF *)HmgRemoveObject(v3, 0LL, 0LL, 1LL, v9, 0LL);
  }
  if ( v7 )
  {
    SFMLOGICALSURFACE::DeInitialize(v7, v3, a3);
    FreeObject(v7, 18LL);
    if ( a2 )
      EtwLogicalSurfDestroyEvent(v3, 0LL);
    return 1;
  }
  return v4;
}

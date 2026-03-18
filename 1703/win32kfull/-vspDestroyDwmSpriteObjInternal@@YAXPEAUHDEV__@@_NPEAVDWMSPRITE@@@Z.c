/*
 * XREFs of ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00264A0
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C001E2A4 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0020DE4 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHHPEAG@Z @ 0x1C0020FA4 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00A1A50 (GreTransferDwmStateToSpriteState.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C024DD44 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C002596C (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00265B8 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ @ 0x1C0026704 (-CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C00269F8 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0026EC0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C0101F38 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C024C3D4 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

void __fastcall vspDestroyDwmSpriteObjInternal(HDEV a1, unsigned __int8 a2, struct DWMSPRITE *a3)
{
  SFMLOGICALSURFACE *v3; // rdi
  REGION *v7; // rcx
  HDEV v8; // rdx
  int v9; // esi
  int v10; // esi
  int v11; // eax

  if ( a3 )
  {
    v3 = (SFMLOGICALSURFACE *)*((_QWORD *)a3 + 24);
    REGION::vDeleteREGION(*((REGION **)a3 + 11));
    v7 = (REGION *)*((_QWORD *)a3 + 13);
    *((_QWORD *)a3 + 11) = 0LL;
    REGION::vDeleteREGION(v7);
    v9 = *((_DWORD *)a3 + 50);
    *((_QWORD *)a3 + 13) = 0LL;
    v10 = v9 & 0x10;
    if ( *((_DWORD *)a3 + 32) )
      CheckAndProcessWindowResizeComplete(a3, 1, 0LL);
    if ( v3 )
    {
      DWMSPRITE::SetLogicalSurface(a3, v8, 0LL);
      SFMLOGICALSURFACE::CleanupRegions(v3);
      v11 = *((_DWORD *)v3 + 62);
      if ( (v11 & 0x80u) != 0 && (v11 & 8) != 0 && (v11 & 0x10) != 0 )
      {
        *((_DWORD *)v3 + 62) = v11 & 0xFFFFFFEF;
        SFMLOGICALSURFACE::StopSfmStateTracking(v3, a1, gpSfmState);
      }
      bhLSurfDestroyLogicalSurfaceObject((__int64 *)v3, 1, 0);
    }
    if ( !v10 )
      vspRemoveStateReferencesForSprite(a3);
    if ( !*(_QWORD *)a3 || (EtwDwmSpriteDestroyEvent(0LL), HmgRemoveObject(*(_QWORD *)a3, a2, 0LL, 1LL, 15, 0LL)) )
      FreeObject(a3, 15LL);
    --*((_DWORD *)g_pDwmState + 24);
  }
}

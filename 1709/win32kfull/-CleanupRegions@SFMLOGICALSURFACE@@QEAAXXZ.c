/*
 * XREFs of ?CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ @ 0x1C008EA48
 * Callers:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C008E7F0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C008F07C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008F1D0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C008F200 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 */

void __fastcall SFMLOGICALSURFACE::CleanupRegions(REGION **this)
{
  REGION *v2; // rcx
  REGION *v3; // rcx

  REGION::vDeleteREGION(this[12]);
  v2 = this[11];
  this[12] = 0LL;
  REGION::vDeleteREGION(v2);
  v3 = *this;
  this[11] = 0LL;
  EtwTraceLifetimeAccum(v3, 1LL);
  REGION::vDeleteREGION(this[17]);
  this[17] = 0LL;
  METAREGION::vClearMoveData((METAREGION *)(this + 17), 1);
}

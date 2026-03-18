/*
 * XREFs of ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016E19C
 * Callers:
 *     ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x18016AE7C (-ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z.c)
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18016B790 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18016B7FC (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18016E2C0 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18016E37C (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18016E474 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x18016EB1C (-TelemetrySetPosition@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x18016F178 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  unsigned __int64 v3; // rcx
  int v4; // eax

  v3 = *((_QWORD *)this + 8) - *(_QWORD *)a2;
  if ( !v3 )
    v3 = *((unsigned int *)this + 18) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 8) = *(_QWORD *)a2;
    v4 = *((_DWORD *)a2 + 2);
    *((_BYTE *)this + 620) |= 2u;
    *((_DWORD *)this + 18) = v4;
    CResource::InvalidateAnimationSources(this);
    CResource::InvalidateAnimationSources(this);
    if ( *((_DWORD *)this + 38) == 1 )
      CInteractionTracker::UpdatePositionRoundingSuggestion(this);
    CInteractionTracker::TelemetrySetPosition(this);
  }
}

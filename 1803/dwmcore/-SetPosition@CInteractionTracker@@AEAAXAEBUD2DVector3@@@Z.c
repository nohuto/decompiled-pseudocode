/*
 * XREFs of ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801963D8
 * Callers:
 *     ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x1801937EC (-ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z.c)
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x1801941F0 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18019425C (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180196500 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x1801965BC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x1801966B0 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x180196CF4 (-TelemetrySetPosition@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x180197178 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
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
    *((_BYTE *)this + 676) |= 2u;
    *((_DWORD *)this + 18) = v4;
    CResource::InvalidateAnimationSources(this, 1);
    CResource::InvalidateAnimationSources(this, 55);
    if ( *((_DWORD *)this + 38) == 1 )
      CInteractionTracker::UpdatePositionRoundingSuggestion(this);
    CInteractionTracker::TelemetrySetPosition(this);
  }
}

/*
 * XREFs of ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18016B868
 * Callers:
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18016B490 (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x18016E0B4 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18016E474 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 */

void __fastcall CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(CInteractionTracker *this)
{
  if ( !*((_DWORD *)this + 38) && (*((_BYTE *)this + 620) & 0x20) == 0 )
    CInteractionTracker::SetScale(this, fmaxf(*((float *)this + 28), *((float *)this + 29)));
}

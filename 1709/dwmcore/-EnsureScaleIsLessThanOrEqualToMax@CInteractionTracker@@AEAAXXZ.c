/*
 * XREFs of ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18016B894
 * Callers:
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18016B490 (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x18016DF10 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18016E474 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 */

void __fastcall CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(CInteractionTracker *this)
{
  if ( !*((_DWORD *)this + 38) && (*((_BYTE *)this + 620) & 0x20) == 0 )
    CInteractionTracker::SetScale(this, fminf(*((float *)this + 28), *((float *)this + 30)));
}

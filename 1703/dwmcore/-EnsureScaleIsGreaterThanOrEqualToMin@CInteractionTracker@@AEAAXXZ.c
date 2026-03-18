/*
 * XREFs of ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18016CAD8
 * Callers:
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18016C71C (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x18016DE6C (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18016E2C4 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 */

void __fastcall CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(CInteractionTracker *this)
{
  if ( !*((_DWORD *)this + 35) && (*((_BYTE *)this + 592) & 8) == 0 )
    CInteractionTracker::SetScale(this, fmaxf(*((float *)this + 28), *((float *)this + 29)));
}

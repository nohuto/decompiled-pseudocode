/*
 * XREFs of ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x1801942C8
 * Callers:
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x180193D7C (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x1801962EC (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x1801966B0 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 */

void __fastcall CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(CInteractionTracker *this)
{
  if ( !*((_DWORD *)this + 38) && (*((_BYTE *)this + 676) & 0x20) == 0 )
    CInteractionTracker::SetScale(this, fmaxf(*((float *)this + 28), *((float *)this + 29)));
}

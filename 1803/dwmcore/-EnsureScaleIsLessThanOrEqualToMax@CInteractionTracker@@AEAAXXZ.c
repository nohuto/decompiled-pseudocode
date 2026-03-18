/*
 * XREFs of ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x1801942F4
 * Callers:
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x180193D7C (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x180196148 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x1801966B0 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 */

void __fastcall CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(CInteractionTracker *this)
{
  if ( !*((_DWORD *)this + 38) && (*((_BYTE *)this + 676) & 0x20) == 0 )
    CInteractionTracker::SetScale(this, fminf(*((float *)this + 28), *((float *)this + 30)));
}

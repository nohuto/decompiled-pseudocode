/*
 * XREFs of ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18016B790
 * Callers:
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18016B490 (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DFF8 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016E19C (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

void __fastcall CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin(CInteractionTracker *this)
{
  float v1; // xmm1_4
  _DWORD v2[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_DWORD *)this + 38) && (*((_BYTE *)this + 620) & 0x20) == 0 )
  {
    v1 = fmaxf(*((float *)this + 17), *((float *)this + 20));
    v2[0] = fmaxf(*((float *)this + 16), *((float *)this + 19));
    v2[2] = 0;
    *(float *)&v2[1] = v1;
    CInteractionTracker::SetPosition(this, (const struct D2DVector3 *)v2);
  }
}

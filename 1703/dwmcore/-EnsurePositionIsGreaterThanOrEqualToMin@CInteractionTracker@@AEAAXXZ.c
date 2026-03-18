/*
 * XREFs of ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18016CA00
 * Callers:
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18016C71C (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DDB0 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DF54 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

void __fastcall CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin(CInteractionTracker *this)
{
  float v1; // xmm1_4
  _DWORD v2[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_DWORD *)this + 35) && (*((_BYTE *)this + 592) & 8) == 0 )
  {
    v1 = fmaxf(*((float *)this + 17), *((float *)this + 20));
    v2[0] = fmaxf(*((float *)this + 16), *((float *)this + 19));
    v2[2] = 0;
    *(float *)&v2[1] = v1;
    CInteractionTracker::SetPosition(this, (const struct D2DVector3 *)v2);
  }
}

/*
 * XREFs of ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x1801941F0
 * Callers:
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x180193D7C (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180196234 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801963D8 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

void __fastcall CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin(CInteractionTracker *this)
{
  float v1; // xmm1_4
  _DWORD v2[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_DWORD *)this + 38) && (*((_BYTE *)this + 676) & 0x20) == 0 )
  {
    v1 = fmaxf(*((float *)this + 17), *((float *)this + 20));
    v2[0] = fmaxf(*((float *)this + 16), *((float *)this + 19));
    v2[2] = 0;
    *(float *)&v2[1] = v1;
    CInteractionTracker::SetPosition(this, (const struct D2DVector3 *)v2);
  }
}

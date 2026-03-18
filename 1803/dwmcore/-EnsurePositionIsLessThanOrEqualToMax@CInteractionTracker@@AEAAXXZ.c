/*
 * XREFs of ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18019425C
 * Callers:
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x180193D7C (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180196090 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801963D8 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

void __fastcall CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax(CInteractionTracker *this)
{
  float v1; // xmm1_4
  _DWORD v2[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_DWORD *)this + 38) && (*((_BYTE *)this + 676) & 0x20) == 0 )
  {
    v1 = fminf(*((float *)this + 17), *((float *)this + 23));
    v2[0] = fminf(*((float *)this + 16), *((float *)this + 22));
    v2[2] = 0;
    *(float *)&v2[1] = v1;
    CInteractionTracker::SetPosition(this, (const struct D2DVector3 *)v2);
  }
}

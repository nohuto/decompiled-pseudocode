/*
 * XREFs of ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18016E474
 * Callers:
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18016B868 (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18016B894 (-EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18016E2C0 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x18016E420 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016E19C (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

void __fastcall CInteractionTracker::SetScale(CInteractionTracker *this, float a2)
{
  float v3; // xmm0_4
  int v4; // eax
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = fmaxf(0.001, a2);
  if ( v3 != *((float *)this + 28) )
  {
    v4 = *((_DWORD *)this + 38);
    v5 = v3 / *((float *)this + 28);
    *((float *)this + 28) = v3;
    if ( !v4 || v4 == 3 && !*((_QWORD *)this + 51) )
    {
      v6 = (float)((float)(*((float *)this + 17) - *((float *)this + 32)) * v5) + *((float *)this + 32);
      v7[0] = (float)((float)(*((float *)this + 16) - *((float *)this + 31)) * v5) + *((float *)this + 31);
      v7[2] = *((float *)this + 18);
      v7[1] = v6;
      CInteractionTracker::SetPosition(this, (const struct D2DVector3 *)v7);
    }
    *((_BYTE *)this + 620) |= 2u;
    CResource::InvalidateAnimationSources(this);
    CResource::InvalidateAnimationSources(this);
  }
}

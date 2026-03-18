/*
 * XREFs of ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18016E2C4
 * Callers:
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18016CAD8 (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18016CB04 (-EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18016E100 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x18016E268 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DF54 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

void __fastcall CInteractionTracker::SetScale(CInteractionTracker *this, float a2)
{
  float v3; // xmm0_4
  int v4; // eax
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7[4]; // [rsp+20h] [rbp-38h]
  float v8[4]; // [rsp+30h] [rbp-28h] BYREF

  v3 = fmaxf(0.001, a2);
  if ( v3 != *((float *)this + 28) )
  {
    v4 = *((_DWORD *)this + 35);
    v5 = v3 / *((float *)this + 28);
    *((float *)this + 28) = v3;
    if ( !v4 || v4 == 3 && !*((_QWORD *)this + 49) )
    {
      *(_QWORD *)v7 = *(_QWORD *)((char *)this + 124);
      v6 = (float)((float)(*((float *)this + 17) - v7[1]) * v5) + v7[1];
      v8[0] = (float)((float)(*((float *)this + 16) - v7[0]) * v5) + v7[0];
      v8[2] = *((float *)this + 18);
      v8[1] = v6;
      CInteractionTracker::SetPosition(this, (const struct D2DVector3 *)v8);
    }
    *((_BYTE *)this + 592) |= 1u;
    CResource::InvalidateAnimationSources(this, 2LL);
    CResource::InvalidateAnimationSources(this, 53LL);
  }
}

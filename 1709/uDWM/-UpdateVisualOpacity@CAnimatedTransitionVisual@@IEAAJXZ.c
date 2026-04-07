/*
 * XREFs of ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000A9E8
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18002E900 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018E30 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180018FF0 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateVisualOpacity(CAnimatedTransitionVisual *this)
{
  float v1; // xmm0_4

  v1 = *((float *)this + 186);
  if ( v1 != *((float *)this + 187) )
  {
    CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), v1);
    CVisual::UpdateOpacity((CAnimatedTransitionVisual *)((char *)this + 8));
    *((_DWORD *)this + 187) = *((_DWORD *)this + 186);
  }
  return 0LL;
}

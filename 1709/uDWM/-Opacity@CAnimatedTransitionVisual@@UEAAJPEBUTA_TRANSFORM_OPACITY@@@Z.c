/*
 * XREFs of ?Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x18002EEC0
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18002DAB4 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Opacity(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_OPACITY *a2)
{
  float v2; // xmm0_4

  v2 = *((float *)a2 + 5);
  if ( v2 != *((float *)this + 186) )
  {
    *((float *)this + 186) = v2;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  }
  return 0LL;
}

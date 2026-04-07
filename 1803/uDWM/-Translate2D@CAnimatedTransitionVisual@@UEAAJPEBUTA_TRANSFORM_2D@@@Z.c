/*
 * XREFs of ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180004F70
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18000D8A0 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x180098C1C (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x180099CB0 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Translate2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 188) != v2 || *((float *)this + 189) != *((float *)a2 + 6) )
  {
    *((float *)this + 188) = v2;
    *(_QWORD *)((char *)this + 756) = *((unsigned int *)a2 + 6);
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x1000u);
  }
  return 0LL;
}

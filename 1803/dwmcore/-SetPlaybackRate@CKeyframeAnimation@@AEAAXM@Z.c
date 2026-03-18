/*
 * XREFs of ?SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z @ 0x18003CF64
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18003D240 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?SetTimeReversed@KeyframeSequence@@QEAAX_N@Z @ 0x18003F838 (-SetTimeReversed@KeyframeSequence@@QEAAX_N@Z.c)
 */

void __fastcall CKeyframeAnimation::SetPlaybackRate(CKeyframeAnimation *this, float a2)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  CResource *v4; // r8

  if ( *((float *)this + 114) != a2 )
  {
    if ( a2 != 0.0 )
    {
      if ( a2 >= 0.0 )
      {
        v2 = fmaxf(a2, 0.0625);
        v3 = FLOAT_16_0;
      }
      else
      {
        v2 = fmaxf(a2, -16.0);
        v3 = FLOAT_N0_0625;
      }
      a2 = fminf(v3, v2);
    }
    *((float *)this + 114) = a2;
    KeyframeSequence::SetTimeReversed(*((KeyframeSequence **)this + 41), a2 < 0.0);
    CResource::InvalidateAnimationSources(v4, 0x1Fu);
  }
}

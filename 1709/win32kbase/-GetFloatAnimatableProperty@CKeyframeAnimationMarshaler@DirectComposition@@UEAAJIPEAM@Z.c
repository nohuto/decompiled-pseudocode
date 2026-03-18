/*
 * XREFs of ?GetFloatAnimatableProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0143200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        int a2,
        float *a3)
{
  if ( a2 == 24 )
    *a3 = 0.0;
  return a2 != 24 ? 0xC000000D : 0;
}

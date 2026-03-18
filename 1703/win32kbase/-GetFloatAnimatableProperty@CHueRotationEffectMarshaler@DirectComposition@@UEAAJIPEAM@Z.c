/*
 * XREFs of ?GetFloatAnimatableProperty@CHueRotationEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C014D7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHueRotationEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CHueRotationEffectMarshaler *this,
        int a2,
        float *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
    return 3221225485LL;
  *a3 = *((float *)this + 22);
  return result;
}

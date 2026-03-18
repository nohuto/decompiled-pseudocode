/*
 * XREFs of ?GetFloatAnimatableProperty@CTranslateTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C0158B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTranslateTransformMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CTranslateTransformMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
      *a3 = *((float *)this + 15);
    else
      return (unsigned int)-1073741811;
  }
  else
  {
    *a3 = *((float *)this + 14);
  }
  return v3;
}

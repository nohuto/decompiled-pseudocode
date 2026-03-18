/*
 * XREFs of ?GetFloatAnimatableProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C014CF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CColorMatrixEffectMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CColorMatrixEffectMarshaler *this,
        int a2,
        float *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 3) <= 0x13 )
    *a3 = *((float *)this + 4 * ((unsigned __int64)(unsigned int)(a2 - 3) >> 2) + (((_BYTE)a2 + 1) & 3) + 22);
  else
    return (unsigned int)-1073741811;
  return v3;
}

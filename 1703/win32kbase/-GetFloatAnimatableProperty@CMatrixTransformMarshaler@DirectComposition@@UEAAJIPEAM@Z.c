/*
 * XREFs of ?GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C014AC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransformMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CMatrixTransformMarshaler *this,
        unsigned int a2,
        float *a3)
{
  __int64 result; // rax

  result = a2 >= 6 ? 0xC000000D : 0;
  if ( a2 < 6 )
    *a3 = *((float *)this + 2 * ((unsigned __int64)a2 >> 1) + (a2 & 1) + 14);
  return result;
}

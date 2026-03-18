/*
 * XREFs of ?GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C014B9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransform3DMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CMatrixTransform3DMarshaler *this,
        unsigned int a2,
        float *a3)
{
  __int64 result; // rax

  result = a2 >= 0x10 ? 0xC000000D : 0;
  if ( a2 < 0x10 )
    *a3 = *((float *)this + a2 + 10);
  return result;
}

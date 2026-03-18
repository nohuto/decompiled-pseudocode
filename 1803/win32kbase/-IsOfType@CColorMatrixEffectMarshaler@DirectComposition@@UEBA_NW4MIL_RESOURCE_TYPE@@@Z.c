/*
 * XREFs of ?IsOfType@CColorMatrixEffectMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0146740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CColorMatrixEffectMarshaler::IsOfType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( a2 <= 0x37 )
  {
    v2 = 0x84000000100000LL;
    if ( _bittest64(&v2, (int)a2) )
      return 1;
  }
  return result;
}

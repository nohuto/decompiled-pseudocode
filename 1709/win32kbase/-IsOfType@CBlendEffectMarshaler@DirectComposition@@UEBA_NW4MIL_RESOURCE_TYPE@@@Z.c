/*
 * XREFs of ?IsOfType@CBlendEffectMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C013FFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CBlendEffectMarshaler::IsOfType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  bool result; // al

  result = 0;
  if ( a2 <= 0x31 )
  {
    v2 = 0x2200000001000LL;
    if ( _bittest64(&v2, (int)a2) )
      return 1;
  }
  return result;
}

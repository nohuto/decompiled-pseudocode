/*
 * XREFs of ?IsOfType@CLinearTransferEffectMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0140200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CLinearTransferEffectMarshaler::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  bool result; // al

  v2 = a2 - 45;
  result = 0;
  if ( v2 <= 0x26 )
  {
    v3 = 0x4000000011LL;
    if ( _bittest64(&v3, (int)v2) )
      return 1;
  }
  return result;
}

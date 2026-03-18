/*
 * XREFs of ?IsOfType@CLinearTransferEffectMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0140D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CLinearTransferEffectMarshaler::IsOfType(__int64 a1, unsigned int a2)
{
  int v2; // eax
  _BOOL8 result; // rax

  result = 0;
  if ( a2 <= 0x12 )
  {
    v2 = 262464;
    if ( _bittest(&v2, a2) )
      return 1;
  }
  return result;
}

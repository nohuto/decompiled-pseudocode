/*
 * XREFs of ?SetRemarshalingFlags@CArithmeticCompositeEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014F650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this)
{
  char result; // al

  result = 0;
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12)
    || 1.0 != *((float *)this + 22)
    || *((float *)this + 23) != 0.0
    || *((float *)this + 24) != 0.0
    || *((float *)this + 25) != 0.0
    || *((_DWORD *)this + 26) )
  {
    return 1;
  }
  return result;
}

/*
 * XREFs of IsValueSizeFixed @ 0x140735EDC
 * Callers:
 *     GetOperandValue @ 0x140734AFC (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x140735F08 (LocalGetConditionForString.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValueSizeFixed(unsigned __int8 a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return a1 <= 4u;
  return result;
}

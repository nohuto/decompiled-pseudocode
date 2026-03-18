/*
 * XREFs of IsValueSizeFixed @ 0x1406FE4BC
 * Callers:
 *     GetOperandValue @ 0x1406FD104 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1406FE4E8 (LocalGetConditionForString.c)
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

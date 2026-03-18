/*
 * XREFs of sub_1405D4774 @ 0x1405D4774
 * Callers:
 *     ExpHwidGetDevicePropertyData @ 0x1405D44D0 (ExpHwidGetDevicePropertyData.c)
 *     sub_1405D472C @ 0x1405D472C (sub_1405D472C.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1405D4774(__int64 a1)
{
  _WORD *result; // rax

  result = *(_WORD **)(a1 + 8);
  if ( result )
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(_WORD *)a1 = 0;
    *result = 0;
  }
  return result;
}

/*
 * XREFs of sub_1404E546C @ 0x1404E546C
 * Callers:
 *     sub_1404E5424 @ 0x1404E5424 (sub_1404E5424.c)
 *     ExpHwidGetDevicePropertyData @ 0x1404E5810 (ExpHwidGetDevicePropertyData.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1404E546C(__int64 a1)
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

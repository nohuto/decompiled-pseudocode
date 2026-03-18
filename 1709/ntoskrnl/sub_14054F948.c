/*
 * XREFs of sub_14054F948 @ 0x14054F948
 * Callers:
 *     ExpHwidGetDevicePropertyData @ 0x14054F2B8 (ExpHwidGetDevicePropertyData.c)
 *     sub_14054F900 @ 0x14054F900 (sub_14054F900.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_14054F948(__int64 a1)
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

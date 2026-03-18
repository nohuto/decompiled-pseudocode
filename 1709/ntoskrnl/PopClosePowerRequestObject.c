/*
 * XREFs of PopClosePowerRequestObject @ 0x14059EF00
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestCleanUp @ 0x1400AFDC8 (PopPowerRequestCleanUp.c)
 */

_UNKNOWN **__fastcall PopClosePowerRequestObject(__int64 a1, PVOID *a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax

  if ( a4 == 1 )
    return PopPowerRequestCleanUp(a2);
  return result;
}

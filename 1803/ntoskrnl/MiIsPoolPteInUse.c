/*
 * XREFs of MiIsPoolPteInUse @ 0x1400C2C94
 * Callers:
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPoolPteInUse(__int16 a1)
{
  _BOOL8 result; // rax

  result = 1LL;
  if ( (a1 & 1) == 0 && (a1 & 0x400) == 0 && (a1 & 0x800) == 0 )
    return (a1 & 0x3E0) != 0LL;
  return result;
}

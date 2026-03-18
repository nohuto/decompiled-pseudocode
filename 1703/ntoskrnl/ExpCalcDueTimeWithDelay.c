/*
 * XREFs of ExpCalcDueTimeWithDelay @ 0x14025CF98
 * Callers:
 *     ExpSetTimer @ 0x140049460 (ExpSetTimer.c)
 *     ExpSetTimer2 @ 0x140051C60 (ExpSetTimer2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpCalcDueTimeWithDelay(unsigned __int64 *a1, unsigned int a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r8

  v2 = *a1;
  if ( (*a1 & 0x8000000000000000uLL) == 0LL )
  {
    if ( v2 > MEMORY[0xFFFFF78000000014] )
      v3 = a2 + v2;
    else
      v3 = MEMORY[0xFFFFF78000000014] + a2;
    if ( v3 < (__int64)*a1 )
      return *a1;
  }
  else
  {
    v3 = v2 - a2;
    if ( v3 > (__int64)*a1 )
      return *a1;
  }
  return v3;
}

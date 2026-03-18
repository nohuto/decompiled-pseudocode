/*
 * XREFs of ExpCalcAdjustedDueTime @ 0x14025CF4C
 * Callers:
 *     ExpTimer2Adjust @ 0x14025CFE8 (ExpTimer2Adjust.c)
 *     ExpTimerAdjust @ 0x14025D0A8 (ExpTimerAdjust.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpCalcAdjustedDueTime(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r10

  v5 = 0LL;
  if ( a2 == 1 )
  {
    v5 = a4 + a3 + a1 - a5;
    if ( v5 < 0 )
      return a4;
  }
  else if ( (unsigned int)(a2 - 2) <= 1 )
  {
    v5 = a5 - a1 - a3;
    if ( v5 > 0 )
    {
      v5 = -1LL;
      if ( a3 > 0 )
        return a5 - a1;
    }
  }
  return v5;
}

/*
 * XREFs of sub_1800114B4 @ 0x1800114B4
 * Callers:
 *     sub_180011560 @ 0x180011560 (sub_180011560.c)
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     sub_18006008C @ 0x18006008C (sub_18006008C.c)
 * Callees:
 *     TpSetTimerEx @ 0x180024F70 (TpSetTimerEx.c)
 *     sub_1801022B8 @ 0x1801022B8 (sub_1801022B8.c)
 */

__int64 sub_1800114B4()
{
  unsigned int v0; // ebx

  if ( (dword_18015A43C & 0x40) != 0 && (v0 = 0, !byte_18015C3A8) && dword_18015D2B4 )
  {
    if ( !_InterlockedCompareExchange(&dword_18015D2B0, 1, 0) )
    {
      TpSetTimerEx(Timer, &DueTime, 0, 0x1388u);
      if ( (byte_18015D028 & 8) != 0 )
        sub_1801022B8();
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v0;
}

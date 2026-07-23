/*
 * XREFs of TpIsTimerSet @ 0x180024540
 * Callers:
 *     TpSetTimerEx @ 0x180024F70 (TpSetTimerEx.c)
 * Callees:
 *     sub_180025DA4 @ 0x180025DA4 (sub_180025DA4.c)
 */

LOGICAL __cdecl TpIsTimerSet(PTP_TIMER Timer)
{
  int v2; // eax
  LOGICAL v3; // edx

  v2 = sub_180025DA4(Timer, 0LL, 1LL);
  v3 = 0;
  if ( !v2 )
    return 0;
  LOBYTE(v3) = *((_QWORD *)Timer + 41) != 0LL;
  return v3;
}

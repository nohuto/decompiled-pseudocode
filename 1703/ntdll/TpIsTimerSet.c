/*
 * XREFs of TpIsTimerSet @ 0x1800172C0
 * Callers:
 *     TpSetTimerEx @ 0x180017510 (TpSetTimerEx.c)
 * Callees:
 *     sub_18001770C @ 0x18001770C (sub_18001770C.c)
 */

LOGICAL __cdecl TpIsTimerSet(PTP_TIMER Timer)
{
  int v2; // eax
  LOGICAL v3; // edx

  v2 = sub_18001770C(Timer, 0LL, 1LL);
  v3 = 0;
  if ( !v2 )
    return 0;
  LOBYTE(v3) = *((_QWORD *)Timer + 41) != 0LL;
  return v3;
}

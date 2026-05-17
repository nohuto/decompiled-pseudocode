/*
 * XREFs of TpIsTimerSet @ 0x1800172C0
 * Callers:
 *     TpSetTimerEx @ 0x180017510 (TpSetTimerEx.c)
 * Callees:
 *     sub_18001770C @ 0x18001770C (sub_18001770C.c)
 */

__int64 __fastcall TpIsTimerSet(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = sub_18001770C(a1, 0LL, 1LL);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  LOBYTE(v3) = *(_QWORD *)(a1 + 328) != 0LL;
  return v3;
}

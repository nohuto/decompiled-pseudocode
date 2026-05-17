/*
 * XREFs of TpIsTimerSet @ 0x180024540
 * Callers:
 *     TpSetTimerEx @ 0x180024F70 (TpSetTimerEx.c)
 * Callees:
 *     sub_180025DA4 @ 0x180025DA4 (sub_180025DA4.c)
 */

__int64 __fastcall TpIsTimerSet(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = sub_180025DA4(a1, 0LL, 1LL);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  LOBYTE(v3) = *(_QWORD *)(a1 + 328) != 0LL;
  return v3;
}

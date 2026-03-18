/*
 * XREFs of PpmPerfMinimumPerfReached @ 0x1401252E4
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x140090AF0 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 */

char PpmPerfMinimumPerfReached()
{
  char v0; // bl
  __int64 Prcb; // rax
  char v2; // r9
  unsigned __int16 *v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+30h] [rbp-18h]
  ULONG v6; // [rsp+50h] [rbp+8h] BYREF

  v4[1] = (unsigned __int16 *)qword_1403586D8[0];
  v0 = 1;
  v5 = 0;
  v4[0] = (unsigned __int16 *)&PpmPerfStatesRegistered;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v4) )
  {
    Prcb = KeGetPrcb(v6);
    v2 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(Prcb + 24184) + 56LL) <= *(_DWORD *)(*(_QWORD *)(Prcb + 24176) + 496LL) )
      v2 = v0;
    v0 = v2;
  }
  return v0;
}

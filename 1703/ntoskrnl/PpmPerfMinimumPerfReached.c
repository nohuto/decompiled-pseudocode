/*
 * XREFs of PpmPerfMinimumPerfReached @ 0x140088A50
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1400465B0 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 */

char PpmPerfMinimumPerfReached()
{
  char v0; // bl
  __int64 Prcb; // rax
  char v2; // r9
  unsigned __int16 *v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+30h] [rbp-18h]
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF

  v4[1] = (unsigned __int16 *)qword_140340078[0];
  v0 = 1;
  v5 = 0;
  v4[0] = (unsigned __int16 *)&PpmPerfStatesRegistered;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v4) )
  {
    Prcb = KeGetPrcb(v6);
    v2 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(Prcb + 24312) + 80LL) <= *(_DWORD *)(*(_QWORD *)(Prcb + 24304) + 408LL) )
      v2 = v0;
    v0 = v2;
  }
  return v0;
}

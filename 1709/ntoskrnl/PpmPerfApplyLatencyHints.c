/*
 * XREFs of PpmPerfApplyLatencyHints @ 0x140090630
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyLatencyHint @ 0x14000CB0C (PpmPerfApplyLatencyHint.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 */

char PpmPerfApplyLatencyHints()
{
  __int64 Prcb; // rax
  __int64 v2; // rdx
  unsigned __int16 *v3[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v4; // [rsp+30h] [rbp-18h]
  ULONG v5; // [rsp+50h] [rbp+8h] BYREF

  if ( PpmCheckLatencyBoostActive )
  {
    v3[1] = (unsigned __int16 *)qword_1403586D8;
    v3[0] = (unsigned __int16 *)&PpmPerfStatesRegistered;
    v4 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v5, v3) )
    {
      Prcb = KeGetPrcb(v5);
      PpmPerfApplyLatencyHint(Prcb, v2);
    }
  }
  return 1;
}

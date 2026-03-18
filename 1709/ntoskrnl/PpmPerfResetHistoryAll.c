/*
 * XREFs of PpmPerfResetHistoryAll @ 0x1405B3B0C
 * Callers:
 *     PpmCheckReInit @ 0x1405B5FE0 (PpmCheckReInit.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     PpmPerfResetHistory @ 0x140137B64 (PpmPerfResetHistory.c)
 */

__int64 PpmPerfResetHistoryAll()
{
  __int64 result; // rax
  __int64 Prcb; // rax
  unsigned __int16 *v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  ULONG v4; // [rsp+50h] [rbp+8h] BYREF

  v2[1] = (unsigned __int16 *)qword_140358788[0];
  v2[0] = PpmCheckRegistered;
  v3 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v4, v2);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v4);
    PpmPerfResetHistory(Prcb);
  }
  return result;
}

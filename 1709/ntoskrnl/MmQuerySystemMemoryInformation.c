/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x14012F138
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x14027C490 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x1404FD22C (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x14074D40C (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140389348;
  *((_QWORD *)&v2 + 1) = qword_140388018;
  *(_QWORD *)&v3 = qword_1403893E0;
  *((_QWORD *)&v3 + 1) = qword_14038B970;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}

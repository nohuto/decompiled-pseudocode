/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x14003AAC0
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x140254310 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x140498F88 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x140710334 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_14036D088;
  *((_QWORD *)&v2 + 1) = qword_14036BD18;
  *(_QWORD *)&v3 = qword_14036D120;
  *((_QWORD *)&v3 + 1) = qword_1403819F0;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}

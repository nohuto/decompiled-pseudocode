/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x1400CF52C
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1402AFC60 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x140538648 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x1407AEC84 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_1403CC5C8;
  *((_QWORD *)&v2 + 1) = qword_1403CB118;
  *(_QWORD *)&v3 = qword_1403CC658;
  *((_QWORD *)&v3 + 1) = qword_1403CFC28;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}

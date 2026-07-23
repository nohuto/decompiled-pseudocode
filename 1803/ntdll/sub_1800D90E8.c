/*
 * XREFs of sub_1800D90E8 @ 0x1800D90E8
 * Callers:
 *     sub_1800D8AD0 @ 0x1800D8AD0 (sub_1800D8AD0.c)
 * Callees:
 *     TpSetTimerEx @ 0x180024F70 (TpSetTimerEx.c)
 */

NTSTATUS __fastcall sub_1800D90E8(unsigned __int64 a1)
{
  NTSTATUS result; // eax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _TP_TIMER *v6; // rcx
  LARGE_INTEGER DueTime; // [rsp+38h] [rbp+10h] BYREF

  result = qword_18015D058;
  if ( !*(_QWORD *)(qword_18015D058 + 88) || *(_QWORD *)(qword_18015D058 + 88) > a1 )
  {
    v3 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
    if ( v3 <= a1 )
      v4 = a1 - v3;
    else
      v4 = 500000LL;
    v5 = qword_18015D058;
    *(_QWORD *)(qword_18015D058 + 88) = v4;
    v6 = *(_TP_TIMER **)(v5 + 80);
    DueTime.QuadPart = -v4;
    return TpSetTimerEx(v6, &DueTime, 0, 0x32u);
  }
  return result;
}

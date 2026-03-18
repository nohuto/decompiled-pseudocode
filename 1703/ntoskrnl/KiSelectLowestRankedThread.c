/*
 * XREFs of KiSelectLowestRankedThread @ 0x140113F6C
 * Callers:
 *     KiSelectReadyThreadEx @ 0x1400ECE00 (KiSelectReadyThreadEx.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     NtYieldExecution @ 0x140112EE0 (NtYieldExecution.c)
 *     KiSelectNextThread @ 0x140113E30 (KiSelectNextThread.c)
 * Callees:
 *     KiSelectThreadFromSchedulingGroup @ 0x140114C1C (KiSelectThreadFromSchedulingGroup.c)
 */

__int64 __fastcall KiSelectLowestRankedThread(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rdi

  v1 = *(_QWORD *)(a1 + 22904);
  v3 = 0LL;
  while ( 1 )
  {
    v4 = v1 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( !v4 )
      break;
    v6 = v4 - 88;
    v3 = KiSelectThreadFromSchedulingGroup(a1, v4 - 88, 0LL);
    if ( v3 )
      break;
    v1 = *(_QWORD *)(v6 + 400);
  }
  return v3;
}

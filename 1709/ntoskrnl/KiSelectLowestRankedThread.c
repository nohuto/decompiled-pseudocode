/*
 * XREFs of KiSelectLowestRankedThread @ 0x1400A8B20
 * Callers:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KiSelectReadyThreadEx @ 0x14008B420 (KiSelectReadyThreadEx.c)
 *     NtYieldExecution @ 0x14008D810 (NtYieldExecution.c)
 *     KiSelectNextThread @ 0x1400A89A0 (KiSelectNextThread.c)
 * Callees:
 *     KiSelectThreadFromSchedulingGroup @ 0x1400D2970 (KiSelectThreadFromSchedulingGroup.c)
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

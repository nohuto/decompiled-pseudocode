/*
 * XREFs of PspSetJobLimitsJobPostCallback @ 0x14045C100
 * Callers:
 *     <none>
 * Callees:
 *     PspApplyWorkingSetLimits @ 0x1406E11DC (PspApplyWorkingSetLimits.c)
 */

__int64 __fastcall PspSetJobLimitsJobPostCallback(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != a1 )
    PspApplyWorkingSetLimits();
  return 0LL;
}

/*
 * XREFs of PspEnforceLimitsProcessCallback @ 0x1404798A0
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 *     PspAddAccountingValues @ 0x14047979C (PspAddAccountingValues.c)
 *     PsQueryStatisticsProcess @ 0x140479C70 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall PspEnforceLimitsProcessCallback(__int64 a1, unsigned __int64 *a2)
{
  char v5[8]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-60h]

  if ( (*(_DWORD *)(a1 + 768) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, v5);
    PspAddAccountingValues((_QWORD *)(*(_QWORD *)(a1 + 944) + 1120LL), v5);
    if ( !a2[2] && *a2 && v6 > *a2 && ObReferenceObjectSafeWithTag(a1) )
      a2[2] = a1;
  }
  return 0LL;
}

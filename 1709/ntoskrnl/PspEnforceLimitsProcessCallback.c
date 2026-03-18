/*
 * XREFs of PspEnforceLimitsProcessCallback @ 0x140510860
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     PsQueryStatisticsProcess @ 0x1404AD730 (PsQueryStatisticsProcess.c)
 *     PspAddAccountingValues @ 0x140510738 (PspAddAccountingValues.c)
 */

__int64 __fastcall PspEnforceLimitsProcessCallback(__int64 a1, _QWORD *a2)
{
  _QWORD v5[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( (*(_DWORD *)(a1 + 768) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, v5);
    PspAddAccountingValues((_QWORD *)(*(_QWORD *)(a1 + 944) + 1120LL), (char *)v5);
    if ( !a2[2] && *a2 && v5[1] > *a2 && ObReferenceObjectSafeWithTag(a1) )
      a2[2] = a1;
  }
  return 0LL;
}

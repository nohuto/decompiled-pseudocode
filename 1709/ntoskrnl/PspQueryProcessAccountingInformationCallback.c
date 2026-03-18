/*
 * XREFs of PspQueryProcessAccountingInformationCallback @ 0x140510AB0
 * Callers:
 *     <none>
 * Callees:
 *     PsAddProcessEnergyValues @ 0x140013280 (PsAddProcessEnergyValues.c)
 *     PoEnergyEstimationEnabled @ 0x140025A00 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PsQueryProcessEnergyValues @ 0x140493140 (PsQueryProcessEnergyValues.c)
 *     PsQueryStatisticsProcess @ 0x1404AD730 (PsQueryStatisticsProcess.c)
 *     PspAddAccountingValues @ 0x140510738 (PspAddAccountingValues.c)
 */

__int64 __fastcall PspQueryProcessAccountingInformationCallback(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  _OWORD v6[27]; // [rsp+20h] [rbp-1C8h] BYREF

  if ( (*(_DWORD *)(a1 + 768) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, (_QWORD *)a2);
    PspAddAccountingValues((_QWORD *)(a2 + 88), (char *)a2);
    *(_DWORD *)(a2 + 216) += *(_DWORD *)(a1 + 1284);
    v4 = *(_QWORD **)(a1 + 1800);
    if ( v4 )
    {
      *(_QWORD *)(a2 + 176) += *v4;
      *(_QWORD *)(a2 + 184) += v4[1];
      *(_QWORD *)(a2 + 192) += v4[2];
      *(_QWORD *)(a2 + 200) += v4[3];
      *(_QWORD *)(a2 + 208) += v4[4];
    }
    if ( PoEnergyEstimationEnabled() )
    {
      PsQueryProcessEnergyValues((_QWORD *)a1, v6);
      PsAddProcessEnergyValues((_QWORD *)(a2 + 224), (__int64)v6);
    }
  }
  return 0LL;
}

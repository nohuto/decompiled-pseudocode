/*
 * XREFs of PspQueryProcessAccountingInformationCallback @ 0x140535430
 * Callers:
 *     <none>
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140060580 (PoEnergyEstimationEnabled.c)
 *     PsAddProcessEnergyValues @ 0x14008B430 (PsAddProcessEnergyValues.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PsQueryProcessEnergyValues @ 0x1404CE830 (PsQueryProcessEnergyValues.c)
 *     PspAddAccountingValues @ 0x1405374AC (PspAddAccountingValues.c)
 *     PsQueryStatisticsProcess @ 0x1405A1840 (PsQueryStatisticsProcess.c)
 */

__int64 __fastcall PspQueryProcessAccountingInformationCallback(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  _OWORD v6[27]; // [rsp+20h] [rbp-1C8h] BYREF

  if ( (*(_DWORD *)(a1 + 768) & 2) == 0 )
  {
    PsQueryStatisticsProcess(a1, a2);
    PspAddAccountingValues(a2 + 88, a2);
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

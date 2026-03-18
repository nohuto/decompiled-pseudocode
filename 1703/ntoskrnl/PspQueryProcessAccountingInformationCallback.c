/*
 * XREFs of PspQueryProcessAccountingInformationCallback @ 0x140475080
 * Callers:
 *     <none>
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140110540 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PsAddProcessEnergyValues @ 0x140238F6C (PsAddProcessEnergyValues.c)
 *     PspAddAccountingValues @ 0x14047979C (PspAddAccountingValues.c)
 *     PsQueryStatisticsProcess @ 0x140479C70 (PsQueryStatisticsProcess.c)
 *     PsQueryProcessEnergyValues @ 0x1405400F0 (PsQueryProcessEnergyValues.c)
 */

__int64 __fastcall PspQueryProcessAccountingInformationCallback(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  _BYTE v6[352]; // [rsp+20h] [rbp-178h] BYREF

  if ( (*(_DWORD *)(a1 + 768) & 2) == 0 )
  {
    PsQueryStatisticsProcess();
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
      PsQueryProcessEnergyValues(a1, v6);
      PsAddProcessEnergyValues(a2 + 224, (__int64)v6);
    }
  }
  return 0LL;
}

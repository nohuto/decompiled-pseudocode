/*
 * XREFs of PspFoldProcessAccountingIntoJob @ 0x140547818
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x14054727C (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140110540 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PsAddProcessEnergyValues @ 0x140238F6C (PsAddProcessEnergyValues.c)
 *     PsQueryProcessEnergyValues @ 0x1405400F0 (PsQueryProcessEnergyValues.c)
 *     PspUpdateJobPeakProcessMemory @ 0x140547938 (PspUpdateJobPeakProcessMemory.c)
 */

char __fastcall PspFoldProcessAccountingIntoJob(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  char *v11; // r8
  _QWORD *v12; // rcx
  char result; // al
  _OWORD v14[22]; // [rsp+20h] [rbp-178h] BYREF

  v3 = a3[2];
  v6 = a3[1];
  *(_QWORD *)(a1 + 160) += v6;
  v7 = *a3;
  *(_QWORD *)(a1 + 1024) += v3;
  *(_QWORD *)(a1 + 176) += a3[3];
  v8 = a3[4];
  *(_QWORD *)(a1 + 168) += v7;
  *(_QWORD *)(a1 + 184) += v6;
  v9 = 6LL;
  *(_QWORD *)(a1 + 192) += v7;
  v10 = (_QWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 200) += v8;
  v11 = (char *)a3 - a1;
  do
  {
    *v10 += *(_QWORD *)((char *)v10 + (_QWORD)v11 - 448);
    ++v10;
    --v9;
  }
  while ( v9 );
  *(_DWORD *)(a1 + 208) += *(_DWORD *)(a2 + 1284);
  v12 = *(_QWORD **)(a2 + 1800);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 536) += *v12;
    *(_QWORD *)(a1 + 544) += v12[1];
    *(_QWORD *)(a1 + 552) += v12[2];
    *(_QWORD *)(a1 + 560) += v12[3];
    *(_QWORD *)(a1 + 568) += v12[4];
  }
  PspUpdateJobPeakProcessMemory(a1, *(_QWORD *)(a2 + 1272));
  result = PoEnergyEstimationEnabled();
  if ( result )
  {
    PsQueryProcessEnergyValues((_QWORD *)a2, v14);
    return PsAddProcessEnergyValues(*(_QWORD *)(a1 + 1312), (__int64)v14);
  }
  return result;
}

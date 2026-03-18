/*
 * XREFs of PspFoldProcessAccountingIntoJob @ 0x14050CFF0
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x14050E398 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     PsAddProcessEnergyValues @ 0x140013280 (PsAddProcessEnergyValues.c)
 *     PoEnergyEstimationEnabled @ 0x140025A00 (PoEnergyEstimationEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PsQueryProcessEnergyValues @ 0x140493140 (PsQueryProcessEnergyValues.c)
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
  unsigned __int64 v13; // rdx
  char result; // al
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  _OWORD v17[27]; // [rsp+20h] [rbp-1C8h] BYREF

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
    *v10 += *(_QWORD *)&v11[(_QWORD)v10 - 448];
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
  v13 = *(_QWORD *)(a2 + 1272);
  if ( v13 > *(_QWORD *)(a1 + 600) )
  {
    _m_prefetchw((const void *)(a1 + 600));
    v15 = *(_QWORD *)(a1 + 600);
    do
    {
      if ( v13 <= v15 )
        break;
      v16 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 600), v13, v15);
    }
    while ( v15 != v16 );
  }
  result = PoEnergyEstimationEnabled();
  if ( result )
  {
    PsQueryProcessEnergyValues((_QWORD *)a2, v17);
    return PsAddProcessEnergyValues(*(_QWORD **)(a1 + 1312), (__int64)v17);
  }
  return result;
}

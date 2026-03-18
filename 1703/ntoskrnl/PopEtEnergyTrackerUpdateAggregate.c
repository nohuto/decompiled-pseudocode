/*
 * XREFs of PopEtEnergyTrackerUpdateAggregate @ 0x1406D2344
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1406D30EC (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PsAddProcessEnergyValues @ 0x140238F6C (PsAddProcessEnergyValues.c)
 *     PopEtAggregateGet @ 0x1406D07DC (PopEtAggregateGet.c)
 *     PopEtEnergyValuesDeltaCalculate @ 0x1406D24B8 (PopEtEnergyValuesDeltaCalculate.c)
 */

__int64 __fastcall PopEtEnergyTrackerUpdateAggregate(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  int v10; // ecx
  unsigned __int64 UnbiasedInterruptTime; // rax
  int v12; // r8d
  unsigned __int64 v13; // rdx
  unsigned int v14; // r9d
  bool v15; // cc
  int v16; // eax
  __int64 v17[2]; // [rsp+20h] [rbp-198h] BYREF
  _BYTE v18[352]; // [rsp+30h] [rbp-188h] BYREF

  result = PopEtEnergyValuesDeltaCalculate(a2 + 48, a3, v18, v17);
  if ( !LODWORD(v17[0]) )
  {
    PopEtAggregateGet(a1, (unsigned __int8 *)(a2 + 16), v17);
    v8 = (_DWORD *)v17[0];
    PsAddProcessEnergyValues(v17[0] + 48, (__int64)v18);
    v9 = *(_DWORD *)(a2 + 396);
    if ( v9 < 0x80000000 )
    {
      *(_DWORD *)(a2 + 396) = v9 | 0x80000000;
      ++v8[101];
    }
    ++v8[98];
    v10 = *(_DWORD *)(a2 + 396) ^ (*(_DWORD *)(a2 + 396) ^ (*(_DWORD *)(a2 + 396) + 1)) & 0x7FFFFFFF;
    *(_DWORD *)(a2 + 396) = v10;
    if ( (v10 & 0x7FFFFFFF) == 1 )
      ++v8[102];
    switch ( a4 )
    {
      case 2:
        ++v8[99];
        break;
      case 3:
        ++v8[100];
        break;
      case 4:
        ++v8[103];
        break;
    }
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    v12 = *(_DWORD *)(a1 + 508);
    v13 = UnbiasedInterruptTime / 0x2710;
    v14 = UnbiasedInterruptTime / 0x2710 - v12;
    v15 = (unsigned int)(UnbiasedInterruptTime / 0x2710) - *(_DWORD *)(a2 + 400) <= v14;
    v16 = UnbiasedInterruptTime / 0x2710;
    if ( v15 )
      v12 = *(_DWORD *)(a2 + 400);
    result = (unsigned int)(v16 - v12);
    v8[104] += result;
    if ( v8[104] > v14 )
      v8[104] = v14;
    *(_DWORD *)(a2 + 400) = v13;
  }
  return result;
}

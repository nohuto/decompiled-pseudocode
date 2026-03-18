/*
 * XREFs of PopEtEnergyValuesDeltaCalculate @ 0x140457E10
 * Callers:
 *     PopEtEnergyTrackerUpdateAggregate @ 0x140457C68 (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     RtlStateDurationDelta @ 0x140013238 (RtlStateDurationDelta.c)
 */

__int64 __fastcall PopEtEnergyValuesDeltaCalculate(__int64 a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v5; // rdi
  char *v6; // r14
  __int64 v9; // rbp
  unsigned int *v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rdx
  unsigned int *v13; // rdx
  __int64 v14; // rbp
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rsi
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx

  v5 = a2;
  *(_QWORD *)(a3 + 64) = a2[8] - *(_QWORD *)(a1 + 64);
  v6 = (char *)a2 - a1;
  *(_QWORD *)(a3 + 72) = a2[9] - *(_QWORD *)(a1 + 72);
  v9 = 3LL;
  *(_QWORD *)(a3 + 80) = a2[10] - *(_QWORD *)(a1 + 80);
  v10 = (unsigned int *)(a1 + 104);
  *(_QWORD *)(a3 + 88) = v5[11] - *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a3 + 96) = v5[12] - *(_QWORD *)(a1 + 96);
  v11 = a3 - a1;
  do
  {
    RtlStateDurationDelta((__int64)v10 + v11, v10, (int *)((char *)v10 + (_QWORD)v6));
    v10 = (unsigned int *)(v12 + 8);
    --v9;
  }
  while ( v9 );
  v13 = (unsigned int *)(a1 + 384);
  v14 = 5LL;
  do
  {
    result = RtlStateDurationDelta((__int64)v13 + v11, v13, (int *)&v6[(_QWORD)v13]);
    v13 = (unsigned int *)(v16 + 8);
    --v14;
  }
  while ( v14 );
  v17 = 4LL;
  *(_DWORD *)(a3 + 128) = *((_DWORD *)v5 + 32) - *(_DWORD *)(a1 + 128);
  v18 = 0LL;
  *(_DWORD *)(a3 + 132) = *((_DWORD *)v5 + 33) - *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a3 + 136) = *((_DWORD *)v5 + 34) - *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a3 + 424) = *((_DWORD *)v5 + 106) - *(_DWORD *)(a1 + 424);
  v19 = *((_DWORD *)v5 + 107) - *(_DWORD *)(a1 + 428);
  v20 = a1 - (_QWORD)v5;
  *(_DWORD *)(a3 + 428) = v19;
  v21 = a3 - (_QWORD)v5;
  *(_OWORD *)(a3 + 272) = *((_OWORD *)v5 + 17);
  *(_OWORD *)(a3 + 288) = *((_OWORD *)v5 + 18);
  *(_OWORD *)(a3 + 304) = *((_OWORD *)v5 + 19);
  *(_OWORD *)(a3 + 320) = *((_OWORD *)v5 + 20);
  *(_OWORD *)(a3 + 336) = *((_OWORD *)v5 + 21);
  *(_OWORD *)(a3 + 352) = *((_OWORD *)v5 + 22);
  *(_OWORD *)(a3 + 368) = *((_OWORD *)v5 + 23);
  do
  {
    v22 = 2LL;
    do
    {
      v23 = *v5 - *(_QWORD *)((char *)v5 + v20);
      v24 = v23 + v18;
      *(_QWORD *)((char *)v5 + v21) = v23;
      v25 = v5[18] - *(_QWORD *)((char *)v5 + v20 + 144);
      *(_QWORD *)((char *)v5 + v21 + 144) = v25;
      v18 = v25 + v24;
      *(_QWORD *)((char *)v5 + v21 + 208) = v5[26] - *(_QWORD *)((char *)v5 + v20 + 208);
      ++v5;
      --v22;
    }
    while ( v22 );
    --v17;
  }
  while ( v17 );
  *a4 = !v18
     && !*(_QWORD *)(a3 + 64)
     && !*(_QWORD *)(a3 + 72)
     && !*(_QWORD *)(a3 + 80)
     && (*(_DWORD *)(a3 + 108) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 116) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 124) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 388) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 396) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 404) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 412) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 420) & 0x7FFFFFFF) == 0
     && !*(_DWORD *)(a3 + 128)
     && !*(_DWORD *)(a3 + 132)
     && !*(_DWORD *)(a3 + 136);
  return result;
}

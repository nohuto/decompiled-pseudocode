/*
 * XREFs of PopEtEnergyValuesDeltaCalculate @ 0x1406D24B8
 * Callers:
 *     PopEtEnergyTrackerUpdateAggregate @ 0x1406D2344 (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopEtEnergyValuesDeltaCalculate(__int64 a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // r11
  __int64 v7; // rbx
  __int64 v8; // rbp
  _DWORD *v9; // rdx
  __int64 v10; // r9
  __int64 result; // rax
  unsigned int v12; // r10d
  unsigned int v13; // ecx
  int v14; // ecx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx

  v4 = a2;
  *(_QWORD *)(a3 + 64) = a2[8] - *(_QWORD *)(a1 + 64);
  v7 = a1 - (_QWORD)a2;
  *(_QWORD *)(a3 + 72) = a2[9] - *(_QWORD *)(a1 + 72);
  v8 = 3LL;
  *(_QWORD *)(a3 + 80) = a2[10] - *(_QWORD *)(a1 + 80);
  v9 = (_DWORD *)a2 + 27;
  *(_QWORD *)(a3 + 88) = v4[11] - *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a3 + 96) = v4[12] - *(_QWORD *)(a1 + 96);
  v10 = a3 - (_QWORD)v4;
  do
  {
    *(_QWORD *)((char *)v9 + v10 - 4) = 0LL;
    result = *v9 & 0x7FFFFFFF;
    v12 = *(_DWORD *)((char *)v9 + v7) & 0x7FFFFFFF;
    if ( (unsigned int)result > v12 )
      *(_DWORD *)((char *)v9 + v10) ^= (*(_DWORD *)((char *)v9 + v10) ^ (*v9 - v12)) & 0x7FFFFFFF;
    v13 = *(v9 - 1);
    if ( *(_DWORD *)((char *)v9 + v7 - 4) > v13 )
      v13 = *(_DWORD *)((char *)v9 + v7 - 4);
    *(_DWORD *)((char *)v9 + v10 - 4) = v13;
    v9 += 2;
    --v8;
  }
  while ( v8 );
  *(_DWORD *)(a3 + 128) = *((_DWORD *)v4 + 32) - *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a3 + 132) = *((_DWORD *)v4 + 33) - *(_DWORD *)(a1 + 132);
  v14 = *((_DWORD *)v4 + 34) - *(_DWORD *)(a1 + 136);
  v15 = 4LL;
  *(_DWORD *)(a3 + 136) = v14;
  v16 = 0LL;
  *(_OWORD *)(a3 + 272) = *((_OWORD *)v4 + 17);
  *(_OWORD *)(a3 + 288) = *((_OWORD *)v4 + 18);
  *(_OWORD *)(a3 + 304) = *((_OWORD *)v4 + 19);
  *(_OWORD *)(a3 + 320) = *((_OWORD *)v4 + 20);
  *(_QWORD *)(a3 + 336) = v4[42];
  do
  {
    v17 = 2LL;
    do
    {
      v18 = *v4 - *(_QWORD *)((char *)v4 + v7);
      v19 = v18 + v16;
      *(_QWORD *)((char *)v4 + v10) = v18;
      v20 = v4[18] - *(_QWORD *)((char *)v4 + v7 + 144);
      *(_QWORD *)((char *)v4 + v10 + 144) = v20;
      v16 = v20 + v19;
      *(_QWORD *)((char *)v4 + v10 + 208) = v4[26] - *(_QWORD *)((char *)v4 + v7 + 208);
      ++v4;
      --v17;
    }
    while ( v17 );
    --v15;
  }
  while ( v15 );
  *a4 = !v16
     && !*(_QWORD *)(a3 + 64)
     && !*(_QWORD *)(a3 + 72)
     && !*(_QWORD *)(a3 + 80)
     && (*(_DWORD *)(a3 + 108) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 116) & 0x7FFFFFFF) == 0
     && (*(_DWORD *)(a3 + 124) & 0x7FFFFFFF) == 0
     && !*(_DWORD *)(a3 + 128)
     && !*(_DWORD *)(a3 + 132)
     && !*(_DWORD *)(a3 + 136);
  return result;
}

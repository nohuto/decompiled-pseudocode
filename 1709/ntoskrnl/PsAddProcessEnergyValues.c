/*
 * XREFs of PsAddProcessEnergyValues @ 0x140013280
 * Callers:
 *     PopEtEnergyTrackerUpdateAggregate @ 0x140457C68 (PopEtEnergyTrackerUpdateAggregate.c)
 *     PspFoldProcessAccountingIntoJob @ 0x14050CFF0 (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14050E678 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140510AB0 (PspQueryProcessAccountingInformationCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsAddProcessEnergyValues(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  _DWORD *v7; // rdx
  __int64 v8; // r10
  unsigned int v9; // eax
  _DWORD *v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // eax
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // r9d
  int v16; // eax
  int v17; // edx
  unsigned int v18; // r9d
  int v19; // eax
  int v20; // edx
  unsigned int v21; // r9d
  int v22; // eax
  int v23; // edx
  unsigned int v24; // r9d
  int v25; // eax
  int v26; // edx
  unsigned int v27; // r9d
  _DWORD *v28; // rax
  __int64 v29; // r9
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 result; // rax

  a1[8] += *(_QWORD *)(a2 + 64);
  v4 = a1;
  a1[9] += *(_QWORD *)(a2 + 72);
  v5 = 3LL;
  a1[10] += *(_QWORD *)(a2 + 80);
  a1[11] += *(_QWORD *)(a2 + 88);
  v6 = *(_QWORD *)(a2 + 96);
  v7 = (_DWORD *)a1 + 27;
  a1[12] += v6;
  v8 = a2 - (_QWORD)a1;
  do
  {
    v9 = *(v7 - 1);
    *v7 ^= (*v7 ^ (*v7 + *(_DWORD *)((char *)v7 + v8))) & 0x7FFFFFFF;
    if ( v9 <= *(_DWORD *)((char *)v7 + v8 - 4) )
      v9 = *(_DWORD *)((char *)v7 + v8 - 4);
    *(v7 - 1) = v9;
    v7 += 2;
    --v5;
  }
  while ( v5 );
  v10 = (_DWORD *)a1 + 97;
  v11 = 5LL;
  do
  {
    v12 = *(v10 - 1);
    *v10 ^= (*v10 ^ (*v10 + *(_DWORD *)((char *)v10 + v8))) & 0x7FFFFFFF;
    if ( v12 <= *(_DWORD *)((char *)v10 + v8 - 4) )
      v12 = *(_DWORD *)((char *)v10 + v8 - 4);
    *(v10 - 1) = v12;
    v10 += 2;
    --v11;
  }
  while ( v11 );
  v13 = *(_DWORD *)(a2 + 128);
  v14 = -1;
  if ( v13 == -1 || (v15 = *((_DWORD *)v4 + 32), ~v13 < v15) )
    v16 = -1;
  else
    v16 = v15 + v13;
  *((_DWORD *)v4 + 32) = v16;
  v17 = *(_DWORD *)(a2 + 132);
  if ( v17 == -1 || (v18 = *((_DWORD *)v4 + 33), ~v17 < v18) )
    v19 = -1;
  else
    v19 = v18 + v17;
  *((_DWORD *)v4 + 33) = v19;
  v20 = *(_DWORD *)(a2 + 136);
  if ( v20 == -1 || (v21 = *((_DWORD *)v4 + 34), ~v20 < v21) )
    v22 = -1;
  else
    v22 = v21 + v20;
  *((_DWORD *)v4 + 34) = v22;
  v23 = *(_DWORD *)(a2 + 424);
  if ( v23 == -1 || (v24 = *((_DWORD *)v4 + 106), ~v23 < v24) )
    v25 = -1;
  else
    v25 = v24 + v23;
  *((_DWORD *)v4 + 106) = v25;
  v26 = *(_DWORD *)(a2 + 428);
  if ( v26 != -1 )
  {
    v27 = *((_DWORD *)v4 + 107);
    if ( ~v26 >= v27 )
      v14 = v27 + v26;
  }
  *((_DWORD *)v4 + 107) = v14;
  v28 = (_DWORD *)v4 + 69;
  v29 = 14LL;
  do
  {
    v30 = *(_DWORD *)((char *)v28 + v8 - 4);
    v31 = *(v28 - 1);
    if ( v30 > v31 )
    {
      *(v28 - 1) = v30;
      if ( v30 - v31 < 0x20 )
        *v28 <<= v30 - v31;
      else
        *v28 = 0;
      *v28 |= *(_DWORD *)((char *)v28 + v8);
    }
    else
    {
      v32 = v31 - v30;
      if ( v32 < 0x20 )
        *v28 |= *(_DWORD *)((char *)v28 + v8) << v32;
    }
    v28 += 2;
    --v29;
  }
  while ( v29 );
  v33 = 4LL;
  do
  {
    v34 = 2LL;
    do
    {
      *v4 += *(_QWORD *)((char *)v4 + v8);
      v4[18] += *(_QWORD *)((char *)v4 + v8 + 144);
      result = *(_QWORD *)((char *)v4 + v8 + 208);
      v4[26] += result;
      ++v4;
      --v34;
    }
    while ( v34 );
    --v33;
  }
  while ( v33 );
  return result;
}

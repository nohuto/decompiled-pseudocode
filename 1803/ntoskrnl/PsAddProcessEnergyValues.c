/*
 * XREFs of PsAddProcessEnergyValues @ 0x14008B430
 * Callers:
 *     PspFoldProcessAccountingIntoJob @ 0x140532D24 (PspFoldProcessAccountingIntoJob.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140535430 (PspQueryProcessAccountingInformationCallback.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405361A8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PopEtEnergyTrackerUpdateAggregate @ 0x14053807C (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsAddProcessEnergyValues(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // r8
  __int64 v5; // r11
  __int64 v6; // rax
  int *v7; // rdx
  __int64 v8; // r10
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int *v13; // rdx
  __int64 v14; // r11
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // r11d
  int v22; // eax
  int v23; // edx
  unsigned int v24; // r11d
  int v25; // eax
  int v26; // edx
  unsigned int v27; // r11d
  int v28; // eax
  int v29; // edx
  unsigned int v30; // r11d
  int v31; // eax
  int v32; // edx
  unsigned int v33; // r9d
  int *v34; // rax
  __int64 v35; // r9
  unsigned int v36; // edx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 result; // rax
  int v42; // ecx

  a1[8] += *(_QWORD *)(a2 + 64);
  v4 = a1;
  a1[9] += *(_QWORD *)(a2 + 72);
  v5 = 3LL;
  a1[10] += *(_QWORD *)(a2 + 80);
  a1[11] += *(_QWORD *)(a2 + 88);
  v6 = *(_QWORD *)(a2 + 96);
  v7 = (int *)a1 + 27;
  a1[12] += v6;
  v8 = a2 - (_QWORD)a1;
  do
  {
    v9 = *v7;
    v10 = *(int *)((char *)v7 + v8);
    v7 += 2;
    v11 = v9 ^ (v9 ^ (v9 + v10)) & 0x7FFFFFFF;
    v12 = *(v7 - 3);
    *(v7 - 2) = v11;
    if ( v12 <= *(int *)((char *)v7 + v8 - 12) )
      v12 = *(int *)((char *)v7 + v8 - 12);
    *(v7 - 3) = v12;
    --v5;
  }
  while ( v5 );
  v13 = (int *)v4 + 97;
  v14 = 5LL;
  do
  {
    v15 = *v13;
    v16 = *(int *)((char *)v13 + v8);
    v13 += 2;
    v17 = v15 ^ (v15 ^ (v15 + v16)) & 0x7FFFFFFF;
    v18 = *(v13 - 3);
    *(v13 - 2) = v17;
    if ( v18 <= *(int *)((char *)v13 + v8 - 12) )
      v18 = *(int *)((char *)v13 + v8 - 12);
    *(v13 - 3) = v18;
    --v14;
  }
  while ( v14 );
  v19 = *(_DWORD *)(a2 + 128);
  v20 = -1;
  if ( v19 == -1 || (v21 = *((_DWORD *)v4 + 32), ~v19 < v21) )
    v22 = -1;
  else
    v22 = v21 + v19;
  *((_DWORD *)v4 + 32) = v22;
  v23 = *(_DWORD *)(a2 + 132);
  if ( v23 == -1 || (v24 = *((_DWORD *)v4 + 33), ~v23 < v24) )
    v25 = -1;
  else
    v25 = v24 + v23;
  *((_DWORD *)v4 + 33) = v25;
  v26 = *(_DWORD *)(a2 + 136);
  if ( v26 == -1 || (v27 = *((_DWORD *)v4 + 34), ~v26 < v27) )
    v28 = -1;
  else
    v28 = v27 + v26;
  *((_DWORD *)v4 + 34) = v28;
  v29 = *(_DWORD *)(a2 + 424);
  if ( v29 == -1 || (v30 = *((_DWORD *)v4 + 106), ~v29 < v30) )
    v31 = -1;
  else
    v31 = v30 + v29;
  *((_DWORD *)v4 + 106) = v31;
  v32 = *(_DWORD *)(a2 + 428);
  if ( v32 != -1 )
  {
    v33 = *((_DWORD *)v4 + 107);
    if ( ~v32 >= v33 )
      v20 = v33 + v32;
  }
  *((_DWORD *)v4 + 107) = v20;
  v34 = (int *)v4 + 69;
  v35 = 14LL;
  do
  {
    v36 = *(int *)((char *)v34 + v8 - 4);
    v37 = *(v34 - 1);
    if ( v36 > v37 )
    {
      *(v34 - 1) = v36;
      if ( v36 - v37 < 0x20 )
      {
        *v34 <<= v36 - v37;
        v42 = *v34 | *(int *)((char *)v34 + v8);
      }
      else
      {
        *v34 = 0;
        v42 = *(int *)((char *)v34 + v8);
      }
      *v34 = v42;
    }
    else
    {
      v38 = v37 - v36;
      if ( v38 < 0x20 )
        *v34 |= *(int *)((char *)v34 + v8) << v38;
    }
    v34 += 2;
    --v35;
  }
  while ( v35 );
  v39 = 4LL;
  do
  {
    v40 = 2LL;
    do
    {
      *v4 += *(_QWORD *)((char *)v4 + v8);
      v4[18] += *(_QWORD *)((char *)v4 + v8 + 144);
      result = *(_QWORD *)((char *)v4 + v8 + 208);
      v4[26] += result;
      ++v4;
      --v40;
    }
    while ( v40 );
    --v39;
  }
  while ( v39 );
  return result;
}

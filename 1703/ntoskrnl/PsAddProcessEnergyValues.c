/*
 * XREFs of PsAddProcessEnergyValues @ 0x140238F6C
 * Callers:
 *     PspQueryProcessAccountingInformationCallback @ 0x140475080 (PspQueryProcessAccountingInformationCallback.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140478450 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspFoldProcessAccountingIntoJob @ 0x140547818 (PspFoldProcessAccountingIntoJob.c)
 *     PopEtEnergyTrackerUpdateAggregate @ 0x1406D2344 (PopEtEnergyTrackerUpdateAggregate.c)
 * Callees:
 *     RtlTimelineBitmapMerge @ 0x1401FCDC8 (RtlTimelineBitmapMerge.c)
 */

__int64 __fastcall PsAddProcessEnergyValues(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  unsigned int v6; // ecx
  int v7; // r8d
  int v8; // ecx
  unsigned int v9; // r9d
  int v10; // eax
  int v11; // r8d
  unsigned int v12; // r9d
  int v13; // eax
  int v14; // r8d
  unsigned int v15; // edx
  unsigned int *v16; // r11
  __int64 v17; // rdi
  _QWORD *v18; // r10
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 result; // rax

  v2 = (_DWORD *)(a1 + 108);
  *(_QWORD *)(a1 + 64) += *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 72) += *(_QWORD *)(a2 + 72);
  v4 = 3LL;
  *(_QWORD *)(a1 + 80) += *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 88) += *(_QWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 96) += *(_QWORD *)(a2 + 96);
  v5 = a2 - a1;
  do
  {
    *v2 ^= (*v2 ^ (*v2 + *(_DWORD *)((char *)v2 + v5))) & 0x7FFFFFFF;
    v6 = *(_DWORD *)((char *)v2 + v5 - 4);
    if ( *(v2 - 1) > v6 )
      v6 = *(v2 - 1);
    *(v2 - 1) = v6;
    v2 += 2;
    --v4;
  }
  while ( v4 );
  v7 = *(_DWORD *)(a2 + 128);
  v8 = -1;
  if ( v7 == -1 || (v9 = *(_DWORD *)(a1 + 128), v10 = v9 + v7, ~v7 < v9) )
    v10 = -1;
  *(_DWORD *)(a1 + 128) = v10;
  v11 = *(_DWORD *)(a2 + 132);
  if ( v11 == -1 || (v12 = *(_DWORD *)(a1 + 132), v13 = v12 + v11, ~v11 < v12) )
    v13 = -1;
  *(_DWORD *)(a1 + 132) = v13;
  v14 = *(_DWORD *)(a2 + 136);
  if ( v14 != -1 )
  {
    v15 = *(_DWORD *)(a1 + 136);
    if ( ~v14 >= v15 )
      v8 = v15 + v14;
  }
  *(_DWORD *)(a1 + 136) = v8;
  v16 = (unsigned int *)(a1 + 272);
  v17 = 9LL;
  do
  {
    RtlTimelineBitmapMerge(v16, (unsigned int *)((char *)v16 + v5));
    v16 = (unsigned int *)(v19 + 8);
    --v17;
  }
  while ( v17 );
  v20 = 4LL;
  do
  {
    v21 = 2LL;
    do
    {
      *v18 += *(_QWORD *)((char *)v18 + v5);
      v18[18] += *(_QWORD *)((char *)v18 + v5 + 144);
      result = *(_QWORD *)((char *)v18 + v5 + 208);
      v18[26] += result;
      ++v18;
      --v21;
    }
    while ( v21 );
    --v20;
  }
  while ( v20 );
  return result;
}

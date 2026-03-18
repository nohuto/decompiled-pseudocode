/*
 * XREFs of ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14026B704
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14026A3EC (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026AAE0 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026B13C (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026DDA0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402713C4 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmComputeSpaceUsageForPriority@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z @ 0x14026C634 (-StDmComputeSpaceUsageForPriority@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCheckForCompaction(__int64 a1, char a2)
{
  int v2; // ebp
  unsigned int v5; // edi
  int v7; // r8d
  unsigned int v8; // ebx
  _BYTE *v9; // r15
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // r12d
  unsigned int v14; // r14d
  __int64 v15; // rax
  BOOL v16; // r8d
  unsigned int v17; // r9d
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_BYTE *)(a1 + 1904) & 3;
  v5 = 2;
  if ( (a2 & 3) == 0 && v2 == 2 )
    return 0LL;
  v7 = (unsigned __int8)*(_DWORD *)(a1 + 776);
  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
  {
    if ( v2 == 3 )
    {
      v10 = *(_DWORD *)(a1 + 856);
      v11 = v10 - 256;
      v8 = v10 >> 2;
      if ( v8 >= v11 )
        v8 = v11;
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 856);
      v8 = v12 - 128;
      if ( 3 * (v12 >> 2) < v12 - 128 )
        v8 = 3 * (v12 >> 2);
    }
    v9 = &`ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableFile;
    if ( v8 < 2 )
      v8 = 2;
  }
  else
  {
    v8 = 3;
    v9 = &`ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableInMem;
  }
  v20 = 0;
  v18 = 0;
  v13 = 0;
  v19 = 0;
  v14 = v7 != 0 ? 1 : 8;
  do
    ST_STORE<SM_TRAITS>::StDmComputeSpaceUsageForPriority(
      a1,
      v13++,
      (unsigned int)&v19,
      (unsigned int)&v20,
      (__int64)&v18);
  while ( v13 < v14 );
  v15 = *(_QWORD *)(a1 + 800);
  if ( (a2 & 2) != 0 )
  {
    if ( *(_BYTE *)(v15 + 6022) || v19 * ((unsigned __int64)*(unsigned int *)(a1 + 784) >> 12) <= *(_QWORD *)(a1 + 8) )
      return 0LL;
  }
  else
  {
    if ( *(_QWORD *)(v15 + 6552) || v19 < v8 )
      return 0LL;
    v16 = (a2 & 1) == 0
       && (v2 == 1
        || (*(_DWORD *)(*(_QWORD *)(a1 + 800) + 6100LL) >> 8)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6576LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6096LL));
    v17 = v20 >> v9[2 * v16];
    if ( v2 == 3 )
      v17 -= v20 >> v9[2 * v16 + 1];
    if ( v18 <= v17 )
      return v2 != 1 && v16 && v18 > v20 >> *v9;
  }
  return v5;
}

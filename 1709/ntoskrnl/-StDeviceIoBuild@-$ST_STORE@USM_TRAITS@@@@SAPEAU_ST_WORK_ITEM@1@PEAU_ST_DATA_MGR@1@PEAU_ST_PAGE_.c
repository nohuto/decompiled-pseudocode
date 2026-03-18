/*
 * XREFs of ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14026B260
 * Callers:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14026CCA4 (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14026F080 (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ?StRegionReadDereference@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140271048 (-StRegionReadDereference@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StRegionReadReference@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x140271078 (-StRegionReadReference@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmCalcIoWorkItemSize @ 0x140275BF4 (SmCalcIoWorkItemSize.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::StDeviceIoBuild(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r11d
  _DWORD *v7; // r12
  int v8; // r8d
  unsigned int v9; // r13d
  int v10; // r10d
  unsigned int v11; // ebp
  int Reference; // r15d
  unsigned __int64 PoolWithTag; // rsi
  unsigned int v14; // eax
  size_t v15; // r14
  _DWORD *v16; // rdi
  int v17; // ecx

  v6 = *(_DWORD *)(a1 + 824) + *(unsigned __int16 *)(a2 + 4);
  v7 = 0LL;
  v8 = *(_DWORD *)(a1 + 792);
  v9 = *(_DWORD *)a2 >> *(_DWORD *)(a1 + 812);
  v10 = (v8 - 1) & (16 * (*(_DWORD *)a2 & *(_DWORD *)(a1 + 808)));
  v11 = v8 + v10 - ((v8 - 1) & (v10 + v8 + v6 - 1)) + v6 - 1;
  Reference = ST_STORE<SM_TRAITS>::StRegionReadReference(a1, v9);
  if ( !Reference )
    return v7;
  if ( *(_QWORD *)(a1 + 1800) )
  {
    PoolWithTag = *(_QWORD *)(a1 + 1800);
    *(_DWORD *)(a1 + 1800) |= 1u;
    goto LABEL_5;
  }
  PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(NonPagedPoolNx, v11 + *(_DWORD *)(a1 + 792) + 28, 0x74536D73u);
  if ( PoolWithTag )
  {
LABEL_5:
    *(_QWORD *)PoolWithTag = 0LL;
    *(_QWORD *)(PoolWithTag + 8) = 0LL;
    *(_QWORD *)(PoolWithTag + 16) = 0LL;
    *(_DWORD *)(PoolWithTag + 24) = 0;
    *(_DWORD *)PoolWithTag = 1;
    *(_OWORD *)(PoolWithTag + 12) = *(_OWORD *)a2;
    v14 = SmCalcIoWorkItemSize(
            *(_QWORD *)(a1 + 800),
            ~(*(unsigned int *)(a1 + 792) - 1LL) & (PoolWithTag
                                                  + *(unsigned int *)(a1 + 792)
                                                  + 16LL * *(unsigned int *)PoolWithTag
                                                  + 11),
            v11);
    v15 = v14;
    if ( *(_QWORD *)(a1 + 1808) )
    {
      v16 = *(_DWORD **)(a1 + 1808);
      *(_DWORD *)(a1 + 1808) |= 1u;
    }
    else
    {
      v16 = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x74536D73u);
      if ( !v16 )
        goto LABEL_9;
    }
    memset(v16, 0, v15);
    *v16 |= 7u;
    v7 = v16;
    *((_QWORD *)v16 + 1) = a4;
    *((_QWORD *)v16 + 2) = PoolWithTag;
    PoolWithTag = 0LL;
    v16[6] = *(_DWORD *)a2;
    v16[7] = (32 * v11) | v16[7] & 0x1D | *(_DWORD *)(a1 + 832) & 2;
    Reference = 0;
LABEL_9:
    if ( PoolWithTag )
    {
      v17 = *(_DWORD *)(a1 + 1800);
      if ( (v17 & 1) != 0 && (PoolWithTag | 1) == *(_QWORD *)(a1 + 1800) )
        *(_DWORD *)(a1 + 1800) = v17 & 0xFFFFFFFE;
      else
        ExFreePoolWithTag((PVOID)PoolWithTag, 0);
    }
  }
  if ( Reference )
    ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, v9);
  return v7;
}

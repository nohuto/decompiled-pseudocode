/*
 * XREFs of ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14024A97C
 * Callers:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14024B58C (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14024C5F4 (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ?StRegionReadDereference@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14024CE8C (-StRegionReadDereference@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StRegionReadReference@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x14024CEBC (-StRegionReadReference@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmCalcIoWorkItemSize @ 0x14024F834 (SmCalcIoWorkItemSize.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::StDeviceIoBuild(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  int v6; // r11d
  _DWORD *v7; // r12
  int v8; // r8d
  unsigned int v9; // r13d
  int v10; // r10d
  unsigned int v11; // ebp
  int Reference; // r15d
  unsigned __int64 PoolWithTag; // rsi
  __int128 v14; // xmm0
  unsigned int v15; // eax
  size_t v16; // r14
  _DWORD *v17; // rdi
  int v18; // ecx

  v6 = *(_DWORD *)(a1 + 824) + *((unsigned __int16 *)a2 + 2);
  v7 = 0LL;
  v8 = *(_DWORD *)(a1 + 792);
  v9 = *(_DWORD *)a2 >> *(_DWORD *)(a1 + 812);
  v10 = (v8 - 1) & (16 * (*(_DWORD *)a2 & *(_DWORD *)(a1 + 808)));
  v11 = v8 + v10 - ((v8 - 1) & (v10 + v8 + v6 - 1)) + v6 - 1;
  Reference = ST_STORE<SM_TRAITS>::StRegionReadReference(a1, v9);
  if ( !Reference )
    return v7;
  if ( *(_QWORD *)(a1 + 1784) )
  {
    PoolWithTag = *(_QWORD *)(a1 + 1784);
    *(_DWORD *)(a1 + 1784) |= 1u;
    goto LABEL_5;
  }
  PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(NonPagedPoolNx, v11 + *(_DWORD *)(a1 + 792) + 28, 0x74536D73u);
  if ( PoolWithTag )
  {
LABEL_5:
    v14 = *a2;
    *(_QWORD *)PoolWithTag = 0LL;
    *(_QWORD *)(PoolWithTag + 8) = 0LL;
    *(_DWORD *)PoolWithTag = 1;
    *(_OWORD *)(PoolWithTag + 12) = v14;
    v15 = SmCalcIoWorkItemSize(
            *(_QWORD *)(a1 + 800),
            ~(*(unsigned int *)(a1 + 792) - 1LL) & (PoolWithTag
                                                  + *(unsigned int *)(a1 + 792)
                                                  + 16LL * *(unsigned int *)PoolWithTag
                                                  + 11),
            v11);
    v16 = v15;
    if ( *(_QWORD *)(a1 + 1792) )
    {
      v17 = *(_DWORD **)(a1 + 1792);
      *(_DWORD *)(a1 + 1792) |= 1u;
    }
    else
    {
      v17 = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x74536D73u);
      if ( !v17 )
        goto LABEL_9;
    }
    memset(v17, 0, v16);
    *v17 |= 7u;
    v7 = v17;
    *((_QWORD *)v17 + 1) = a4;
    *((_QWORD *)v17 + 2) = PoolWithTag;
    PoolWithTag = 0LL;
    v17[6] = *(_DWORD *)a2;
    v17[7] = (32 * v11) | v17[7] & 0x1D | *(_DWORD *)(a1 + 832) & 2;
    Reference = 0;
LABEL_9:
    if ( PoolWithTag )
    {
      v18 = *(_DWORD *)(a1 + 1784);
      if ( (v18 & 1) != 0 && (PoolWithTag | 1) == *(_QWORD *)(a1 + 1784) )
        *(_DWORD *)(a1 + 1784) = v18 & 0xFFFFFFFE;
      else
        ExFreePoolWithTag((PVOID)PoolWithTag, 0);
    }
  }
  if ( Reference )
    ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, v9);
  return v7;
}

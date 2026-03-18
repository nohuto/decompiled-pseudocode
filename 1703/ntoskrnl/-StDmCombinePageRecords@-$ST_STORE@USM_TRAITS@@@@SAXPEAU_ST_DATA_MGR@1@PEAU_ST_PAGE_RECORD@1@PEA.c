/*
 * XREFs of ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x14012FA30
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x14012F7B0 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140059904 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140059944 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14005B948 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombinePageRecords(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebp
  char v8; // al
  __int64 result; // rax
  __int64 v10; // rcx

  if ( (a2[1] & 0xFFFFF000) != 0x1000 )
    __int2c();
  v7 = ((_DWORD)a4 - *(_DWORD *)(a1 + 472) - ((unsigned int)a4 & 0xFFFFF000)) / *(_DWORD *)(a1 + 464)
     + (*(_DWORD *)((a4 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1);
  ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1);
  if ( (int)ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, (unsigned __int64)a2) < 0 )
    __int2c();
  *a2 = -1;
  a2[1] = v7;
  ++*(_DWORD *)(a1 + 1880);
  v8 = *(_BYTE *)(a1 + 1889);
  if ( (v8 & 3) == 0 && *(_DWORD *)(a1 + 1880) > 0x400u )
  {
    v10 = *(_QWORD *)(a1 + 1896);
    *(_BYTE *)(a1 + 1889) = v8 & 0xFC | 1;
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(v10, 5LL, 0x7530u, 0xFFFFFFFE);
  }
  if ( (*(_DWORD *)(a4 + 4) & 0xFFFFF000) >= 0xFFFFF000 )
    __int2c();
  result = *(_DWORD *)(a4 + 4) & 0xFFF | ((*(_DWORD *)(a4 + 4) & 0xFFFFF000) + 4096);
  *(_DWORD *)(a4 + 4) = result;
  return result;
}

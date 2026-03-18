/*
 * XREFs of ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x14013C968
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14005B2AC (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140139500 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StQueueCompaction(__int64 a1, int a2)
{
  char v2; // al
  unsigned int v3; // r10d
  unsigned int v4; // r9d
  unsigned int v5; // r8d

  v2 = *(_BYTE *)(a1 + 1888);
  v3 = (*(_DWORD *)(a1 + 832) >> 1) & 1;
  if ( a2 == 1 )
  {
    v4 = -2;
    *(_BYTE *)(a1 + 1888) = v2 & 0xFC | 1;
    v5 = (unsigned __int8)*(_DWORD *)(a1 + 776) != 0 ? 400 : 30;
  }
  else
  {
    v4 = 0;
    *(_BYTE *)(a1 + 1888) = v2 & 0xFC | 2;
    v5 = 0;
  }
  return ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1896), v3, v5, v4);
}

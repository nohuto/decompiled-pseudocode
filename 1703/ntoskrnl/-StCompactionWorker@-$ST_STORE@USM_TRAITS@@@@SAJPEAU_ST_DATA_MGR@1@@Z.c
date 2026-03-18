/*
 * XREFs of ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140139500
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14005B704 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14013958C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x14013C968 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionWorker(__int64 a1)
{
  char v1; // al
  unsigned int v3; // eax
  int v4; // edi

  v1 = *(_BYTE *)(a1 + 1888);
  if ( (v1 & 4) != 0 )
  {
    *(_BYTE *)(a1 + 1888) = v1 & 0xFB;
  }
  else
  {
    *(_BYTE *)(a1 + 1888) = v1 & 0xFC;
    v3 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0);
    if ( v3 != 2 )
    {
LABEL_6:
      v4 = 0;
      goto LABEL_9;
    }
  }
  *(_BYTE *)(a1 + 1888) |= 3u;
  while ( 1 )
  {
    v4 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(a1, 1LL);
    v3 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0);
    if ( v4 < 0 )
      break;
    if ( v3 != 2 )
      goto LABEL_6;
  }
  if ( v3 == 2 )
    v3 = 1;
LABEL_9:
  *(_BYTE *)(a1 + 1888) &= 0xFCu;
  if ( v3 )
    ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v3);
  return (unsigned int)v4;
}

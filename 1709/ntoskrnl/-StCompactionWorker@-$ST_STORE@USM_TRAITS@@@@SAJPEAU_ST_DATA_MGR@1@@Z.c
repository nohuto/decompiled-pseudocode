/*
 * XREFs of ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026B13C
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402713C4 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14026AD74 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14026B704 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140270CB4 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  unsigned int v6; // eax
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = *(_BYTE *)(a1 + 1904);
  if ( (v4 & 4) != 0 )
  {
    *(_BYTE *)(a1 + 1904) = v4 & 0xFB;
  }
  else
  {
    *(_BYTE *)(a1 + 1904) = v4 & 0xFC;
    v6 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL, a3, a4);
    if ( v6 != 2 )
    {
LABEL_3:
      v7 = 0;
      goto LABEL_11;
    }
  }
  *(_BYTE *)(a1 + 1904) |= 3u;
  while ( 1 )
  {
    v7 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(a1, 1);
    v6 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL, v8, v9);
    if ( v7 < 0 )
      break;
    if ( v6 != 2 )
      goto LABEL_3;
  }
  if ( v6 == 2 )
    v6 = 1;
LABEL_11:
  *(_BYTE *)(a1 + 1904) &= 0xFCu;
  if ( v6 )
    ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v6);
  return (unsigned int)v7;
}

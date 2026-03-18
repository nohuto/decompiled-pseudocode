/*
 * XREFs of MiStoreCheckCompleteWriteBatch @ 0x1400D0C58
 * Callers:
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MiModifiedPageWriter @ 0x14017CFC0 (MiModifiedPageWriter.c)
 * Callees:
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1400CDC88 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

void __fastcall MiStoreCheckCompleteWriteBatch(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 1144) )
  {
    if ( !*(_DWORD *)(a1 + 1164) )
      SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&stru_140465F40, 0);
  }
}

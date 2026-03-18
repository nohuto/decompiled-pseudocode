/*
 * XREFs of MiStoreCheckCompleteWriteBatch @ 0x14015C0AC
 * Callers:
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MiModifiedPageWriter @ 0x14015BF80 (MiModifiedPageWriter.c)
 * Callees:
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1402659AC (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 */

__int64 __fastcall MiStoreCheckCompleteWriteBatch(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 1144) )
  {
    if ( !*(_DWORD *)(a1 + 1164) )
      return SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(&stru_14041AF40, 0LL);
  }
  return result;
}

/*
 * XREFs of SmIoRequestComplete @ 0x140275C28
 * Callers:
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x1402654CC (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140274F04 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiStoreFreeWriteSupport @ 0x14022C490 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteComplete @ 0x14022CA98 (MiStoreModifiedWriteComplete.c)
 */

void __fastcall SmIoRequestComplete(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _SLIST_ENTRY *v4; // rbx

  if ( (*a2 & 7) != 0 )
  {
    if ( (*a2 & 7) == 2 )
      *(_QWORD *)(a4 + 8) = (unsigned __int16)*(_QWORD *)(a4 + 8);
  }
  else
  {
    *(_QWORD *)(a4 + 8) &= 1uLL;
  }
  if ( a3 < 0 )
  {
    KeSetEvent((PRKEVENT)a3, 1, 0);
  }
  else
  {
    v4 = (_SLIST_ENTRY *)(a3 | 0x8000000000000000uLL);
    MiStoreModifiedWriteComplete(a3 | 0x8000000000000000uLL);
    MiStoreFreeWriteSupport(v4, (_SLIST_HEADER *)&MiSystemPartition);
  }
}

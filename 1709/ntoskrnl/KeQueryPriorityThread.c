/*
 * XREFs of KeQueryPriorityThread @ 0x140100BB0
 * Callers:
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140008714 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     PoNotifyMediaBuffering @ 0x14000DD50 (PoNotifyMediaBuffering.c)
 *     FsRtlpWaitForIoAtEof @ 0x140100900 (FsRtlpWaitForIoAtEof.c)
 *     LZNT1DecompressChunkNewThread @ 0x140100ADC (LZNT1DecompressChunkNewThread.c)
 *     MiModifiedPageWriter @ 0x14015BF80 (MiModifiedPageWriter.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140267348 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x14026992C (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140269B90 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     PfSnPrefetchSections @ 0x140440C2C (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140440ED4 (PfSnPrefetchSectionsCleanup.c)
 *     MiInSwapStore @ 0x1404443BC (MiInSwapStore.c)
 *     PfSnPrefetchScenario @ 0x140452E48 (PfSnPrefetchScenario.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1407B3EF8 (ViPendingQueuePassiveLevelCompletion.c)
 * Callees:
 *     <none>
 */

KPRIORITY __stdcall KeQueryPriorityThread(PKTHREAD Thread)
{
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  else
    return Thread->Priority;
}

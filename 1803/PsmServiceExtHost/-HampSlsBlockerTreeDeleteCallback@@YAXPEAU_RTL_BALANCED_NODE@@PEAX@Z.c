/*
 * XREFs of ?HampSlsBlockerTreeDeleteCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180068FBC
 * Callers:
 *     ?HampSlsEventWriteWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800692D0 (-HampSlsEventWriteWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampSlsRundown@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x1800695A8 (-HampSlsRundown@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     ?HampSlsScenarioChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800697B0 (-HampSlsScenarioChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 */

void __fastcall HampSlsBlockerTreeDeleteCallback(struct _RTL_BALANCED_NODE *a1, void *a2)
{
  struct _RTL_BALANCED_NODE *v2; // rbx

  v2 = a1[1].Children[0];
  if ( v2 )
  {
    RmpAcquireGlobalLock();
    if ( v2[24].Children[0]-- == (struct _RTL_BALANCED_NODE *)1 )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)&v2[-3].Right);
    RmpReleaseGlobalLock();
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}

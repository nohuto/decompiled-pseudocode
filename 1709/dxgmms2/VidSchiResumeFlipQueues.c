/*
 * XREFs of VidSchiResumeFlipQueues @ 0x1C00B3930
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005B7DC (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009BDF4 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     VidSchResumeSchedulerForSource @ 0x1C00B51F0 (VidSchResumeSchedulerForSource.c)
 * Callees:
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x1C0028350 (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C002A5A0 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 */

void __fastcall VidSchiResumeFlipQueues(struct _VIDSCH_GLOBAL *a1, int a2)
{
  __int64 i; // rdi
  __int64 v5; // rdx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 10); i = (unsigned int)(i + 1) )
  {
    if ( _bittest(&a2, i) )
    {
      v5 = *((_QWORD *)a1 + i + 376);
      if ( v5 )
        VidSchiMarkFlipQueuesRunningStateOnPresentInfo((__int64)a1, v5, 1u);
    }
  }
  VidSchiUnwaitFlipQueueUnderSchedulerSpinLock((KSPIN_LOCK *)a1);
}

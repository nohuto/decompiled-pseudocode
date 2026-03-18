/*
 * XREFs of ?ResumeFlipQueuesIfSuspendedForMove@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A3834
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00586F0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00A3448 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     VidSchiResumeFlipQueues @ 0x1C00AB01C (VidSchiResumeFlipQueues.c)
 */

void __fastcall VIDMM_SEGMENT::ResumeFlipQueuesIfSuspendedForMove(VIDMM_SEGMENT *this)
{
  __int64 v1; // rax

  if ( *((_BYTE *)this + 497) )
  {
    v1 = *((_QWORD *)this + 1);
    *((_BYTE *)this + 497) = 0;
    VidSchiResumeFlipQueues(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 416LL));
  }
}

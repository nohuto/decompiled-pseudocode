/*
 * XREFs of ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C004D794
 * Callers:
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C004D5A4 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006F830 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C0098680 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 * Callees:
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C00697A8 (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::SuspendPagingQueues(VIDMM_DEVICE *this)
{
  VIDMM_DEVICE *v2; // r15
  char *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx

  if ( !*((_BYTE *)this + 49) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 112, 0LL);
    *((_QWORD *)this + 15) = KeGetCurrentThread();
    v2 = (VIDMM_DEVICE *)*((_QWORD *)this + 12);
    while ( v2 != (VIDMM_DEVICE *)((char *)this + 96) )
    {
      v3 = (char *)v2 - 48;
      v2 = *(VIDMM_DEVICE **)v2;
      v4 = *((_QWORD *)v3 + 10);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v4 + 128, 0LL);
      *(_QWORD *)(v4 + 136) = KeGetCurrentThread();
      VIDMM_PAGING_QUEUE::SetStatus(v3, 2LL);
      v5 = *((_QWORD *)v3 + 10) + 128LL;
      *(_QWORD *)(v5 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v5, 0LL);
      KeLeaveCriticalRegion();
    }
    *((_BYTE *)this + 49) = 1;
    *((_QWORD *)this + 15) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 112, 0LL);
    KeLeaveCriticalRegion();
  }
}

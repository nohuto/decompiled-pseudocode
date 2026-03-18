/*
 * XREFs of ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C00216C0
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049C70 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
        DXG_DEFERRED_WORK_QUEUE *this,
        struct DXG_DEFERRED_QUEUE_WORK_ITEM *a2)
{
  DXG_DEFERRED_WORK_QUEUE **v4; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  *((_QWORD *)this + 1) = KeGetCurrentThread();
  v4 = (DXG_DEFERRED_WORK_QUEUE **)*((_QWORD *)this + 3);
  if ( *v4 != (DXG_DEFERRED_WORK_QUEUE *)((char *)this + 16) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)this + 16;
  *((_QWORD *)a2 + 1) = v4;
  *v4 = a2;
  *((_QWORD *)this + 3) = a2;
  if ( ++*((_DWORD *)this + 8) == 1 )
  {
    KeResetEvent((PRKEVENT)((char *)this + 40));
    ExQueueWorkItem((PWORK_QUEUE_ITEM)this + 2, DelayedWorkQueue);
  }
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}

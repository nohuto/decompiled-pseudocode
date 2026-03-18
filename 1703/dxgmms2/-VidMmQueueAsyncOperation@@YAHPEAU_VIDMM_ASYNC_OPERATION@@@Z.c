/*
 * XREFs of ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C00503B4
 * Callers:
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0050370 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C006E9F4 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C00923AC (-AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VidMmQueueAsyncOperation(struct _VIDMM_ASYNC_OPERATION *a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rax
  __int128 v3; // xmm1
  LIST_ENTRY v4; // xmm0
  __int128 v5; // xmm1

  if ( g_VidMmAsyncOpPendingCount > 64 )
    return 0LL;
  v2 = (struct _WORK_QUEUE_ITEM *)operator new[](0x40uLL, 0x33346956u, (POOL_TYPE)512);
  if ( !v2 )
    return 0LL;
  _InterlockedIncrement(&g_VidMmAsyncOpPendingCount);
  v3 = *((_OWORD *)a1 + 1);
  v2->List = *(LIST_ENTRY *)a1;
  v4 = (LIST_ENTRY)*((_OWORD *)a1 + 2);
  *(_OWORD *)&v2->WorkerRoutine = v3;
  v5 = *((_OWORD *)a1 + 3);
  v2[1].List = v4;
  *(_OWORD *)&v2[1].WorkerRoutine = v5;
  v2->List.Flink = 0LL;
  v2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VidMmProcessAsyncOperation;
  v2->Parameter = v2;
  ExQueueWorkItem(v2, DelayedWorkQueue);
  return 1LL;
}

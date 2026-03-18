/*
 * XREFs of ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00A12B0
 * Callers:
 *     ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z @ 0x1C00A17D4 (-ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C0098A5C (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0099174 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 */

void __fastcall VIDMM_WORKER_THREAD::FlushEvictQueue(VIDMM_WORKER_THREAD *this, struct VIDMM_PAGING_QUEUE *a2)
{
  struct VIDMM_PAGING_QUEUE **v4; // rax
  struct VIDMM_PAGING_QUEUE **v5; // rdi
  struct VIDMM_PAGING_QUEUE *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  _QWORD *v12; // rax
  bool v13; // [rsp+50h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v14; // [rsp+58h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 128, 0LL);
    *((_QWORD *)this + 17) = KeGetCurrentThread();
    if ( *((_DWORD *)a2 + 28) != 1 )
      break;
    v4 = (struct VIDMM_PAGING_QUEUE **)((char *)a2 + 32);
    v5 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 4);
    if ( v5[1] != (struct VIDMM_PAGING_QUEUE *)((char *)a2 + 32)
      || (v6 = *v5, *((struct VIDMM_PAGING_QUEUE ***)*v5 + 1) != v5) )
    {
      __fastfail(3u);
    }
    *v4 = v6;
    *((_QWORD *)v6 + 1) = v4;
    *v5 = 0LL;
    v5[1] = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 128, 0LL);
    KeLeaveCriticalRegion();
    v13 = 0;
    v7 = VIDMM_WORKER_THREAD::SubmitPacket(
           (VIDMM_GLOBAL **)this,
           a2,
           (struct VIDMM_PAGING_QUEUE_PACKET *)v5,
           0,
           &v13,
           &v14);
    v11 = v7;
    if ( v7 < 0 || v13 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10);
      v12[3] = 270LL;
      v12[4] = 23LL;
      v12[5] = v11;
      v12[6] = 0LL;
      v12[7] = 0LL;
      WdLogEvent5_WdCriticalError(v12);
    }
    VIDMM_PAGING_QUEUE::ReclaimPacket(a2, (struct VIDMM_PAGING_QUEUE_PACKET *)v5);
  }
  *((_QWORD *)this + 17) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 128, 0LL);
  KeLeaveCriticalRegion();
}

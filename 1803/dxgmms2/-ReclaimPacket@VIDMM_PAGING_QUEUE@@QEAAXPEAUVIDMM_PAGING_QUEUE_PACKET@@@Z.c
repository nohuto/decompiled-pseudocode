/*
 * XREFs of ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C009D998
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00A7C44 (-FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C0073358 (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::ReclaimPacket(VIDMM_PAGING_QUEUE *this, struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  VIDMM_PAGING_QUEUE **v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v2 = *((_QWORD *)this + 10);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2 + 128, 0LL);
  *(_QWORD *)(v2 + 136) = KeGetCurrentThread();
  v7 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 3);
  if ( *v7 != (VIDMM_PAGING_QUEUE *)((char *)this + 16) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)this + 16;
  *((_QWORD *)a2 + 1) = v7;
  *v7 = a2;
  *((_QWORD *)this + 3) = a2;
  if ( *((VIDMM_PAGING_QUEUE **)this + 4) == (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
  {
    v8 = *((int *)this + 28);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 1 )
      {
        v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v5, v6);
        v9[7] = 0LL;
        v9[3] = 270LL;
        v9[4] = 58LL;
        v9[5] = this;
        v9[6] = v8;
        WdLogEvent5_WdCriticalError(v9);
      }
      VIDMM_PAGING_QUEUE::SetStatus((__int64 *)this, 0);
    }
  }
  --*(_DWORD *)(*((_QWORD *)this + 17) + 64LL);
  --*(_DWORD *)(*((_QWORD *)this + 10) + 144LL);
  v10 = *((_QWORD *)this + 10) + 128LL;
  *(_QWORD *)(v10 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
}

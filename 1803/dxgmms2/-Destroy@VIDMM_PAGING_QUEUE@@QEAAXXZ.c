/*
 * XREFs of ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0073490
 * Callers:
 *     ??1VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1C00735C0 (--1VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ?RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0006B44 (-RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?AcquirePacketListLockExclusive@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00227B0 (-AcquirePacketListLockExclusive@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ReleasePacketListLockExclusive@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00227E8 (-ReleasePacketListLockExclusive@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C00732AC (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Destroy(VIDMM_PAGING_QUEUE *this)
{
  VIDMM_DEVICE *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rax
  VIDMM_PAGING_QUEUE *v7; // rax
  VIDMM_PAGING_QUEUE **v8; // rcx
  _QWORD *v9; // rax
  __int64 **v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // rcx

  if ( *((_QWORD *)this + 15) )
    VIDMM_PAGING_QUEUE::Flush(this);
  v2 = (VIDMM_DEVICE *)*((_QWORD *)this + 17);
  if ( v2 )
    VIDMM_DEVICE::RemovePagingQueueList(v2, (struct _LIST_ENTRY *)this + 3);
  VIDMM_WORKER_THREAD::AcquirePacketListLockExclusive(*((VIDMM_WORKER_THREAD **)this + 10));
  if ( *((VIDMM_PAGING_QUEUE **)this + 4) != (VIDMM_PAGING_QUEUE *)((char *)this + 32) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, v3, v5);
    v6[3] = 270LL;
    v6[4] = 50LL;
    v6[5] = this;
    v6[6] = 0LL;
    v6[7] = 0LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  if ( *((_DWORD *)this + 28) == 2 )
  {
    v7 = *(VIDMM_PAGING_QUEUE **)this;
    if ( *(VIDMM_PAGING_QUEUE **)(*(_QWORD *)this + 8LL) != this
      || (v8 = (VIDMM_PAGING_QUEUE **)*((_QWORD *)this + 1), *v8 != this) )
    {
      __fastfail(3u);
    }
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
  else if ( *(_QWORD *)this || *((_QWORD *)this + 1) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, v3, v5);
    v9[3] = 270LL;
    v9[4] = 49LL;
    v9[5] = this;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  VIDMM_WORKER_THREAD::ReleasePacketListLockExclusive(*((VIDMM_WORKER_THREAD **)this + 10));
  v10 = (__int64 **)((char *)this + 16);
  while ( 1 )
  {
    v11 = *v10;
    v12 = **v10;
    if ( (__int64 **)(*v10)[1] != v10 || *(__int64 **)(v12 + 8) != v11 )
      __fastfail(3u);
    *v10 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = v10;
    if ( v11 == (__int64 *)v10 )
      break;
    operator delete(v11);
  }
  operator delete(*((void **)this + 15));
  *((_QWORD *)this + 15) = 0LL;
}

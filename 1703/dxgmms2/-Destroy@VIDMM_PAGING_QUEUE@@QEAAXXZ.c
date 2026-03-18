/*
 * XREFs of ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C00698F0
 * Callers:
 *     ??1VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1C0069988 (--1VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 * Callees:
 *     ?RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00018E0 (-RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0069710 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Destroy(struct _LIST_ENTRY *this, __int64 a2, __int64 a3)
{
  VIDMM_DEVICE *Blink; // rcx
  struct _LIST_ENTRY *v5; // rbx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax

  if ( this[7].Blink )
  {
    VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)this);
    operator delete(this[7].Blink);
    this[7].Blink = 0LL;
  }
  Blink = (VIDMM_DEVICE *)this[8].Blink;
  if ( Blink )
    VIDMM_DEVICE::RemovePagingQueueList(Blink, this + 3);
  if ( this[2].Flink != &this[2] )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(Blink, a2, a3);
    v8[3] = 270LL;
    v8[4] = 50LL;
    v8[5] = this;
    v8[6] = 0LL;
    v8[7] = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  if ( this->Flink || this->Blink )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(Blink, a2, a3);
    v9[3] = 270LL;
    v9[4] = 49LL;
    v9[5] = this;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  v5 = this + 1;
  while ( 1 )
  {
    Flink = v5->Flink;
    v7 = v5->Flink->Flink;
    if ( v5->Flink->Blink != v5 || v7->Blink != Flink )
      __fastfail(3u);
    v5->Flink = v7;
    v7->Blink = v5;
    if ( Flink == v5 )
      break;
    operator delete(Flink);
  }
}

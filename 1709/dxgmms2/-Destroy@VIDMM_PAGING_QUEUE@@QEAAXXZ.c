/*
 * XREFs of ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C006D6D8
 * Callers:
 *     ??1VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1C006D770 (--1VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 * Callees:
 *     ?RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0001A34 (-RemovePagingQueueList@VIDMM_DEVICE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C006D50C (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Destroy(struct _LIST_ENTRY *this, __int64 a2, __int64 a3)
{
  VIDMM_DEVICE *Blink; // rcx
  char *v5; // rbx
  char *v6; // rcx
  __int64 v7; // rax
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
  v5 = (char *)&this[1];
  while ( 1 )
  {
    v6 = *(char **)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *(_QWORD *)v5 = v7;
    *(_QWORD *)(v7 + 8) = v5;
    if ( v6 == v5 )
      break;
    operator delete(v6);
  }
}

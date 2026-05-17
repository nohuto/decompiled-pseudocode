/*
 * XREFs of RtlProcessFlsData @ 0x180076430
 * Callers:
 *     LdrShutdownThread @ 0x18002E930 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x180076200 (LdrShutdownProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlProcessFlsData(_QWORD *a1, char *a2, unsigned __int64 *a3, __int64 a4)
{
  struct _PEB *v4; // rsi
  struct _TEB *v6; // rdi
  __int64 Heap; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  _LIST_ENTRY *v11; // rbx
  _LIST_ENTRY *Blink; // rcx
  unsigned int FlsHighIndex; // ebp
  unsigned int i; // edi
  _QWORD *v16; // r15
  __int64 v17; // r14
  void (*v18)(void); // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax

  v4 = NtCurrentPeb();
  if ( a1 )
  {
    FlsHighIndex = v4->FlsHighIndex;
    for ( i = 1; i <= FlsHighIndex; ++i )
    {
      v16 = &a1[i];
      if ( v16[2] )
      {
        v17 = 16LL * i;
        RtlAcquireSRWLockShared((volatile signed __int64 *)((char *)v4->FlsCallback + v17 + 8), a2, (__int64)a3, a4);
        v18 = *(void (**)(void))((char *)v4->FlsCallback + v17);
        if ( v18 && v16[2] )
        {
          v18();
          v16[2] = 0LL;
        }
        RtlReleaseSRWLockShared((volatile signed __int64 *)((char *)v4->FlsCallback + v17 + 8));
      }
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsLock, (unsigned __int64)a2, a3, a4);
    v19 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v20 = (_QWORD *)a1[1], (_QWORD *)*v20 != a1) )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    goto LABEL_5;
  }
  v6 = NtCurrentTeb();
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (NtdllBaseTag + 2883584) | 8u, 1040LL);
  v11 = (_LIST_ENTRY *)Heap;
  if ( Heap )
  {
    v6->FlsData = (void *)Heap;
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsLock, v8, v9, v10);
    Blink = v4->FlsListHead.Blink;
    if ( Blink->Flink != &v4->FlsListHead )
      __fastfail(3u);
    v11->Flink = &v4->FlsListHead;
    v11->Blink = Blink;
    Blink->Flink = v11;
    v4->FlsListHead.Blink = v11;
LABEL_5:
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    return 0LL;
  }
  return 3221225495LL;
}

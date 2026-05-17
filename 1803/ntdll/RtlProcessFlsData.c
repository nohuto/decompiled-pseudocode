/*
 * XREFs of RtlProcessFlsData @ 0x180048090
 * Callers:
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x180047E60 (LdrShutdownProcess.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlProcessFlsData(_QWORD *a1, char *a2, unsigned __int64 *a3, __int64 a4)
{
  struct _PEB *v4; // rsi
  struct _TEB *v6; // rdi
  __int64 Heap; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  struct _LIST_ENTRY *v11; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int FlsHighIndex; // ebp
  unsigned int i; // edi
  _QWORD *v16; // r15
  __int64 v17; // r14
  struct _FLS_CALLBACK_INFO *FlsCallback; // rdx
  void (*v19)(void); // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax

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
        FlsCallback = v4->FlsCallback;
        v19 = *(void (**)(void))((char *)FlsCallback + v17);
        if ( v19 && v16[2] )
        {
          v19();
          v16[2] = 0LL;
          FlsCallback = v4->FlsCallback;
        }
        RtlReleaseSRWLockShared((volatile signed __int64 *)((char *)FlsCallback + v17 + 8));
      }
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D260, (unsigned __int64)a2, a3, a4);
    v20 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v21 = (_QWORD *)a1[1], (_QWORD *)*v21 != a1) )
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    goto LABEL_5;
  }
  v6 = NtCurrentTeb();
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015C294 + 2883584) | 8u, 1040LL);
  v11 = (struct _LIST_ENTRY *)Heap;
  if ( Heap )
  {
    v6->FlsData = (void *)Heap;
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D260, v8, v9, v10);
    Blink = v4->FlsListHead.Blink;
    if ( Blink->Flink != &v4->FlsListHead )
      __fastfail(3u);
    v11->Flink = &v4->FlsListHead;
    v11->Blink = Blink;
    Blink->Flink = v11;
    v4->FlsListHead.Blink = v11;
LABEL_5:
    RtlReleaseSRWLockExclusive(&qword_18015D260);
    return 0LL;
  }
  return 3221225495LL;
}

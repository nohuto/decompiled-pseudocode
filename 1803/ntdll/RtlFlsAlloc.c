/*
 * XREFs of RtlFlsAlloc @ 0x180050130
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlFindClearBitsAndSet @ 0x180050D90 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall RtlFlsAlloc(__int64 a1, unsigned int *a2, unsigned __int64 *a3, __int64 a4)
{
  struct _TEB *v4; // r15
  struct _LIST_ENTRY *v7; // rdi
  struct _PEB *ProcessEnvironmentBlock; // rsi
  unsigned __int64 v9; // rbp
  int v10; // ebx
  unsigned int ClearBitsAndSet; // eax
  unsigned int v12; // r14d
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 Heap; // rax
  struct _LIST_ENTRY *Blink; // rcx

  v4 = NtCurrentTeb();
  if ( v4->FlsData )
  {
    v7 = 0LL;
    goto LABEL_3;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015C294 + 2883584) | 8u, 1040LL);
  v7 = (struct _LIST_ENTRY *)Heap;
  if ( Heap )
  {
    v4->FlsData = (void *)Heap;
LABEL_3:
    ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
    if ( ProcessEnvironmentBlock->FlsCallback )
    {
      v9 = 0LL;
    }
    else
    {
      v14 = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C294 + 2883584, 2048LL);
      v9 = (unsigned __int64)v14;
      if ( !v14 )
      {
        v10 = -1073741801;
        goto LABEL_29;
      }
      v15 = 128LL;
      do
      {
        *v14 = 0LL;
        v14[1] = 0LL;
        v14 += 2;
        --v15;
      }
      while ( v15 );
    }
    v10 = 0;
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D260, (unsigned __int64)a2, a3, a4);
    if ( v9 && !ProcessEnvironmentBlock->FlsCallback )
    {
      ProcessEnvironmentBlock->FlsCallback = (struct _FLS_CALLBACK_INFO *)v9;
      v9 = 0LL;
    }
    if ( v7 )
    {
      Blink = ProcessEnvironmentBlock->FlsListHead.Blink;
      if ( Blink->Flink != &ProcessEnvironmentBlock->FlsListHead )
        __fastfail(3u);
      v7->Flink = &ProcessEnvironmentBlock->FlsListHead;
      v7->Blink = Blink;
      Blink->Flink = v7;
      ProcessEnvironmentBlock->FlsListHead.Blink = v7;
      v7 = 0LL;
    }
    ClearBitsAndSet = RtlFindClearBitsAndSet(ProcessEnvironmentBlock->FlsBitmap, 1LL, 1LL);
    v12 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
    {
      v10 = -1073741801;
    }
    else
    {
      *((_QWORD *)ProcessEnvironmentBlock->FlsCallback + 2 * ClearBitsAndSet) = a1;
      *((_QWORD *)v4->FlsData + ClearBitsAndSet + 2) = 0LL;
      if ( ClearBitsAndSet > ProcessEnvironmentBlock->FlsHighIndex )
        ProcessEnvironmentBlock->FlsHighIndex = ClearBitsAndSet;
    }
    RtlReleaseSRWLockExclusive(&qword_18015D260);
    if ( v9 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
    if ( v10 >= 0 )
    {
      *a2 = v12;
      return (unsigned int)v10;
    }
LABEL_29:
    if ( v7 )
    {
      v4->FlsData = 0LL;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v7);
    }
    return (unsigned int)v10;
  }
  return 3221225495LL;
}

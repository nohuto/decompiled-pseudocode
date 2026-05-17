/*
 * XREFs of RtlFlsAlloc @ 0x180059530
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlFindClearBitsAndSet @ 0x180059710 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall RtlFlsAlloc(__int64 a1, unsigned int *a2)
{
  struct _TEB *v2; // r15
  struct _LIST_ENTRY *v5; // rdi
  struct _PEB *ProcessEnvironmentBlock; // rsi
  unsigned __int64 v7; // rbp
  int v8; // ebx
  unsigned int ClearBitsAndSet; // eax
  unsigned int v10; // r14d
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 Heap; // rax
  struct _LIST_ENTRY *Blink; // rcx

  v2 = NtCurrentTeb();
  if ( v2->FlsData )
  {
    v5 = 0LL;
    goto LABEL_3;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015B268 + 2883584) | 8u, 1040LL);
  v5 = (struct _LIST_ENTRY *)Heap;
  if ( Heap )
  {
    v2->FlsData = (void *)Heap;
LABEL_3:
    ProcessEnvironmentBlock = v2->ProcessEnvironmentBlock;
    if ( ProcessEnvironmentBlock->FlsCallback )
    {
      v7 = 0LL;
    }
    else
    {
      v12 = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015B268 + 2883584, 2048LL);
      v7 = (unsigned __int64)v12;
      if ( !v12 )
      {
        v8 = -1073741801;
        goto LABEL_29;
      }
      v13 = 128LL;
      do
      {
        *v12 = 0LL;
        v12[1] = 0LL;
        v12 += 2;
        --v13;
      }
      while ( v13 );
    }
    v8 = 0;
    RtlAcquireSRWLockExclusive(&qword_18015C200);
    if ( v7 && !ProcessEnvironmentBlock->FlsCallback )
    {
      ProcessEnvironmentBlock->FlsCallback = (struct _FLS_CALLBACK_INFO *)v7;
      v7 = 0LL;
    }
    if ( v5 )
    {
      Blink = ProcessEnvironmentBlock->FlsListHead.Blink;
      if ( Blink->Flink != &ProcessEnvironmentBlock->FlsListHead )
        __fastfail(3u);
      v5->Flink = &ProcessEnvironmentBlock->FlsListHead;
      v5->Blink = Blink;
      Blink->Flink = v5;
      ProcessEnvironmentBlock->FlsListHead.Blink = v5;
      v5 = 0LL;
    }
    ClearBitsAndSet = RtlFindClearBitsAndSet(ProcessEnvironmentBlock->FlsBitmap, 1LL);
    v10 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
    {
      v8 = -1073741801;
    }
    else
    {
      *((_QWORD *)ProcessEnvironmentBlock->FlsCallback + 2 * ClearBitsAndSet) = a1;
      *((_QWORD *)v2->FlsData + ClearBitsAndSet + 2) = 0LL;
      if ( ClearBitsAndSet > ProcessEnvironmentBlock->FlsHighIndex )
        ProcessEnvironmentBlock->FlsHighIndex = ClearBitsAndSet;
    }
    RtlReleaseSRWLockExclusive(&qword_18015C200);
    if ( v7 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    if ( v8 >= 0 )
    {
      *a2 = v10;
      return (unsigned int)v8;
    }
LABEL_29:
    if ( v5 )
    {
      v2->FlsData = 0LL;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v5);
    }
    return (unsigned int)v8;
  }
  return 3221225495LL;
}

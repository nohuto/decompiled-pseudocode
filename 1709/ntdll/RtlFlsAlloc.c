/*
 * XREFs of RtlFlsAlloc @ 0x18001CDA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x18001CF80 (RtlFindClearBitsAndSet.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlFlsAlloc(__int64 a1, unsigned int *a2)
{
  struct _TEB *v2; // r15
  _LIST_ENTRY *v5; // rdi
  _PEB *ProcessEnvironmentBlock; // rsi
  struct _FLS_CALLBACK_INFO *v7; // rbp
  int v8; // ebx
  unsigned int ClearBitsAndSet; // eax
  unsigned int v10; // r14d
  struct _FLS_CALLBACK_INFO *v12; // rax
  __int64 v13; // rcx
  __int64 Heap; // rax
  _LIST_ENTRY *Blink; // rcx

  v2 = NtCurrentTeb();
  if ( v2->FlsData )
  {
    v5 = 0LL;
    goto LABEL_3;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (NtdllBaseTag + 2883584) | 8u, 1040LL);
  v5 = (_LIST_ENTRY *)Heap;
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
      v12 = (struct _FLS_CALLBACK_INFO *)RtlAllocateHeap(
                                           NtCurrentPeb()->ProcessHeap,
                                           (unsigned int)(NtdllBaseTag + 2883584),
                                           2048LL);
      v7 = v12;
      if ( !v12 )
      {
        v8 = -1073741801;
        goto LABEL_29;
      }
      v13 = 128LL;
      do
      {
        *(_QWORD *)v12 = 0LL;
        *((_QWORD *)v12 + 1) = 0LL;
        v12 = (struct _FLS_CALLBACK_INFO *)((char *)v12 + 16);
        --v13;
      }
      while ( v13 );
    }
    v8 = 0;
    RtlAcquireSRWLockExclusive(&RtlpFlsLock);
    if ( v7 && !ProcessEnvironmentBlock->FlsCallback )
    {
      ProcessEnvironmentBlock->FlsCallback = v7;
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
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    if ( v7 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v7);
    if ( v8 >= 0 )
    {
      *a2 = v10;
      return (unsigned int)v8;
    }
LABEL_29:
    if ( v5 )
    {
      v2->FlsData = 0LL;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v5);
    }
    return (unsigned int)v8;
  }
  return 3221225495LL;
}

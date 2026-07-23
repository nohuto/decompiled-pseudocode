/*
 * XREFs of sub_1800714DC @ 0x1800714DC
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlWakeConditionVariable @ 0x180071600 (RtlWakeConditionVariable.c)
 *     ZwDuplicateObject @ 0x1800A5A80 (ZwDuplicateObject.c)
 */

void __fastcall sub_1800714DC(__int64 a1)
{
  _RTL_SRWLOCK *v1; // rsi
  _QWORD *Heap; // rbx
  _QWORD *v4; // rcx
  unsigned int v5; // ebx
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_RTL_SRWLOCK *)(a1 + 72);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  if ( (*(_DWORD *)(a1 + 436) & 0xFFE) == 0 )
    goto LABEL_2;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 786432) | 8, 0x18uLL);
  if ( !Heap )
    goto LABEL_2;
  if ( ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (HANDLE)0xFFFFFFFFFFFFFFFELL,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0,
         2u) < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, Heap);
LABEL_2:
    RtlReleaseSRWLockExclusive(v1);
    return;
  }
  Heap[2] = TargetHandle;
  v4 = *(_QWORD **)(a1 + 456);
  if ( *v4 != a1 + 448 )
    __fastfail(3u);
  Heap[1] = v4;
  *Heap = a1 + 448;
  *v4 = Heap;
  *(_QWORD *)(a1 + 456) = Heap;
  v5 = *(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) ^ ((*(_DWORD *)(a1 + 436) & 0xFFFFF000) + 4096)) & 0x7FF000;
  *(_DWORD *)(a1 + 436) = v5;
  RtlReleaseSRWLockExclusive(v1);
  if ( ((v5 ^ (v5 >> 11)) & 0xFFE) == 0 )
    RtlWakeConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 440));
}

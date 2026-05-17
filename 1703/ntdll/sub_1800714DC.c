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

__int64 __fastcall sub_1800714DC(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  __int64 result; // rax
  _QWORD *Heap; // rbx
  _QWORD *v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = (volatile signed __int64 *)(a1 + 72);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  if ( (*(_DWORD *)(a1 + 436) & 0xFFE) == 0 )
    return RtlReleaseSRWLockExclusive(v1);
  Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 786432) | 8u, 24LL);
  if ( !Heap )
    return RtlReleaseSRWLockExclusive(v1);
  if ( (int)ZwDuplicateObject(-1LL, -2LL, -1LL, &v7, 0, 0, 2) < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, (unsigned __int64)Heap);
    return RtlReleaseSRWLockExclusive(v1);
  }
  Heap[2] = v7;
  v5 = *(_QWORD **)(a1 + 456);
  if ( *v5 != a1 + 448 )
    __fastfail(3u);
  Heap[1] = v5;
  *Heap = a1 + 448;
  *v5 = Heap;
  *(_QWORD *)(a1 + 456) = Heap;
  v6 = *(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) ^ ((*(_DWORD *)(a1 + 436) & 0xFFFFF000) + 4096)) & 0x7FF000;
  *(_DWORD *)(a1 + 436) = v6;
  RtlReleaseSRWLockExclusive(v1);
  result = v6 ^ (v6 >> 11);
  if ( (((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 11)) & 0xFFE) == 0 )
    return RtlWakeConditionVariable(a1 + 440);
  return result;
}

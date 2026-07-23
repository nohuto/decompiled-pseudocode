/*
 * XREFs of LdrpCreateSoftwareEnclave @ 0x1800D0568
 * Callers:
 *     LdrCreateEnclave @ 0x1800CFF70 (LdrCreateEnclave.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180009D10 (RtlInitializeCriticalSectionEx.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall LdrpCreateSoftwareEnclave(__int64 a1, __int64 a2)
{
  _QWORD *Heap; // rax
  __int64 v5; // rbx
  _RTL_CRITICAL_SECTION *v7; // rcx
  _QWORD *v8; // rax
  __int64 *v9; // rax

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x80uLL);
  v5 = (__int64)Heap;
  if ( !Heap )
    return 3221225626LL;
  Heap[10] = 0LL;
  v7 = (_RTL_CRITICAL_SECTION *)(Heap + 2);
  Heap[13] = 0LL;
  Heap[8] = a1;
  Heap[9] = a2;
  v8 = Heap + 11;
  v8[1] = v8;
  *v8 = v8;
  RtlInitializeCriticalSectionEx(v7, 0, 0);
  *(_DWORD *)(v5 + 60) = 0;
  *(_QWORD *)(v5 + 112) = 0LL;
  *(_QWORD *)(v5 + 120) = 0LL;
  *(_DWORD *)(v5 + 56) = 1;
  RtlEnterCriticalSection(&LdrpEnclaveListLock);
  v9 = (__int64 *)qword_18015FAB8;
  if ( *(__int64 **)qword_18015FAB8 != &LdrpEnclaveList )
    __fastfail(3u);
  *(_QWORD *)v5 = &LdrpEnclaveList;
  *(_QWORD *)(v5 + 8) = v9;
  *v9 = v5;
  qword_18015FAB8 = v5;
  RtlLeaveCriticalSection(&LdrpEnclaveListLock);
  return 0LL;
}

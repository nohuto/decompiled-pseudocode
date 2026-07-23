/*
 * XREFs of sub_180072114 @ 0x180072114
 * Callers:
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

__int64 sub_180072114()
{
  struct _TEB *v0; // rbx
  PVOID ProcessHeap; // rbp
  PVOID *p_ThreadLocalStoragePointer; // rdi
  PVOID *ThreadLocalStoragePointer; // rbx
  PVOID *v4; // rdi
  __int64 v5; // rsi

  v0 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&stru_18015D118);
  p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
  ThreadLocalStoragePointer = (PVOID *)v0->ThreadLocalStoragePointer;
  if ( ThreadLocalStoragePointer )
  {
    _InterlockedDecrement(&dword_18015C1C0);
    *p_ThreadLocalStoragePointer = 0LL;
  }
  RtlReleaseSRWLockShared(&stru_18015D118);
  if ( ThreadLocalStoragePointer && ThreadLocalStoragePointer != p_ThreadLocalStoragePointer )
  {
    v4 = ThreadLocalStoragePointer - 2;
    if ( *((_DWORD *)ThreadLocalStoragePointer - 4) )
    {
      v5 = *(unsigned int *)v4;
      do
      {
        if ( *ThreadLocalStoragePointer )
          RtlFreeHeap(ProcessHeap, 0, *((PVOID *)*ThreadLocalStoragePointer - 1));
        ++ThreadLocalStoragePointer;
        --v5;
      }
      while ( v5 );
    }
    RtlFreeHeap(ProcessHeap, 0, v4);
  }
  return sub_1800721C8();
}

/*
 * XREFs of sub_180079B6C @ 0x180079B6C
 * Callers:
 *     LdrShutdownThread @ 0x1800411F0 (LdrShutdownThread.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 */

__int64 sub_180079B6C()
{
  struct _TEB *v0; // rbx
  PVOID ProcessHeap; // rbp
  PVOID *p_ThreadLocalStoragePointer; // rdi
  PVOID *ThreadLocalStoragePointer; // rbx
  PVOID *v4; // rdi
  __int64 v5; // rsi

  v0 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&stru_18015C0D8);
  p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
  ThreadLocalStoragePointer = (PVOID *)v0->ThreadLocalStoragePointer;
  if ( ThreadLocalStoragePointer )
  {
    _InterlockedDecrement(&dword_18015B1A0);
    *p_ThreadLocalStoragePointer = 0LL;
  }
  RtlReleaseSRWLockShared(&stru_18015C0D8);
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
  return sub_180079C20();
}

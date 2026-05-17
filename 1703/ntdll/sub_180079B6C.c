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
  void *ProcessHeap; // rbp
  void **p_ThreadLocalStoragePointer; // rdi
  void **ThreadLocalStoragePointer; // rbx
  void **v4; // rdi
  __int64 v5; // rsi

  v0 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&qword_18015C0D8);
  p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
  ThreadLocalStoragePointer = (void **)v0->ThreadLocalStoragePointer;
  if ( ThreadLocalStoragePointer )
  {
    _InterlockedDecrement(&dword_18015B1A0);
    *p_ThreadLocalStoragePointer = 0LL;
  }
  RtlReleaseSRWLockShared(&qword_18015C0D8);
  if ( ThreadLocalStoragePointer && ThreadLocalStoragePointer != p_ThreadLocalStoragePointer )
  {
    v4 = ThreadLocalStoragePointer - 2;
    if ( *((_DWORD *)ThreadLocalStoragePointer - 4) )
    {
      v5 = *(unsigned int *)v4;
      do
      {
        if ( *ThreadLocalStoragePointer )
          RtlFreeHeap((__int64)ProcessHeap, 0, *((_QWORD *)*ThreadLocalStoragePointer - 1));
        ++ThreadLocalStoragePointer;
        --v5;
      }
      while ( v5 );
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v4);
  }
  return sub_180079C20();
}

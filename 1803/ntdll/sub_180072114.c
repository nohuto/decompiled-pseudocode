/*
 * XREFs of sub_180072114 @ 0x180072114
 * Callers:
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_180072114(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rbx
  void *ProcessHeap; // rbp
  void **p_ThreadLocalStoragePointer; // rdi
  void **ThreadLocalStoragePointer; // rbx
  void **v8; // rdi
  __int64 v9; // rsi

  v4 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&qword_18015D118, a2, a3, a4);
  p_ThreadLocalStoragePointer = &v4->ThreadLocalStoragePointer;
  ThreadLocalStoragePointer = (void **)v4->ThreadLocalStoragePointer;
  if ( ThreadLocalStoragePointer )
  {
    _InterlockedDecrement(&dword_18015C1C0);
    *p_ThreadLocalStoragePointer = 0LL;
  }
  RtlReleaseSRWLockShared(&qword_18015D118);
  if ( ThreadLocalStoragePointer && ThreadLocalStoragePointer != p_ThreadLocalStoragePointer )
  {
    v8 = ThreadLocalStoragePointer - 2;
    if ( *((_DWORD *)ThreadLocalStoragePointer - 4) )
    {
      v9 = *(unsigned int *)v8;
      do
      {
        if ( *ThreadLocalStoragePointer )
          RtlFreeHeap((__int64)ProcessHeap, 0, *((_QWORD *)*ThreadLocalStoragePointer - 1));
        ++ThreadLocalStoragePointer;
        --v9;
      }
      while ( v9 );
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v8);
  }
  return sub_1800721C8();
}

/*
 * XREFs of RtlTryEnterCriticalSection @ 0x1800142C0
 * Callers:
 *     RtlpFlushHeap @ 0x180013DA4 (RtlpFlushHeap.c)
 *     RtlTryAcquirePebLock @ 0x1800142A0 (RtlTryAcquirePebLock.c)
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800D0F04 (LdrpTryAcquireLoaderLock.c)
 *     RtlLockHeapManagerForCloning @ 0x1800EF138 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

LOGICAL __cdecl RtlTryEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  void *UniqueThread; // rax
  LOGICAL result; // eax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset(&CriticalSection->LockCount, 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    CriticalSection->OwningThread = UniqueThread;
    result = 1;
    CriticalSection->RecursionCount = 1;
  }
  else if ( CriticalSection->OwningThread == UniqueThread )
  {
    ++CriticalSection->RecursionCount;
    return 1;
  }
  else
  {
    return 0;
  }
  return result;
}

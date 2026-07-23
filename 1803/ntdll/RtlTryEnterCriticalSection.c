/*
 * XREFs of RtlTryEnterCriticalSection @ 0x180060E90
 * Callers:
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_180060E04 @ 0x180060E04 (sub_180060E04.c)
 *     RtlTryAcquirePebLock @ 0x180060E70 (RtlTryAcquirePebLock.c)
 *     sub_1800CA644 @ 0x1800CA644 (sub_1800CA644.c)
 *     sub_1800EB360 @ 0x1800EB360 (sub_1800EB360.c)
 * Callees:
 *     <none>
 */

LOGICAL __cdecl RtlTryEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  HANDLE UniqueThread; // rax
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

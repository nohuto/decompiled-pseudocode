/*
 * XREFs of RtlTryEnterCriticalSection @ 0x18001EEC0
 * Callers:
 *     sub_180006330 @ 0x180006330 (sub_180006330.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     RtlTryAcquirePebLock @ 0x180083080 (RtlTryAcquirePebLock.c)
 *     sub_1800D5364 @ 0x1800D5364 (sub_1800D5364.c)
 *     sub_1800EF328 @ 0x1800EF328 (sub_1800EF328.c)
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

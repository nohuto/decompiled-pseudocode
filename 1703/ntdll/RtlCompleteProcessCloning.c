/*
 * XREFs of RtlCompleteProcessCloning @ 0x1800D89C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18000C9B0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x180051860 (RtlWakeAllConditionVariable.c)
 *     sub_1800D7B28 @ 0x1800D7B28 (sub_1800D7B28.c)
 *     sub_1800D7BCC @ 0x1800D7BCC (sub_1800D7BCC.c)
 *     sub_1800D7D28 @ 0x1800D7D28 (sub_1800D7D28.c)
 *     sub_1800D8F18 @ 0x1800D8F18 (sub_1800D8F18.c)
 *     sub_1800EFBEC @ 0x1800EFBEC (sub_1800EFBEC.c)
 */

void __fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  int v2; // edi
  HANDLE UniqueThread; // rdx

  if ( a1 )
  {
    stru_18015C1F8.Ptr = (PVOID)1;
    v2 = 1;
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    stru_18015AE60.LockSemaphore = 0LL;
    stru_18015AE60.OwningThread = UniqueThread;
    stru_18015AE60.LockCount = -2;
    stru_18015AE60.RecursionCount = 1;
    stru_18015C200.Ptr = (PVOID)1;
  }
  else
  {
    byte_18015AE99 = 0;
    v2 = 2;
    RtlReleaseSRWLockExclusive(&stru_18015C1E8);
  }
  RtlReleaseSRWLockExclusive(&stru_18015C1F8);
  sub_1800D7D28(v2);
  if ( v2 == 1 )
    stru_18015C290.Ptr = (PVOID)1;
  else
    RtlReleaseSRWLockExclusive(&stru_18015C290);
  sub_1800EFBEC(a1);
  sub_1800D7BCC(a1);
  RtlLeaveCriticalSection(&stru_18015AE60);
  sub_1800D8F18(a1);
  RtlReleaseSRWLockExclusive(&stru_18015C200);
  sub_1800D7B28(a1);
  if ( a1 )
  {
    byte_18015AE99 = 0;
    RtlAcquireReleaseSRWLockExclusive(&stru_18015C1E8);
    RtlWakeAllConditionVariable(&ConditionVariable);
  }
}

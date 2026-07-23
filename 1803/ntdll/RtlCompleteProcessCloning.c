/*
 * XREFs of RtlCompleteProcessCloning @ 0x1800D1950
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlWakeAllConditionVariable @ 0x1800735E0 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007EBA0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 *     sub_1800D09C4 @ 0x1800D09C4 (sub_1800D09C4.c)
 *     sub_1800D0C68 @ 0x1800D0C68 (sub_1800D0C68.c)
 *     sub_1800D1EA8 @ 0x1800D1EA8 (sub_1800D1EA8.c)
 *     sub_1800EBBBC @ 0x1800EBBBC (sub_1800EBBBC.c)
 */

void __fastcall RtlCompleteProcessCloning(unsigned int a1)
{
  int v2; // edi
  HANDLE UniqueThread; // rdx

  if ( a1 )
  {
    stru_18015D258.Ptr = (PVOID)1;
    v2 = 1;
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    stru_18015BE80.LockSemaphore = 0LL;
    stru_18015BE80.OwningThread = UniqueThread;
    stru_18015BE80.LockCount = -2;
    stru_18015BE80.RecursionCount = 1;
    stru_18015D260.Ptr = (PVOID)1;
  }
  else
  {
    byte_18015BEB9 = 0;
    v2 = 2;
    RtlReleaseSRWLockExclusive(&stru_18015D248);
  }
  RtlReleaseSRWLockExclusive(&stru_18015D258);
  sub_1800D0C68(v2);
  if ( v2 == 1 )
    stru_18015D2D0.Ptr = (PVOID)1;
  else
    RtlReleaseSRWLockExclusive(&stru_18015D2D0);
  sub_1800EBBBC(a1);
  sub_1800D09C4(a1);
  RtlLeaveCriticalSection(&stru_18015BE80);
  sub_1800D1EA8(a1);
  RtlReleaseSRWLockExclusive(&stru_18015D260);
  sub_1800D0858(a1);
  if ( a1 )
  {
    byte_18015BEB9 = 0;
    RtlAcquireReleaseSRWLockExclusive(&stru_18015D248);
    RtlWakeAllConditionVariable(&ConditionVariable);
  }
}

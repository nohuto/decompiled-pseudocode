/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x14056FFE4
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteSubscription @ 0x1404FFB7C (ExpWnfDeleteSubscription.c)
 *     ExpCaptureWnfStateName @ 0x14050036C (ExpCaptureWnfStateName.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140570094 (ExpWnfAcquireSubscriptionByName.c)
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  NTSTATUS v5; // [rsp+24h] [rbp-14h]
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExpCaptureWnfStateName((__int64 *)StateName, &v6, KeGetCurrentThread()->PreviousMode);
  if ( v5 >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    Next = Process[2].SwapListEntry.Next;
    if ( Next )
    {
      v5 = ExpWnfAcquireSubscriptionByName(v6, Next, &P);
      if ( v5 >= 0 )
      {
        ExpWnfDeleteSubscription((struct _EX_RUNDOWN_REF *)P, Process);
        v5 = 0;
      }
    }
    else
    {
      v5 = -1073741772;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}

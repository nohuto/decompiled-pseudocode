/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x14055C780
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExpCaptureWnfStateName @ 0x1404F68C4 (ExpCaptureWnfStateName.c)
 *     ExpWnfDeleteSubscription @ 0x1405115F8 (ExpWnfDeleteSubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14055C830 (ExpWnfAcquireSubscriptionByName.c)
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  NTSTATUS v7; // [rsp+24h] [rbp-14h]
  unsigned __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExpCaptureWnfStateName((__int64 *)StateName, &v8, KeGetCurrentThread()->PreviousMode);
  if ( v7 >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    Next = Process[2].SwapListEntry.Next;
    if ( Next )
    {
      v7 = ExpWnfAcquireSubscriptionByName(v8, Next, &P);
      if ( v7 >= 0 )
      {
        ExpWnfDeleteSubscription((struct _EX_RUNDOWN_REF *)P, Process, v4, v5);
        v7 = 0;
      }
    }
    else
    {
      v7 = -1073741772;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v7;
}

/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x140437FC8
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140438078 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteSubscription @ 0x1404383E8 (ExpWnfDeleteSubscription.c)
 *     ExpCaptureWnfStateName @ 0x1404EF5B8 (ExpCaptureWnfStateName.c)
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  NTSTATUS v4; // [rsp+24h] [rbp-14h]
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = ExpCaptureWnfStateName(StateName, &v5, KeGetCurrentThread()->PreviousMode);
  if ( v4 >= 0 )
  {
    Next = KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next;
    if ( Next )
    {
      v4 = ExpWnfAcquireSubscriptionByName(v5, Next, &P);
      if ( v4 >= 0 )
      {
        ExpWnfDeleteSubscription(P);
        v4 = 0;
      }
    }
    else
    {
      v4 = -1073741772;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}

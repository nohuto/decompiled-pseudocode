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

__int64 __fastcall NtUnsubscribeWnfStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  int v6; // [rsp+24h] [rbp-14h]
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
  v6 = ExpCaptureWnfStateName(a1, &v7, a3);
  if ( v6 >= 0 )
  {
    Next = KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next;
    if ( Next )
    {
      v6 = ExpWnfAcquireSubscriptionByName(v7, Next, &P);
      if ( v6 >= 0 )
      {
        ExpWnfDeleteSubscription(P);
        v6 = 0;
      }
    }
    else
    {
      v6 = -1073741772;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v6;
}

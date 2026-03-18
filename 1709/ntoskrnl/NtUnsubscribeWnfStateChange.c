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

__int64 __fastcall NtUnsubscribeWnfStateChange(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  int v5; // [rsp+24h] [rbp-14h]
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExpCaptureWnfStateName(a1, &v6, KeGetCurrentThread()->PreviousMode);
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
  return (unsigned int)v5;
}

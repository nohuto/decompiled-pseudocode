/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x1405003E4
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140500538 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1405013D8 (ExpWnfDeliverThreadNotifications.c)
 */

NTSTATUS __cdecl NtGetCompleteWnfStateSubscription(
        PWNF_STATE_NAME OldDescriptorStateName,
        ULONG64 *OldSubscriptionId,
        ULONG OldDescriptorEventMask,
        ULONG OldDescriptorStatus,
        PWNF_DELIVERY_DESCRIPTOR NewDeliveryDescriptor,
        ULONG DescriptorSize)
{
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // ebx
  struct _SINGLE_LIST_ENTRY *Next; // rsi
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF

  v7 = (__int64)OldDescriptorStateName;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = -1073741811;
  Next = KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next;
  if ( Next )
  {
    if ( !OldDescriptorStateName || !OldSubscriptionId )
      goto LABEL_11;
    if ( OldDescriptorEventMask && (!OldDescriptorStatus || OldDescriptorStatus == -1073741267) )
    {
      if ( (unsigned __int64)OldDescriptorStateName >= 0x7FFFFFFF0000LL )
        v7 = 0x7FFFFFFF0000LL;
      v12 = *(_QWORD *)v7;
      if ( (unsigned __int64)OldSubscriptionId >= 0x7FFFFFFF0000LL )
        OldSubscriptionId = (ULONG64 *)0x7FFFFFFF0000LL;
      v9 = ExpWnfCompleteThreadSubscriptions(
             (_DWORD)Next,
             (unsigned int)&v12,
             *OldSubscriptionId,
             OldDescriptorEventMask,
             OldDescriptorStatus);
      if ( v9 >= 0 )
      {
LABEL_11:
        if ( DescriptorSize )
        {
          if ( DescriptorSize < 0x1030 )
          {
            v9 = -1073741789;
          }
          else
          {
            ProbeForWrite(NewDeliveryDescriptor, DescriptorSize, 8u);
            v9 = ExpWnfDeliverThreadNotifications(Next, NewDeliveryDescriptor, DescriptorSize);
          }
        }
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}

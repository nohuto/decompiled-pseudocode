/*
 * XREFs of sub_180012AB0 @ 0x180012AB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013664 @ 0x180013664 (sub_180013664.c)
 *     TpSetWaitEx @ 0x180017300 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwGetCompleteWnfStateSubscription @ 0x1800A6FF0 (ZwGetCompleteWnfStateSubscription.c)
 *     sub_1800DF250 @ 0x1800DF250 (sub_1800DF250.c)
 */

void __fastcall sub_180012AB0(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WAIT a3)
{
  _WNF_STATE_NAME *p_StateName; // rsi
  ULONG EventMask; // ebp
  ULONG v5; // edi
  _WNF_DELIVERY_DESCRIPTOR *NewDeliveryDescriptor; // rbx
  NTSTATUS CompleteWnfStateSubscription; // eax
  ULONG64 OldSubscriptionId; // [rsp+30h] [rbp-28h] BYREF
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-20h] BYREF

  p_StateName = 0LL;
  Timeout.QuadPart = -50000000LL;
  OldSubscriptionId = 0LL;
  EventMask = 0;
  v5 = 0;
  NewDeliveryDescriptor = 0LL;
  if ( !qword_18015C008 )
    return;
  TpSetWaitEx(a3, a2, 0LL, 0LL);
  while ( 1 )
  {
    if ( !NewDeliveryDescriptor )
    {
      NewDeliveryDescriptor = (_WNF_DELIVERY_DESCRIPTOR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1030uLL);
      if ( !NewDeliveryDescriptor )
        break;
    }
    CompleteWnfStateSubscription = ZwGetCompleteWnfStateSubscription(
                                     p_StateName,
                                     &OldSubscriptionId,
                                     EventMask,
                                     v5,
                                     NewDeliveryDescriptor,
                                     0x1030u);
    if ( CompleteWnfStateSubscription < 0 )
      goto LABEL_10;
    v5 = sub_180013664(NewDeliveryDescriptor);
    if ( v5 == 259 )
    {
      p_StateName = 0LL;
      EventMask = 0;
      OldSubscriptionId = 0LL;
      v5 = 0;
LABEL_16:
      NewDeliveryDescriptor = 0LL;
    }
    else
    {
      p_StateName = &NewDeliveryDescriptor->StateName;
      OldSubscriptionId = NewDeliveryDescriptor->SubscriptionId;
      EventMask = NewDeliveryDescriptor->EventMask;
      if ( v5 == -1073741267 )
      {
        sub_1800DF250();
        goto LABEL_16;
      }
    }
  }
  CompleteWnfStateSubscription = -1073741801;
LABEL_10:
  if ( CompleteWnfStateSubscription != -2147483622 )
    TpSetWaitEx(a3, a2, &Timeout, 0LL);
  if ( NewDeliveryDescriptor )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, NewDeliveryDescriptor);
}

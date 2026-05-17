/*
 * XREFs of sub_1800F75C0 @ 0x1800F75C0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800F7360 (RtlRaiseCustomSystemEventTrigger.c)
 *     sub_1800F7614 @ 0x1800F7614 (sub_1800F7614.c)
 *     sub_1800F7730 @ 0x1800F7730 (sub_1800F7730.c)
 * Callees:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180049DC0 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     TpReleaseWork @ 0x1800589B0 (TpReleaseWork.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall sub_1800F75C0(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = a1[1];
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  if ( a1[2] )
  {
    ZwClose();
    a1[2] = 0LL;
  }
  if ( *a1 )
    TpReleaseWork(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
}

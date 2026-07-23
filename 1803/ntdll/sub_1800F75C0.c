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

LOGICAL __fastcall sub_1800F75C0(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
  {
    ZwClose(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( *(_QWORD *)a1 )
    TpReleaseWork(*(PTP_WORK *)a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}

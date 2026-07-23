/*
 * XREFs of sub_180055078 @ 0x180055078
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x1800550D0 (RtlDeleteTimerQueueEx.c)
 *     sub_18005907C @ 0x18005907C (sub_18005907C.c)
 * Callees:
 *     ZwSetEvent @ 0x18009AC80 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18009B890 (ZwAlertThreadByThreadId.c)
 */

LOGICAL __fastcall sub_180055078(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)a1[5];
  if ( v2 )
  {
    ZwAlertThreadByThreadId(v2);
  }
  else
  {
    v3 = (void *)a1[2];
    if ( v3 )
      ZwSetEvent(v3, 0LL);
  }
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}

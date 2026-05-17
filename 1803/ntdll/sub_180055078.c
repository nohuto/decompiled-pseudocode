/*
 * XREFs of sub_180055078 @ 0x180055078
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x1800550D0 (RtlDeleteTimerQueueEx.c)
 *     sub_18005907C @ 0x18005907C (sub_18005907C.c)
 * Callees:
 *     ZwSetEvent @ 0x18009AC80 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x18009B890 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall sub_180055078(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    ZwAlertThreadByThreadId(v2);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      ZwSetEvent(v3, 0LL);
  }
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}

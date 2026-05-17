/*
 * XREFs of sub_18005907C @ 0x18005907C
 * Callers:
 *     RtlDeleteTimerQueueEx @ 0x1800550D0 (RtlDeleteTimerQueueEx.c)
 *     sub_1800569D0 @ 0x1800569D0 (sub_1800569D0.c)
 *     RtlDeleteTimer @ 0x180057EA0 (RtlDeleteTimer.c)
 * Callees:
 *     sub_180055078 @ 0x180055078 (sub_180055078.c)
 *     ZwSetEvent @ 0x18009AC80 (ZwSetEvent.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall sub_18005907C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = a1[9];
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  v3 = a1[2];
  if ( v3 )
    ZwClose(v3);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1[7], 0xFFFFFFFF) == 1 )
    sub_180055078(a1[7]);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
}

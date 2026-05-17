/*
 * XREFs of sub_180086CA4 @ 0x180086CA4
 * Callers:
 *     sub_18001052C @ 0x18001052C (sub_18001052C.c)
 *     RtlDeleteTimerQueueEx @ 0x180086B40 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A54C0 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x1800A60D0 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall sub_180086CA4(unsigned __int64 a1)
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

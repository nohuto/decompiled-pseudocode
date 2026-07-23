/*
 * XREFs of sub_180086CA4 @ 0x180086CA4
 * Callers:
 *     sub_18001052C @ 0x18001052C (sub_18001052C.c)
 *     RtlDeleteTimerQueueEx @ 0x180086B40 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A54C0 (ZwSetEvent.c)
 *     ZwAlertThreadByThreadId @ 0x1800A60D0 (ZwAlertThreadByThreadId.c)
 */

LOGICAL __fastcall sub_180086CA4(_QWORD *a1)
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

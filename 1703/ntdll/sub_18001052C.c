/*
 * XREFs of sub_18001052C @ 0x18001052C
 * Callers:
 *     RtlDeleteTimer @ 0x180010F80 (RtlDeleteTimer.c)
 *     sub_1800846E0 @ 0x1800846E0 (sub_1800846E0.c)
 *     RtlDeleteTimerQueueEx @ 0x180086B40 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     sub_180086CA4 @ 0x180086CA4 (sub_180086CA4.c)
 *     ZwSetEvent @ 0x1800A54C0 (ZwSetEvent.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

LOGICAL __fastcall sub_18001052C(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 72);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  v3 = *(void **)(a1 + 16);
  if ( v3 )
    ZwClose(v3);
  if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(a1 + 56), 0xFFFFFFFF) == 1 )
    sub_180086CA4(*(_QWORD *)(a1 + 56));
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}

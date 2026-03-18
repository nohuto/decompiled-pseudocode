/*
 * XREFs of PopQueueDirectedDripsWork @ 0x140278830
 * Callers:
 *     PopDirectedDripsTimerCallbackRoutine @ 0x140278810 (PopDirectedDripsTimerCallbackRoutine.c)
 *     PopDirectedDripsNotify @ 0x140761720 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsPdcLpeNotification @ 0x140761B50 (PopDirectedDripsPdcLpeNotification.c)
 *     PopDirectedDripsPdcResiliencyNotification @ 0x140761BB8 (PopDirectedDripsPdcResiliencyNotification.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw((const void *)(a1 + 8));
  v2 = _InterlockedOr64((volatile signed __int64 *)(a1 + 8), a2);
  if ( !v2 && a2 )
    LODWORD(v2) = KeSetEvent((PRKEVENT)(a1 + 16), 0, 0);
  return v2;
}

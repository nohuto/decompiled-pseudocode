/*
 * XREFs of RaidAdapterRequestTimer @ 0x1C001B47C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001AA0 (RaidAdapterDeferredRoutine.c)
 *     StorPortNotification @ 0x1C0006310 (StorPortNotification.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidAdapterRequestTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( !a3 )
    return KeCancelTimer((PKTIMER)(a1 + 1664));
  *(_QWORD *)(a1 + 1920) = a2;
  return KeSetCoalescableTimer((PKTIMER)(a1 + 1664), (LARGE_INTEGER)(-10LL * a3), 0, 0, (PKDPC)(a1 + 1600));
}

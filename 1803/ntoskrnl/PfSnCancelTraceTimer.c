/*
 * XREFs of PfSnCancelTraceTimer @ 0x14007A4F8
 * Callers:
 *     PfSnDeactivateTrace @ 0x14007A440 (PfSnDeactivateTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 */

__int64 __fastcall PfSnCancelTraceTimer(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // al
  unsigned __int64 v4; // rdi
  bool v5; // bl

  v1 = (KSPIN_LOCK *)(a1 + 272);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 272));
  *(_DWORD *)(a1 + 280) |= 2u;
  v4 = v3;
  v5 = KeCancelTimer((PKTIMER)(a1 + 136)) != 0;
  KxReleaseSpinLock(v1);
  __writecr8(v4);
  if ( v5 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
  return 0LL;
}

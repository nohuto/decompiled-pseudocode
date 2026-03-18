/*
 * XREFs of PfSnCancelTraceTimer @ 0x14012D1A0
 * Callers:
 *     PfSnDeactivateTrace @ 0x14012D0E8 (PfSnDeactivateTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
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

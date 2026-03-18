/*
 * XREFs of PfSnCancelTraceTimer @ 0x14001093C
 * Callers:
 *     PfSnDeactivateTrace @ 0x140010884 (PfSnDeactivateTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
  return 0LL;
}

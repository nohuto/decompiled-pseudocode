/*
 * XREFs of PoFxSetDeviceIdleTimeout @ 0x140182EA0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140182F14 (PopFxUpdateDeviceIdleTimer.c)
 */

void __fastcall PoFxSetDeviceIdleTimeout(__int64 a1, unsigned __int64 a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // al
  __int64 v6; // r8
  unsigned __int64 v7; // rdi

  v2 = (KSPIN_LOCK *)(a1 + 336);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 336));
  v6 = 0x3FFFFFFFFFFFFFFFLL;
  v7 = v5;
  if ( a2 <= 0x3FFFFFFFFFFFFFFFLL )
    v6 = a2;
  *(_QWORD *)(a1 + 472) = v6;
  PopFxUpdateDeviceIdleTimer(a1);
  KxReleaseSpinLock(v2);
  __writecr8(v7);
}

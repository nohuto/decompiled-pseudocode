/*
 * XREFs of VerifierPortKeReleaseSpinLockNoXdv @ 0x140778000
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ViKeReleaseSpinLockCommon @ 0x140778690 (ViKeReleaseSpinLockCommon.c)
 */

__int64 __fastcall VerifierPortKeReleaseSpinLockNoXdv(PKSPIN_LOCK SpinLock, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rdi

  v2 = (unsigned __int8)a2;
  v4 = ViKeReleaseSpinLockCommon(SpinLock, a2);
  KxReleaseSpinLock(SpinLock);
  __writecr8(v2);
  return ViKeIrqlLogCommon(v4, 1LL);
}

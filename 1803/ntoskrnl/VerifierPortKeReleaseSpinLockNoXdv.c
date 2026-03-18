/*
 * XREFs of VerifierPortKeReleaseSpinLockNoXdv @ 0x140827240
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ViKeIrqlLogCommon @ 0x14082767C (ViKeIrqlLogCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x140827910 (ViKeReleaseSpinLockCommon.c)
 */

__int64 __fastcall VerifierPortKeReleaseSpinLockNoXdv(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rdi

  v2 = a2;
  v4 = ViKeReleaseSpinLockCommon((ULONG_PTR)SpinLock);
  KxReleaseSpinLock(SpinLock);
  __writecr8(v2);
  return ViKeIrqlLogCommon(v4, 1LL);
}

/*
 * XREFs of VerifierPortKeReleaseSpinLockNoXdv @ 0x1407B9EE0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ViKeIrqlLogCommon @ 0x1407BA314 (ViKeIrqlLogCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x1407BA570 (ViKeReleaseSpinLockCommon.c)
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

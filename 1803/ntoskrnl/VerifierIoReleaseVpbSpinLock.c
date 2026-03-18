/*
 * XREFs of VerifierIoReleaseVpbSpinLock @ 0x14081F310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReleaseVpbSpinLock()
{
  return ((__int64 (*)(void))pXdvIoReleaseVpbSpinLock)();
}

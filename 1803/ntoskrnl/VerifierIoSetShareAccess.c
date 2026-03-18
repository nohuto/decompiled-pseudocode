/*
 * XREFs of VerifierIoSetShareAccess @ 0x14081F4C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoSetShareAccess()
{
  return ((__int64 (*)(void))pXdvIoSetShareAccess)();
}

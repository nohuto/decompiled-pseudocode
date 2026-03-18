/*
 * XREFs of VerifierIoSetShareAccess @ 0x140770590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoSetShareAccess()
{
  return ((__int64 (*)(void))pXdvIoSetShareAccess)();
}

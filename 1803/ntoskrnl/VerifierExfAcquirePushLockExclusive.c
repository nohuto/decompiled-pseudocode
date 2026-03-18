/*
 * XREFs of VerifierExfAcquirePushLockExclusive @ 0x14082F3F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViExCheckAPCsDisabled @ 0x14082F76C (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfAcquirePushLockExclusive(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0xEAuLL, a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExfAcquirePushLockExclusive)(a1);
}

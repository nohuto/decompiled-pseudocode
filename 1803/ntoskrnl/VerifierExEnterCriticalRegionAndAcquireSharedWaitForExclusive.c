/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14081E190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1402B9F70 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 */

PVOID __fastcall VerifierExEnterCriticalRegionAndAcquireSharedWaitForExclusive(struct _ERESOURCE *a1)
{
  if ( pXdvExEnterCriticalRegionAndAcquireSharedWaitForExclusive )
    return (PVOID)pXdvExEnterCriticalRegionAndAcquireSharedWaitForExclusive();
  else
    return ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(a1);
}

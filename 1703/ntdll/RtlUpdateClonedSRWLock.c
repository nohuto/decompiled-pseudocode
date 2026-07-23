/*
 * XREFs of RtlUpdateClonedSRWLock @ 0x1800E7110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlUpdateClonedSRWLock(PRTL_SRWLOCK SRWLock, LOGICAL Shared)
{
  SRWLock->Ptr = (PVOID)(Shared != 0 ? 17LL : 1LL);
}

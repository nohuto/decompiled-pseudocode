/*
 * XREFs of ExfReleasePushLock @ 0x1401125C0
 * Callers:
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140585CD8 (ExCovReadjustUnloadedModuleEntry.c)
 *     PdcTaskClientRequest @ 0x1406F0020 (PdcTaskClientRequest.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x14071F280 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x14071F96C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140720204 (ExpCovResetInformation.c)
 *     ExpWorkerInitialization @ 0x14081E950 (ExpWorkerInitialization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive();
}

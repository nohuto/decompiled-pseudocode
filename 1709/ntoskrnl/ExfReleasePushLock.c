/*
 * XREFs of ExfReleasePushLock @ 0x1400A7DD0
 * Callers:
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14059F120 (ExCovReadjustUnloadedModuleEntry.c)
 *     PdcTaskClientRequest @ 0x140727AC0 (PdcTaskClientRequest.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x14075F0F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x14075F7DC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140760074 (ExpCovResetInformation.c)
 *     ExpWorkerInitialization @ 0x14084F4D4 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1400A7EC0 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive();
}

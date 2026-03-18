/*
 * XREFs of ExfReleasePushLock @ 0x1400639B0
 * Callers:
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140605DE0 (ExCovReadjustUnloadedModuleEntry.c)
 *     PdcTaskClientRequest @ 0x14078B714 (PdcTaskClientRequest.c)
 *     PdcNotificationClientAcknowledge @ 0x14078B828 (PdcNotificationClientAcknowledge.c)
 *     PdcNotificationClientRegister @ 0x14078B970 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x14078BB20 (PdcNotificationClientUnregister.c)
 *     PdcpNotificationClientCallback @ 0x14078BC80 (PdcpNotificationClientCallback.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1407C63F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x1407C6ADC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1407C7374 (ExpCovResetInformation.c)
 *     ExpWorkerInitialization @ 0x1408C095C (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x140063AA0 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1, a2, a3, a4);
  else
    return ExfReleasePushLockExclusive();
}

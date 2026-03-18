/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x1404C6290
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400714F0 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x140071694 (PopPowerRequestCleanUp.c)
 *     PoSetPowerRequestInternal @ 0x1400722B0 (PoSetPowerRequestInternal.c)
 *     PoClearPowerRequestInternal @ 0x140072C50 (PoClearPowerRequestInternal.c)
 * Callees:
 *     <none>
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}

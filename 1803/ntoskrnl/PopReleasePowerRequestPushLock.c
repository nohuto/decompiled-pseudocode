/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x140524B6C
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140075E54 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x140075F04 (PopPowerRequestCleanUp.c)
 *     PoClearPowerRequestInternal @ 0x1400762C0 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140076428 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14014D38C (PopPowerRequestNotifyAudioStateChanged.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}

/*
 * XREFs of PpmCheckResumePpmEngineFromSx @ 0x140248718
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 */

LONG PpmCheckResumePpmEngineFromSx()
{
  return PpmReleaseLock(&PpmPerfPolicyLock);
}

/*
 * XREFs of PpmCheckResumePpmEngineFromSx @ 0x14014DE0C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 */

void PpmCheckResumePpmEngineFromSx()
{
  PpmReleaseLock(&PpmPerfPolicyLock);
}

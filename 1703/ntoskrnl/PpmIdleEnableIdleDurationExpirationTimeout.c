/*
 * XREFs of PpmIdleEnableIdleDurationExpirationTimeout @ 0x140228810
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1405C0604 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

void PpmIdleEnableIdleDurationExpirationTimeout()
{
  PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
}

/*
 * XREFs of RtlRandomEx @ 0x140071930
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1405129E8 (MmCreateProcessAddressSpace.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x14076F51C (PopPublishAndPurgePowerRequestStats.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407B00D8 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}

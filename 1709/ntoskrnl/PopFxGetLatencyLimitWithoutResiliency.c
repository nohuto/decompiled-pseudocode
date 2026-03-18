/*
 * XREFs of PopFxGetLatencyLimitWithoutResiliency @ 0x1400B19CC
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1400B1788 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 PopFxGetLatencyLimitWithoutResiliency()
{
  __int64 result; // rax

  if ( byte_1403661EE )
    return (unsigned int)dword_140400338;
  if ( PpmDisableVsyncLatencyUpdate )
    return (unsigned int)PpmLatencyToleranceLimit;
  result = (unsigned int)dword_140400334;
  if ( !PopFxVSyncEnabled )
    return (unsigned int)PpmLatencyToleranceLimit;
  return result;
}

/*
 * XREFs of PopFxGetLatencyLimitWithoutResiliency @ 0x14006FA14
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x14006F988 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 PopFxGetLatencyLimitWithoutResiliency()
{
  __int64 result; // rax

  if ( byte_14034BB6E )
    return (unsigned int)dword_1403E3310;
  if ( PpmDisableVsyncLatencyUpdate )
    return (unsigned int)PpmLatencyToleranceLimit;
  result = (unsigned int)dword_1403E330C;
  if ( !PopFxVSyncEnabled )
    return (unsigned int)PpmLatencyToleranceLimit;
  return result;
}

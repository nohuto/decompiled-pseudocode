/*
 * XREFs of ndisGenerateCorrelationIds @ 0x1C004D498
 * Callers:
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004D4BC (ndisGenerateNetBufferListCorrelationIds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGenerateCorrelationIds(unsigned int a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)&ndisCorrelationCounter, a1);
  if ( (unsigned int)result + a1 < (unsigned int)result )
    return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)&ndisCorrelationCounter, a1);
  return result;
}

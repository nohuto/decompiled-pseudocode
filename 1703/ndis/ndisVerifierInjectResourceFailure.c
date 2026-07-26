/*
 * XREFs of ndisVerifierInjectResourceFailure @ 0x1C0065BBC
 * Callers:
 *     ndisVerifierAllocateMemory @ 0x1C00657F0 (ndisVerifierAllocateMemory.c)
 *     ndisVerifierAllocateMemoryWithTag @ 0x1C00658D0 (ndisVerifierAllocateMemoryWithTag.c)
 *     ndisVerifierAllocatePacketPool @ 0x1C0065A60 (ndisVerifierAllocatePacketPool.c)
 *     ndisVerifierAllocatePacketPoolEx @ 0x1C0065AC0 (ndisVerifierAllocatePacketPoolEx.c)
 * Callees:
 *     <none>
 */

unsigned __int8 ndisVerifierInjectResourceFailure()
{
  unsigned __int8 result; // al

  if ( (ndisVerifierLevel & 4) == 0 )
    return 0;
  result = VerifierSystemSufficientlyBooted;
  if ( !VerifierSystemSufficientlyBooted )
  {
    if ( MEMORY[0xFFFFF78000000014] <= VerifierRequiredTimeSinceBoot.QuadPart + KeBootTime.QuadPart )
    {
      result = VerifierSystemSufficientlyBooted;
    }
    else
    {
      result = 1;
      VerifierSystemSufficientlyBooted = 1;
    }
  }
  if ( result != 1 || (MEMORY[0xFFFFF78000000320] & 7) != 0 )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)&ndisVeriferFailedAllocations);
  return result;
}

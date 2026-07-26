/*
 * XREFs of ndisVerifierInjectResourceFailure @ 0x1C0066314
 * Callers:
 *     ndisVerifierAllocateMemory @ 0x1C0065F40 (ndisVerifierAllocateMemory.c)
 *     ndisVerifierAllocateMemoryWithTag @ 0x1C0066020 (ndisVerifierAllocateMemoryWithTag.c)
 *     ndisVerifierAllocatePacketPool @ 0x1C00661B0 (ndisVerifierAllocatePacketPool.c)
 *     ndisVerifierAllocatePacketPoolEx @ 0x1C0066210 (ndisVerifierAllocatePacketPoolEx.c)
 * Callees:
 *     <none>
 */

char ndisVerifierInjectResourceFailure()
{
  if ( (ndisVerifierLevel & 4) == 0 )
    return 0;
  if ( !VerifierSystemSufficientlyBooted )
    VerifierSystemSufficientlyBooted = MEMORY[0xFFFFF78000000014] > VerifierRequiredTimeSinceBoot.QuadPart
                                                                  + KeBootTime.QuadPart;
  if ( VerifierSystemSufficientlyBooted != 1 || (MEMORY[0xFFFFF78000000320] & 7) != 0 )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)&ndisVeriferFailedAllocations);
  return 1;
}

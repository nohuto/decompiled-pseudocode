/*
 * XREFs of MiProtectionToCacheAttribute @ 0x140107AC8
 * Callers:
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiInitializeTransitionPfn @ 0x140105864 (MiInitializeTransitionPfn.c)
 *     MiAllocateKernelStackPages @ 0x1401059E0 (MiAllocateKernelStackPages.c)
 *     MiBuildMdlForMappedFileFault @ 0x140107600 (MiBuildMdlForMappedFileFault.c)
 *     MiInitializePfn @ 0x1401099F8 (MiInitializePfn.c)
 *     MiInsertPhysicalPteMapping @ 0x140123724 (MiInsertPhysicalPteMapping.c)
 *     MiAllocateContiguousMemory @ 0x140123DD8 (MiAllocateContiguousMemory.c)
 *     MiGet64KPage @ 0x1402240A0 (MiGet64KPage.c)
 *     MiFindLargePageMemory @ 0x1406BE99C (MiFindLargePageMemory.c)
 *     MiGetFastLargePage @ 0x1406BECF0 (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiProtectionToCacheAttribute(unsigned int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 != 31 )
  {
    if ( a1 >> 3 == 3 )
    {
      if ( (a1 & 7) != 0 )
        return 2LL;
    }
    else
    {
      return a1 >> 3 != 1;
    }
  }
  return result;
}

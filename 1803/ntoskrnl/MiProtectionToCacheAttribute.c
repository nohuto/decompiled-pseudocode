/*
 * XREFs of MiProtectionToCacheAttribute @ 0x140056EF8
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiInitializeTransitionPfn @ 0x14004EEF0 (MiInitializeTransitionPfn.c)
 *     MiGet64KPage @ 0x140055A00 (MiGet64KPage.c)
 *     MiInitializePfn @ 0x140056084 (MiInitializePfn.c)
 *     MiBuildMdlForMappedFileFault @ 0x140056680 (MiBuildMdlForMappedFileFault.c)
 *     MiAllocateContiguousMemory @ 0x1400BE350 (MiAllocateContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiInsertPhysicalPteMapping @ 0x140137EEC (MiInsertPhysicalPteMapping.c)
 *     MmMapMdl @ 0x140256AE0 (MmMapMdl.c)
 *     MiFindLargePageMemory @ 0x140755784 (MiFindLargePageMemory.c)
 *     MiGetFastLargePage @ 0x140755A14 (MiGetFastLargePage.c)
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

/*
 * XREFs of MiProtectionToCacheAttribute @ 0x140028A58
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140025E00 (MiInitializeTransitionPfn.c)
 *     MiInitializePfn @ 0x140027CC0 (MiInitializePfn.c)
 *     MiBuildMdlForMappedFileFault @ 0x140028510 (MiBuildMdlForMappedFileFault.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiGet64KPage @ 0x1400C4A90 (MiGet64KPage.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiInsertPhysicalPteMapping @ 0x1401184C0 (MiInsertPhysicalPteMapping.c)
 *     MiAllocateContiguousMemory @ 0x140119418 (MiAllocateContiguousMemory.c)
 *     MmMapMdl @ 0x14021A540 (MmMapMdl.c)
 *     MiFindLargePageMemory @ 0x1406EBD0C (MiFindLargePageMemory.c)
 *     MiGetFastLargePage @ 0x1406EBFA0 (MiGetFastLargePage.c)
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

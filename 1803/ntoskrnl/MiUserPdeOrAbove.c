/*
 * XREFs of MiUserPdeOrAbove @ 0x14009DC68
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140014310 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiMapPagesToZero @ 0x14009D760 (MiMapPagesToZero.c)
 *     MiCreateSharedZeroPages @ 0x1400A2810 (MiCreateSharedZeroPages.c)
 *     MiFillSystemPtes @ 0x14010B150 (MiFillSystemPtes.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUserPdeOrAbove(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned int i; // r9d

  v1 = 0xFFFFF6FB40000000uLL;
  v2 = 0xFFFFF6FB5FFFFFF8uLL;
  for ( i = 1; i < 4; ++i )
  {
    if ( a1 <= v2 && a1 >= v1 )
      return 1LL;
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  return 0LL;
}

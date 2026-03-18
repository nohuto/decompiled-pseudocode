/*
 * XREFs of MiGetSessionIdForVa @ 0x1400974CC
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiGetSessionIdForVa(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(a1) == 1 )
    return MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  else
    return 0xFFFFFFFFLL;
}

/*
 * XREFs of MmDeterminePoolType @ 0x1400A6B04
 * Callers:
 *     ExProtectPoolEx @ 0x1400A5BE0 (ExProtectPoolEx.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140781D30 (VerifierMmBuildMdlForNonPagedPool.c)
 *     ExFreePoolSanityChecks @ 0x1407883B0 (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MmDeterminePoolType(__int64 a1)
{
  int SystemRegionType; // edx
  __int64 result; // rax

  SystemRegionType = MiGetSystemRegionType(a1);
  if ( (unsigned int)(SystemRegionType - 6) <= 1 )
    return 1LL;
  result = 0LL;
  if ( SystemRegionType == 1 )
    return 33LL;
  return result;
}

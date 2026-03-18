/*
 * XREFs of MmDeterminePoolType @ 0x1400665E4
 * Callers:
 *     ExProtectPoolEx @ 0x140064D70 (ExProtectPoolEx.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1407C4070 (VerifierMmBuildMdlForNonPagedPool.c)
 *     ExFreePoolSanityChecks @ 0x1407CA844 (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
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

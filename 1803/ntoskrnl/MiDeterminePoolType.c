/*
 * XREFs of MiDeterminePoolType @ 0x14000A140
 * Callers:
 *     MmFreePoolMemory @ 0x140009F80 (MmFreePoolMemory.c)
 *     ExProtectPoolEx @ 0x14004C6F8 (ExProtectPoolEx.c)
 *     MmDeterminePoolType @ 0x140260468 (MmDeterminePoolType.c)
 *     MiGenerateAccessViolation @ 0x140261A7C (MiGenerateAccessViolation.c)
 *     ExFreeHeapPool @ 0x1402BD494 (ExFreeHeapPool.c)
 *     ExGetHeapFromVA @ 0x1402BD6B4 (ExGetHeapFromVA.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiDeterminePoolType(__int64 a1)
{
  int SystemRegionType; // edx
  __int64 result; // rax

  SystemRegionType = MiGetSystemRegionType(a1);
  result = 1LL;
  if ( SystemRegionType == 1 )
    return 33LL;
  if ( ((SystemRegionType - 5) & 0xFFFFFFF7) == 0 )
    return 0LL;
  if ( (unsigned int)(SystemRegionType - 6) > 1 )
    return 32LL;
  return result;
}

/*
 * XREFs of MmSetPriorityVaRanges @ 0x1406E25C4
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140009098 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 * Callees:
 *     MiProcessVaRangesInfoClass @ 0x140584814 (MiProcessVaRangesInfoClass.c)
 */

__int64 __fastcall MmSetPriorityVaRanges(__int64 a1, __int128 *a2, unsigned int a3)
{
  return MiProcessVaRangesInfoClass(1uLL, a2, 1, a3);
}

/*
 * XREFs of MmSetPriorityVaRanges @ 0x14074D118
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1400CC294 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 * Callees:
 *     MiProcessVaRangesInfoClass @ 0x140575908 (MiProcessVaRangesInfoClass.c)
 */

__int64 __fastcall MmSetPriorityVaRanges(unsigned __int64 a1, __int128 *a2, unsigned int a3)
{
  return MiProcessVaRangesInfoClass(a1, a2, 1, a3);
}

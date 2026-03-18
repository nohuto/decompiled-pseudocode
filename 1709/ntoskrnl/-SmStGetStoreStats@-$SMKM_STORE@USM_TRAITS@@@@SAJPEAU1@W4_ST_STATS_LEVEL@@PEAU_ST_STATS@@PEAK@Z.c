/*
 * XREFs of ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x14000948C
 * Callers:
 *     ?SmStGetDataInUseKb@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z @ 0x140009410 (-SmStGetDataInUseKb@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z.c)
 *     SmpProcessQueryStoreStats @ 0x140271A00 (SmpProcessQueryStoreStats.c)
 *     SmProcessCompressionInfoRequest @ 0x140572248 (SmProcessCompressionInfoRequest.c)
 * Callees:
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400094A4 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(__int64 a1)
{
  return ST_STORE<SM_TRAITS>::StGetStatsWorker(a1, 0LL);
}

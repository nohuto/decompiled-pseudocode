/*
 * XREFs of ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140034B64
 * Callers:
 *     ?SmStGetDataInUseKb@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z @ 0x140034AE8 (-SmStGetDataInUseKb@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z.c)
 *     SmpProcessQueryStoreStats @ 0x14015256C (SmpProcessQueryStoreStats.c)
 *     SmProcessCompressionInfoRequest @ 0x140491F24 (SmProcessCompressionInfoRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(__int64 a1)
{
  return ST_STORE<SM_TRAITS>::StGetStatsWorker(a1, 0LL);
}

/*
 * XREFs of ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x140269FEC
 * Callers:
 *     SmProcessSystemStoreTrimRequest @ 0x140738D48 (SmProcessSystemStoreTrimRequest.c)
 *     SmStoreCompressionStop @ 0x140738F5C (SmStoreCompressionStop.c)
 * Callees:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1402691F0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmTrimWsStore(__int64 a1, _DWORD *a2, __int64 a3)
{
  if ( (*a2 & 0x40000) != 0 )
    return SMKM_STORE<SM_TRAITS>::SmStTrimWsStore((__int64)a2, a3);
  else
    return 3221225659LL;
}

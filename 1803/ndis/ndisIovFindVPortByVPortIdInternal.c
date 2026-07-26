/*
 * XREFs of ndisIovFindVPortByVPortIdInternal @ 0x1C006C958
 * Callers:
 *     ndisOidPreRcvFilterEnumFilters @ 0x1C003BCD0 (ndisOidPreRcvFilterEnumFilters.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C006C3CC (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 *     ndisIovFindVPortByVPortId @ 0x1C006C8D8 (ndisIovFindVPortByVPortId.c)
 *     ndisOidPostIovVPortParameters @ 0x1C006D740 (ndisOidPostIovVPortParameters.c)
 *     ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C007B33C (-ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_R.c)
 *     ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007BF60 (-ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisIovFindVPortByVPortIdInternal(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r9
  __int64 v3; // r8
  __int64 *i; // rax
  unsigned int v5; // ecx

  v2 = (__int64 *)(a1 + 4776);
  v3 = 0LL;
  for ( i = *(__int64 **)(a1 + 4776); i != v2; i = (__int64 *)*i )
  {
    v5 = *((_DWORD *)i + 31);
    if ( v5 == a2 )
      return i;
    if ( v5 > a2 )
      return (__int64 *)v3;
  }
  return (__int64 *)v3;
}

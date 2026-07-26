/*
 * XREFs of ndisOidPostRSSParameters @ 0x1C00212E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisPostSetOpenRSSParameters @ 0x1C0021378 (ndisPostSetOpenRSSParameters.c)
 *     ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C0021874 (-ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C00218A0 (ndisPostSetMiniportRSSParameters.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 */

void __fastcall ndisOidPostRSSParameters(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi

  v1 = *a1;
  v3 = a1[4];
  v4 = a1[3];
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqq(167LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v1, v4, v3);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( v1 )
      ndisPostSetMiniportRSSParameters(v1, v3, *((unsigned int *)a1 + 10));
    if ( v4 && ndisShouldCacheRSSParameters((const struct _NDIS_OID_REQUEST *)v3) )
      ndisPostSetOpenRSSParameters(v4, v3, *((unsigned int *)a1 + 10));
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(168LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v1, v4, *((_DWORD *)a1 + 10));
}

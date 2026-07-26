/*
 * XREFs of ndisOidPostRSSParameters @ 0x1C00152B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisPostSetOpenRSSParameters @ 0x1C0015348 (ndisPostSetOpenRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C001589C (ndisPostSetMiniportRSSParameters.c)
 *     ndisShouldCacheRSSParameters @ 0x1C00159F8 (ndisShouldCacheRSSParameters.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

void __fastcall ndisOidPostRSSParameters(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi

  v1 = *a1;
  v3 = a1[4];
  v4 = a1[3];
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqq(182LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v4, v3);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( v1 )
      ndisPostSetMiniportRSSParameters(v1, v3, *((unsigned int *)a1 + 10));
    if ( v4 && (unsigned __int8)ndisShouldCacheRSSParameters(v3) )
      ndisPostSetOpenRSSParameters(v4, v3, *((unsigned int *)a1 + 10));
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(183LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v4, *((_DWORD *)a1 + 10));
}

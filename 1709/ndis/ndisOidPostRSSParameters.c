/*
 * XREFs of ndisOidPostRSSParameters @ 0x1C001CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisPostSetOpenRSSParameters @ 0x1C001CB48 (ndisPostSetOpenRSSParameters.c)
 *     ndisShouldCacheRSSParameters @ 0x1C001CF70 (ndisShouldCacheRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C001D038 (ndisPostSetMiniportRSSParameters.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

void __fastcall ndisOidPostRSSParameters(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi

  v1 = *a1;
  v3 = a1[4];
  v4 = a1[3];
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqq(185LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v4, v3);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( v1 )
      ndisPostSetMiniportRSSParameters(v1, v3, *((unsigned int *)a1 + 10));
    if ( v4 && (unsigned __int8)ndisShouldCacheRSSParameters(v3) )
      ndisPostSetOpenRSSParameters(v4, v3, *((unsigned int *)a1 + 10));
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(186LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v4, *((_DWORD *)a1 + 10));
}

/*
 * XREFs of ndisSetMiniportEthMulticastList @ 0x1C00C27C8
 * Callers:
 *     ndisOidPreEthMulticastOid @ 0x1C00C2290 (ndisOidPreEthMulticastOid.c)
 *     ndisOidPreEthMulticastList @ 0x1C00C2890 (ndisOidPreEthMulticastList.c)
 * Callees:
 *     ndisIsValidMulticastFilter @ 0x1C001A728 (ndisIsValidMulticastFilter.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 */

unsigned __int8 __fastcall ndisSetMiniportEthMulticastList(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r14
  unsigned __int8 v7; // bl
  int IsValidMulticastFilter; // esi
  int v9; // eax
  void *v10; // rcx

  v3 = *(_QWORD *)(a1 + 400);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x77u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2);
  v7 = 1;
  IsValidMulticastFilter = ndisIsValidMulticastFilter(a1, 0LL, a2);
  if ( IsValidMulticastFilter )
  {
    if ( (unsigned __int8)byte_1C0098752 >= 2u )
      WPP_SF_qq(0x78u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2);
  }
  else if ( *(_DWORD *)(v3 + 344) )
  {
    if ( (unsigned __int8)byte_1C0098752 >= 2u )
      WPP_SF_qq(0x79u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2);
    v9 = *(_DWORD *)(v3 + 384);
    v10 = *(void **)(v3 + 392);
    *(_DWORD *)(v3 + 400) = v9;
    memmove(v10, *(const void **)(v3 + 376), (unsigned int)(6 * v9));
    IsValidMulticastFilter = 0;
    v7 = 0;
  }
  else
  {
    IsValidMulticastFilter = 0;
  }
  *a3 = IsValidMulticastFilter;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqDD(0x7Au, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, IsValidMulticastFilter, v7);
  return v7;
}

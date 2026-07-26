/*
 * XREFs of ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C0021BDC
 * Callers:
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C00215E0 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C003F740 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C0004ED8 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEBGK@Z @ 0x1C0020694 (-ndisIsValidIfStringParts@@YAEPEBGK@Z.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisIfCreateNetworkBlock(
        struct _NDIS_IF_COMPARTMENT_BLOCK *a1,
        struct _GUID *a2,
        struct _NDIS_NSI_NETWORK_RW *a3,
        _LIST_ENTRY ***a4)
{
  unsigned int v8; // ebx
  _LIST_ENTRY **PoolWithTag; // rax
  _LIST_ENTRY **v10; // rdi
  struct _GUID v11; // xmm0
  __int64 v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  _LIST_ENTRY *i; // rsi
  unsigned int v16; // eax
  unsigned int v17; // edx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_NetworkLink; // rcx
  _LIST_ENTRY *v21; // rax
  _LIST_ENTRY *v22; // rdx
  int v24; // eax
  _LIST_ENTRY *j; // rax
  unsigned int v26; // eax

  v8 = 0;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qq(126LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2);
  if ( (a1->Flags & 1) != 0 || !a2 || !ndisIsValidIfStringParts((const unsigned __int16 *)a1, a3->NetworkName.Length) )
  {
    v8 = -1073741811;
LABEL_41:
    *a4 = 0LL;
    goto LABEL_18;
  }
  PoolWithTag = (_LIST_ENTRY **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x268uLL, 0x6669444Eu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_41;
  }
  memset(PoolWithTag, 0, 0x268uLL);
  v11 = *a2;
  v10[6] = &a1->Link;
  v12 = 4LL;
  *((struct _GUID *)v10 + 2) = v11;
  v10[8] = (_LIST_ENTRY *)(v10 + 7);
  v10[7] = (_LIST_ENTRY *)(v10 + 7);
  v13 = v10 + 10;
  *((_DWORD *)v10 + 19) = 1;
  do
  {
    *v13 = *(_OWORD *)&a3->Header.Type;
    v13[1] = *(_OWORD *)&a3->NetworkName.String[1];
    v13[2] = *(_OWORD *)&a3->NetworkName.String[9];
    v13[3] = *(_OWORD *)&a3->NetworkName.String[17];
    v13[4] = *(_OWORD *)&a3->NetworkName.String[25];
    v13[5] = *(_OWORD *)&a3->NetworkName.String[33];
    v13[6] = *(_OWORD *)&a3->NetworkName.String[41];
    v13 += 8;
    v14 = *(_OWORD *)&a3->NetworkName.String[49];
    a3 = (struct _NDIS_NSI_NETWORK_RW *)((char *)a3 + 128);
    *(v13 - 1) = v14;
    --v12;
  }
  while ( v12 );
  *v13 = *(_OWORD *)&a3->Header.Type;
  for ( i = ndisIfNetworkList.Flink; i != &ndisIfNetworkList; i = i->Flink )
  {
    v24 = ndisCompareGuid(a2, (const struct _GUID *)&i[2]);
    if ( !v24 )
    {
      v8 = -1073741270;
LABEL_40:
      ExFreePoolWithTag(v10, 0);
      goto LABEL_41;
    }
    if ( v24 < 0 )
      break;
  }
  v16 = *((_DWORD *)v10 + 22);
  if ( v16 )
  {
    if ( v16 >= 0x7FFFFFF )
    {
      v8 = -1073741811;
      goto LABEL_40;
    }
    goto LABEL_15;
  }
  if ( !ndisIfSiteIdWrapped )
  {
    ndisIfSiteScopeId.0 = ($013671E5920392F7B68C675C97F9F7D8)((ndisIfSiteScopeId.Value ^ (*(_DWORD *)&ndisIfSiteScopeId.0
                                                                                        + 1)) & 0xFFFFFFF ^ ndisIfSiteScopeId.Value);
    v17 = ndisIfSiteScopeId.Value & 0xFFFFFFF;
    if ( (ndisIfSiteScopeId.Value & 0xFFFFFFF) != 0xFFFFFFF )
      goto LABEL_14;
    ndisIfSiteIdWrapped = 1;
    ndisIfSiteScopeId.0 = ($013671E5920392F7B68C675C97F9F7D8)(ndisIfSiteScopeId.Value & 0xF0000000 | 0x7FFFFFF);
  }
  v17 = (ndisIfSiteScopeId.Value & 0xFFFFFFF) + 1;
  if ( (ndisIfSiteScopeId.Value & 0xFFFFFFF) != 0xFFFFFFE )
  {
    while ( 2 )
    {
      for ( j = ndisIfNetworkList.Flink; ; j = j->Flink )
      {
        if ( j == &ndisIfNetworkList )
        {
          v26 = (v17 ^ ndisIfSiteScopeId.Value) & 0xFFFFFFF ^ ndisIfSiteScopeId.Value;
          goto LABEL_37;
        }
        if ( v17 == LODWORD(j[5].Blink) )
          break;
      }
      if ( ++v17 != 0xFFFFFFF )
        continue;
      break;
    }
  }
  v17 = 0xFFFFFFF;
  v26 = ndisIfSiteScopeId.Value & 0xF0000000 | 0xFFFFFFE;
LABEL_37:
  ndisIfSiteScopeId.0 = ($013671E5920392F7B68C675C97F9F7D8)v26;
LABEL_14:
  *((_DWORD *)v10 + 22) = v17;
  if ( v17 == 0xFFFFFFF )
  {
    v8 = -1073741670;
    goto LABEL_40;
  }
LABEL_15:
  Blink = i->Blink;
  ++ndisIfNetworkCount;
  Flink = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    __fastfail(3u);
  *v10 = Flink;
  v10[1] = Blink;
  Flink->Blink = (_LIST_ENTRY *)v10;
  p_NetworkLink = &a1->NetworkLink;
  Blink->Flink = (_LIST_ENTRY *)v10;
  v21 = (_LIST_ENTRY *)(v10 + 2);
  v22 = a1->NetworkLink.Flink;
  if ( v22->Blink != &a1->NetworkLink )
    __fastfail(3u);
  v21->Flink = v22;
  v10[3] = p_NetworkLink;
  v22->Blink = v21;
  p_NetworkLink->Flink = v21;
  _InterlockedIncrement(&a1->Ref);
  *a4 = v10;
LABEL_18:
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqqL(127LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2, *a4, v8);
  return v8;
}

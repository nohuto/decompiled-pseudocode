/*
 * XREFs of ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00235EC
 * Callers:
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C00233A8 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0040820 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C00092E0 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEBGK@Z @ 0x1C001A664 (-ndisIsValidIfStringParts@@YAEPEBGK@Z.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisIfCreateNetworkBlock(
        struct _NDIS_IF_COMPARTMENT_BLOCK *a1,
        struct _GUID *a2,
        struct _NDIS_NSI_NETWORK_RW *a3,
        struct _NDIS_IF_NETWORK_BLOCK **a4)
{
  struct _NDIS_IF_NETWORK_BLOCK *v4; // rdi
  unsigned int v6; // ebx
  _LIST_ENTRY **PoolWithTag; // rax
  _LIST_ENTRY **v11; // rsi
  struct _GUID v12; // xmm0
  __int64 v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  _LIST_ENTRY *i; // r14
  unsigned int v17; // eax
  unsigned int v18; // edx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_NetworkLink; // rcx
  _LIST_ENTRY *v22; // rax
  _LIST_ENTRY *v23; // rdx
  int v25; // eax
  _LIST_ENTRY *j; // rax
  unsigned int v27; // eax

  v4 = 0LL;
  v6 = 0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qq(126LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2);
  if ( (a1->Flags & 1) != 0 || !a2 || !ndisIsValidIfStringParts((const unsigned __int16 *)a1, a3->NetworkName.Length) )
  {
    v6 = -1073741811;
    goto LABEL_19;
  }
  PoolWithTag = (_LIST_ENTRY **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x268uLL, 0x6669444Eu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v6 = -1073741670;
    goto LABEL_19;
  }
  memset(PoolWithTag, 0, 0x268uLL);
  v12 = *a2;
  v11[6] = &a1->Link;
  v13 = 4LL;
  *((struct _GUID *)v11 + 2) = v12;
  v11[8] = (_LIST_ENTRY *)(v11 + 7);
  v11[7] = (_LIST_ENTRY *)(v11 + 7);
  v14 = v11 + 10;
  *((_DWORD *)v11 + 19) = 1;
  do
  {
    *v14 = *(_OWORD *)&a3->Header.Type;
    v14[1] = *(_OWORD *)&a3->NetworkName.String[1];
    v14[2] = *(_OWORD *)&a3->NetworkName.String[9];
    v14[3] = *(_OWORD *)&a3->NetworkName.String[17];
    v14[4] = *(_OWORD *)&a3->NetworkName.String[25];
    v14[5] = *(_OWORD *)&a3->NetworkName.String[33];
    v14[6] = *(_OWORD *)&a3->NetworkName.String[41];
    v14 += 8;
    v15 = *(_OWORD *)&a3->NetworkName.String[49];
    a3 = (struct _NDIS_NSI_NETWORK_RW *)((char *)a3 + 128);
    *(v14 - 1) = v15;
    --v13;
  }
  while ( v13 );
  *v14 = *(_OWORD *)&a3->Header.Type;
  for ( i = ndisIfNetworkList.Flink; i != &ndisIfNetworkList; i = i->Flink )
  {
    v25 = ndisCompareGuid(a2, (const struct _GUID *)&i[2]);
    if ( !v25 )
    {
      v6 = -1073741270;
LABEL_41:
      ExFreePoolWithTag(v11, 0);
      goto LABEL_19;
    }
    if ( v25 < 0 )
      break;
  }
  v17 = *((_DWORD *)v11 + 22);
  if ( v17 )
  {
    if ( v17 >= 0x7FFFFFF )
    {
      v6 = -1073741811;
      goto LABEL_41;
    }
    goto LABEL_16;
  }
  if ( !ndisIfSiteIdWrapped )
  {
    ndisIfSiteScopeId.0 = ($013671E5920392F7B68C675C97F9F7D8)(ndisIfSiteScopeId.Value ^ (ndisIfSiteScopeId.Value ^ (*(_DWORD *)&ndisIfSiteScopeId.0 + 1)) & 0xFFFFFFF);
    if ( (ndisIfSiteScopeId.Value & 0xFFFFFFF) != 0xFFFFFFF )
    {
      v18 = ndisIfSiteScopeId.Value & 0xFFFFFFF;
      goto LABEL_15;
    }
    ndisIfSiteIdWrapped = 1;
    ndisIfSiteScopeId.0 = ($013671E5920392F7B68C675C97F9F7D8)(ndisIfSiteScopeId.Value & 0xF0000000 | 0x7FFFFFF);
  }
  v18 = (ndisIfSiteScopeId.Value & 0xFFFFFFF) + 1;
  if ( (ndisIfSiteScopeId.Value & 0xFFFFFFF) != 0xFFFFFFE )
  {
    while ( 2 )
    {
      for ( j = ndisIfNetworkList.Flink; ; j = j->Flink )
      {
        if ( j == &ndisIfNetworkList )
        {
          v27 = (v18 ^ ndisIfSiteScopeId.Value) & 0xFFFFFFF ^ ndisIfSiteScopeId.Value;
          goto LABEL_38;
        }
        if ( v18 == LODWORD(j[5].Blink) )
          break;
      }
      if ( ++v18 != 0xFFFFFFF )
        continue;
      break;
    }
  }
  v18 = 0xFFFFFFF;
  v27 = ndisIfSiteScopeId.Value & 0xF0000000 | 0xFFFFFFE;
LABEL_38:
  ndisIfSiteScopeId.0 = ($013671E5920392F7B68C675C97F9F7D8)v27;
LABEL_15:
  *((_DWORD *)v11 + 22) = v18;
  if ( v18 == 0xFFFFFFF )
  {
    v6 = -1073741670;
    goto LABEL_41;
  }
LABEL_16:
  Blink = i->Blink;
  ++ndisIfNetworkCount;
  Flink = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    __fastfail(3u);
  *v11 = Flink;
  v11[1] = Blink;
  Flink->Blink = (_LIST_ENTRY *)v11;
  p_NetworkLink = &a1->NetworkLink;
  Blink->Flink = (_LIST_ENTRY *)v11;
  v22 = (_LIST_ENTRY *)(v11 + 2);
  v23 = a1->NetworkLink.Flink;
  if ( v23->Blink != &a1->NetworkLink )
    __fastfail(3u);
  v22->Flink = v23;
  v11[3] = p_NetworkLink;
  v23->Blink = v22;
  p_NetworkLink->Flink = v22;
  _InterlockedIncrement(&a1->Ref);
  v4 = (struct _NDIS_IF_NETWORK_BLOCK *)v11;
LABEL_19:
  *a4 = v4;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qqqL(127LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2, v4, v6);
  return v6;
}

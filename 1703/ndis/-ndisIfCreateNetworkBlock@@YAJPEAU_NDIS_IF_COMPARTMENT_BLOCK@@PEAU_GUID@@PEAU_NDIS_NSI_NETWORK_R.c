/*
 * XREFs of ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00134C8
 * Callers:
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C0012ED4 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0042C00 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C00108F0 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEBGK@Z @ 0x1C001691C (-ndisIsValidIfStringParts@@YAEPEBGK@Z.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqqL @ 0x1C004457C (WPP_SF_qqqL.c)
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
  $013671E5920392F7B68C675C97F9F7D8 v17; // eax
  unsigned int v18; // eax
  int v19; // edx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_NetworkLink; // rcx
  _LIST_ENTRY *v23; // rax
  _LIST_ENTRY *v24; // rdx
  int v26; // eax
  _LIST_ENTRY *j; // rcx
  $013671E5920392F7B68C675C97F9F7D8 v28; // eax

  v8 = 0;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qq(126LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1, a2);
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
    v26 = ndisCompareGuid(a2, (const struct _GUID *)&i[2]);
    if ( !v26 )
    {
      v8 = -1073741270;
LABEL_40:
      ExFreePoolWithTag(v10, 0);
      goto LABEL_41;
    }
    if ( v26 < 0 )
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
  v17 = ndisIfSiteScopeId.0;
  if ( !ndisIfSiteIdWrapped )
  {
    v18 = (ndisIfSiteScopeId.Value ^ (*(_DWORD *)&ndisIfSiteScopeId.0 + 1)) & 0xFFFFFFF ^ ndisIfSiteScopeId.Value;
    ndisIfSiteScopeId.0 = ($013671E5920392F7B68C675C97F9F7D8)v18;
    v19 = v18 & 0xFFFFFFF;
    if ( (v18 & 0xFFFFFFF) != 0xFFFFFFF )
      goto LABEL_14;
    ndisIfSiteIdWrapped = 1;
    v17 = ($013671E5920392F7B68C675C97F9F7D8)(v18 & 0xF0000000 | 0x7FFFFFF);
    ndisIfSiteScopeId.0 = v17;
  }
  v19 = (*(_DWORD *)&v17 & 0xFFFFFFF) + 1;
  if ( (*(_DWORD *)&v17 & 0xFFFFFFF) != 0xFFFFFFE )
  {
    while ( 2 )
    {
      for ( j = ndisIfNetworkList.Flink; ; j = j->Flink )
      {
        if ( j == &ndisIfNetworkList )
        {
          v28 = ($013671E5920392F7B68C675C97F9F7D8)((v19 ^ *(_DWORD *)&v17) & 0xFFFFFFF ^ *(_DWORD *)&v17);
          goto LABEL_37;
        }
        if ( v19 == LODWORD(j[5].Blink) )
          break;
      }
      if ( ++v19 != 0xFFFFFFF )
        continue;
      break;
    }
  }
  v19 = 0xFFFFFFF;
  v28 = ($013671E5920392F7B68C675C97F9F7D8)(*(_DWORD *)&v17 & 0xF0000000 | 0xFFFFFFE);
LABEL_37:
  ndisIfSiteScopeId.0 = v28;
LABEL_14:
  *((_DWORD *)v10 + 22) = v19;
  if ( v19 == 0xFFFFFFF )
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
  v23 = (_LIST_ENTRY *)(v10 + 2);
  v24 = a1->NetworkLink.Flink;
  if ( v24->Blink != &a1->NetworkLink )
    __fastfail(3u);
  v23->Flink = v24;
  v10[3] = p_NetworkLink;
  v24->Blink = v23;
  p_NetworkLink->Flink = v23;
  _InterlockedIncrement(&a1->Ref);
  *a4 = v10;
LABEL_18:
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qqqL(127LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1, a2, *a4, v8);
  return v8;
}

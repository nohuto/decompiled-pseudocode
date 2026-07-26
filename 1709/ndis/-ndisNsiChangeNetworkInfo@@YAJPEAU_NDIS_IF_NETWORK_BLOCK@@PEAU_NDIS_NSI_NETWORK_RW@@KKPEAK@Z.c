/*
 * XREFs of ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C003E13C
 * Callers:
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C003F740 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C003FDA0 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C00205BC (ndisIfFindCompartmentBlock.c)
 *     ?ndisIsValidIfStringParts@@YAEPEBGK@Z @ 0x1C0020694 (-ndisIsValidIfStringParts@@YAEPEBGK@Z.c)
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C00215C0 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ?ndisIfReleaseSiteId@@YAXK@Z @ 0x1C003DD00 (-ndisIfReleaseSiteId@@YAXK@Z.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisNsiChangeNetworkInfo(
        struct _NDIS_IF_NETWORK_BLOCK *a1,
        struct _NDIS_NSI_NETWORK_RW *a2,
        int a3,
        int a4,
        unsigned int *a5)
{
  unsigned int v9; // ebx
  int v10; // r14d
  int v11; // r10d
  int v12; // r8d
  char v13; // al
  int v14; // r12d
  __int128 *v15; // rcx
  unsigned int v16; // r13d
  _IF_COUNTED_STRING_LH *p_NetworkName; // rdx
  __int64 v19; // rax
  __int128 v20; // xmm0
  unsigned int SiteId; // eax
  unsigned int CompartmentId; // ecx
  _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // r11
  _LIST_ENTRY *CompartmentBlock; // rax
  __int64 v25; // r11
  _NDIS_IF_COMPARTMENT_BLOCK *v26; // r15
  _LIST_ENTRY *p_CompartmentLink; // r14
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *p_NetworkLink; // rax
  _LIST_ENTRY *v31; // rcx
  _LIST_ENTRY *v32; // rcx
  char v33; // [rsp+80h] [rbp+18h]
  int v34; // [rsp+88h] [rbp+20h]

  v9 = 0;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qq(0x76u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2);
  v10 = a3;
  v34 = a3;
  v11 = a4;
  v12 = -1073741811;
  *a5 = 0;
  v13 = 0;
  v33 = 0;
  while ( v10 > 0 )
  {
    if ( v13 )
      break;
    v14 = 0;
    if ( a4 )
    {
      if ( a4 == 4 )
      {
        CompartmentId = a2->CompartmentId;
        v14 = 4;
        if ( a1->NetworkInfo.CompartmentId != CompartmentId )
        {
          Compartment = a1->Compartment;
          if ( !Compartment || Compartment->LoopbackNetwork == a1 )
            goto LABEL_10;
          CompartmentBlock = ndisIfFindCompartmentBlock(CompartmentId);
          v26 = (_NDIS_IF_COMPARTMENT_BLOCK *)CompartmentBlock;
          if ( !CompartmentBlock || ((__int64)CompartmentBlock[2].Blink & 1) != 0 )
          {
            v12 = -1073741811;
LABEL_10:
            v9 = v12;
            goto LABEL_11;
          }
          p_CompartmentLink = &a1->CompartmentLink;
          Flink = a1->CompartmentLink.Flink;
          if ( Flink->Blink != &a1->CompartmentLink
            || (Blink = a1->CompartmentLink.Blink, Blink->Flink != p_CompartmentLink) )
          {
            __fastfail(3u);
          }
          Blink->Flink = Flink;
          Flink->Blink = Blink;
          COMPARTMENTBLOCK_DECREMENT_REF(v25);
          p_NetworkLink = &v26->NetworkLink;
          v31 = v26->NetworkLink.Flink;
          if ( v31->Blink != &v26->NetworkLink )
            __fastfail(3u);
          p_CompartmentLink->Flink = v31;
          a1->CompartmentLink.Blink = p_NetworkLink;
          v31->Blink = p_CompartmentLink;
          p_NetworkLink->Flink = p_CompartmentLink;
          _InterlockedIncrement(&v26->Ref);
          v32 = a1->InterfaceLink.Flink;
          a1->NetworkInfo.CompartmentId = a2->CompartmentId;
          a1->Compartment = v26;
          while ( v32 != &a1->InterfaceLink )
          {
            LODWORD(v32[-43].Flink) = a2->CompartmentId;
            v32[7].Blink = &a1->Compartment->Link;
            v32 = v32->Flink;
          }
          v10 = v34;
          v12 = -1073741811;
          v13 = v33;
        }
        v11 = 8;
      }
      else if ( a4 == 8 )
      {
        SiteId = a2->SiteId;
        v14 = 4;
        if ( SiteId )
        {
          if ( SiteId >= 0x7FFFFFF )
            goto LABEL_10;
          ndisIfReleaseSiteId(a1->NetworkInfo.SiteId);
          a1->NetworkInfo.SiteId = a2->SiteId;
        }
        v13 = v33;
        v11 = 12;
      }
      else
      {
        if ( a4 == 12 )
        {
          v14 = 516;
          if ( !ndisIsValidIfStringParts(&a2->NetworkName.Length, a2->NetworkName.Length) )
            goto LABEL_10;
          p_NetworkName = &a1->NetworkInfo.NetworkName;
          v19 = 4LL;
          do
          {
            v20 = *v15;
            v15 += 8;
            *(_OWORD *)&p_NetworkName->Length = v20;
            p_NetworkName = (_IF_COUNTED_STRING_LH *)((char *)p_NetworkName + 128);
            *(_OWORD *)&p_NetworkName[-1].String[201] = *(v15 - 7);
            *(_OWORD *)&p_NetworkName[-1].String[209] = *(v15 - 6);
            *(_OWORD *)&p_NetworkName[-1].String[217] = *(v15 - 5);
            *(_OWORD *)&p_NetworkName[-1].String[225] = *(v15 - 4);
            *(_OWORD *)&p_NetworkName[-1].String[233] = *(v15 - 3);
            *(_OWORD *)&p_NetworkName[-1].String[241] = *(v15 - 2);
            *(_OWORD *)&p_NetworkName[-1].String[249] = *(v15 - 1);
            --v19;
          }
          while ( v19 );
          v11 = 528;
          *(_DWORD *)&p_NetworkName->Length = *(_DWORD *)v15;
        }
        v13 = 1;
        v33 = 1;
      }
    }
    else
    {
      v14 = 4;
      v11 = 4;
    }
    if ( !v9 && v14 && v10 >= v14 )
    {
      v10 += a4 - v11;
      a4 = v11;
      v34 = v10;
      continue;
    }
LABEL_11:
    v13 = 1;
    v33 = 1;
  }
  v16 = a3 - v10;
  if ( !v16 )
    v9 = v12;
  *a5 = v16;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqd(119LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2, v9);
  return v9;
}

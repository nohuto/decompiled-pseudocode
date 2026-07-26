/*
 * XREFs of ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B8820
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000D6B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E3F0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 *     ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x1C00B9194 (-ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z.c)
 *     ?ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C00DB6CC (-ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  unsigned int v3; // r15d
  struct _NDIS_IF_BLOCK *v4; // r10
  struct _NM_REQUEST_GET_PARAMETER *v5; // r13
  struct _NDIS_IF_BLOCK *v6; // r11
  struct _NDIS_IF_BLOCK *v7; // r8
  int v8; // ecx
  int v9; // esi
  char v10; // r12
  int v11; // r14d
  char *v12; // r13
  unsigned int v13; // edi
  const void *p_ifOperStatusFlags; // rdx
  unsigned int v15; // ebx
  int v16; // ebp
  unsigned int v17; // ecx
  int v18; // esi
  void *ProviderIfContext; // rcx
  int (__fastcall *QueryObjectHandler)(void *, unsigned int, unsigned int *, void *); // rax
  unsigned int v22; // ecx
  int v23; // [rsp+30h] [rbp-58h]
  struct _NDIS_IF_BLOCK *v24; // [rsp+38h] [rbp-50h]
  unsigned int v28; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = a3;
  v6 = a1;
  if ( !a2 )
    v4 = a1;
  v7 = a2;
  v24 = v4;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
  {
    WPP_SF_qqq(0x4Eu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2, v5);
    v4 = v24;
    v7 = a2;
    v6 = a1;
  }
  v8 = *((_DWORD *)v5 + 12);
  v9 = *((_DWORD *)v5 + 13);
  v23 = v8;
  if ( *((_QWORD *)v5 + 5) )
  {
    v10 = 0;
    v11 = *((_DWORD *)v5 + 12);
    if ( v8 > 0 )
    {
      v12 = (char *)*((_QWORD *)v5 + 5);
      while ( 1 )
      {
        if ( v10 )
        {
LABEL_17:
          v5 = a3;
          goto LABEL_18;
        }
        v13 = 0;
        p_ifOperStatusFlags = 0LL;
        if ( v9 || (unsigned int)v8 < 0xD8 || v7 )
        {
          switch ( v9 )
          {
            case 0:
              v15 = 4;
              v13 = 66179;
              v16 = 4;
              goto LABEL_12;
            case 4:
              v15 = 4;
              v16 = 8;
              p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v4)->ifOperStatusFlags;
              goto LABEL_12;
            case 8:
              v15 = 4;
              if ( v7 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v7)->MediaConnectState;
              else
                v13 = 66186;
              v16 = 12;
              goto LABEL_12;
            case 12:
              v15 = 4;
              if ( v7 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v7)->MediaDuplexState;
              else
                v13 = 66188;
              v16 = 16;
              goto LABEL_12;
            case 16:
              v15 = 4;
              v13 = 65798;
              v16 = 20;
              goto LABEL_12;
            case 20:
              v15 = 1;
              if ( v6->bNdisIsProvider )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v6)->ifPromiscuousMode;
              else
                v13 = 66176;
              v16 = 21;
              goto LABEL_12;
            case 21:
              v15 = 1;
              p_ifOperStatusFlags = &v6->ifDeviceWakeUpEnable;
              v16 = 24;
              goto LABEL_12;
            case 24:
              v15 = 8;
              if ( v7 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v7)->XmitLinkSpeed;
              else
                v13 = 66180;
              v16 = 32;
              goto LABEL_12;
            case 32:
              v15 = 8;
              if ( v7 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v7)->RcvLinkSpeed;
              else
                v13 = 66181;
              v16 = 40;
              goto LABEL_12;
            case 40:
              v15 = 8;
              v13 = 66177;
              v16 = 48;
              goto LABEL_12;
            case 48:
              v15 = 8;
              v13 = 66178;
              v16 = 56;
              goto LABEL_12;
            case 56:
              v15 = 8;
              v13 = 66182;
              v16 = 64;
              goto LABEL_12;
            case 64:
              if ( (unsigned int)v11 >= 0x90 && v6->bNdisIsProvider )
              {
                v15 = 144;
                v13 = 131334;
                v16 = 208;
              }
              else
              {
                v15 = 8;
                v13 = 131611;
                v16 = 72;
              }
              goto LABEL_12;
            case 72:
              v15 = 8;
              v13 = 131332;
              v16 = 80;
              goto LABEL_12;
            case 80:
              v15 = 8;
              v13 = 131609;
              v16 = 88;
              goto LABEL_12;
            case 88:
              v15 = 8;
              v13 = 131592;
              v16 = 96;
              goto LABEL_12;
            case 96:
              v15 = 8;
              v13 = 131594;
              v16 = 104;
              goto LABEL_12;
            case 104:
              v15 = 8;
              v13 = 131596;
              v16 = 112;
              goto LABEL_12;
            case 112:
              v15 = 8;
              v13 = 131610;
              v16 = 120;
              goto LABEL_12;
            case 120:
              v15 = 8;
              v13 = 131586;
              v16 = 128;
              goto LABEL_12;
            case 128:
              v15 = 8;
              v13 = 131588;
              v16 = 136;
              goto LABEL_12;
            case 136:
              v15 = 8;
              v13 = 131590;
              v16 = 144;
              goto LABEL_12;
            case 144:
              v15 = 8;
              v13 = 131331;
              v16 = 152;
              goto LABEL_12;
            case 152:
              v15 = 8;
              v13 = 131612;
              v16 = 160;
              goto LABEL_12;
            case 160:
              v15 = 8;
              v13 = 131591;
              v16 = 168;
              goto LABEL_12;
            case 168:
              v15 = 8;
              v13 = 131593;
              v16 = 176;
              goto LABEL_12;
            case 176:
              v15 = 8;
              v13 = 131595;
              v16 = 184;
              goto LABEL_12;
            case 184:
              v15 = 8;
              v13 = 131585;
              v16 = 192;
              goto LABEL_12;
            case 192:
              v15 = 8;
              v13 = 131587;
              v16 = 200;
              goto LABEL_12;
            case 200:
              v15 = 8;
              v13 = 131589;
              v16 = 208;
              goto LABEL_12;
            case 208:
              v15 = 4;
              p_ifOperStatusFlags = &v6->_NDIS_NSI_INTERFACE_ENUM_ROD;
              v16 = 212;
              goto LABEL_12;
            case 212:
              v15 = 4;
              p_ifOperStatusFlags = &v4->SupportedStatistics;
              v16 = 216;
              v10 = 1;
              goto LABEL_12;
            default:
              goto LABEL_84;
          }
        }
        v15 = 216;
        v13 = 66183;
        v16 = 216;
        v10 = 1;
LABEL_12:
        if ( v11 < (int)v15 )
        {
LABEL_84:
          v10 = 1;
          goto LABEL_16;
        }
        if ( v13 )
          break;
        if ( !p_ifOperStatusFlags )
          goto LABEL_84;
        memmove(v12, p_ifOperStatusFlags, v15);
        v4 = v24;
        v7 = a2;
        v6 = a1;
        v17 = v16 - v9;
        v9 = v16;
        v12 += v17;
        v11 -= v17;
LABEL_16:
        v8 = v23;
        if ( v11 <= 0 )
          goto LABEL_17;
      }
      ProviderIfContext = v4->ProviderIfContext;
      QueryObjectHandler = v4->ProviderHandle->ProviderCharacteristics.QueryObjectHandler;
      v28 = v15;
      if ( QueryObjectHandler(ProviderIfContext, v13, &v28, v12) )
      {
        memset(v12, 0, v15);
      }
      else
      {
        if ( v28 < v15 )
          memset(&v12[v28], 0, v15 - v28);
        v4 = v24;
        if ( v24->bNdisIsProvider )
          goto LABEL_27;
        ndisNsiPostGetInterfaceRodInformation(a1, v13, v15, v12);
      }
      v4 = v24;
LABEL_27:
      v7 = a2;
      v6 = a1;
      v22 = v16 - v9;
      v9 = v16;
      v12 += v22;
      v11 -= v22;
      goto LABEL_16;
    }
LABEL_18:
    v18 = v9 - *((_DWORD *)v5 + 13);
    *((_DWORD *)v5 + 12) = v18;
    if ( !v18 )
      v3 = -1073741811;
  }
  else
  {
    *((_DWORD *)v5 + 12) = 0;
  }
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqqL(0x4Fu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, v6, v7, v5, v3);
  return v3;
}

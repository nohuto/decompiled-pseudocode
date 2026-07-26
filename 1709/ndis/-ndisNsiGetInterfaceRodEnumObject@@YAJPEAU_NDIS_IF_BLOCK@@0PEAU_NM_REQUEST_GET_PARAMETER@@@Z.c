/*
 * XREFs of ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B8BF0
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000A970 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000D6B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E3F0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x1C00B9194 (-ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodEnumObject(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  unsigned int v3; // edi
  struct _NDIS_IF_BLOCK *v4; // r10
  struct _NM_REQUEST_GET_PARAMETER *v5; // rbx
  struct _NDIS_IF_BLOCK *v6; // r9
  struct _NDIS_IF_BLOCK *v7; // r11
  char *v8; // r15
  unsigned int v9; // r14d
  int v10; // ebp
  char v11; // r8
  unsigned int v12; // ebx
  _WORD *p_ifOperStatusFlags; // rdx
  unsigned int v14; // esi
  int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // r14d
  void *ProviderIfContext; // rcx
  int (__fastcall *QueryObjectHandler)(void *, unsigned int, unsigned int *, void *); // rax
  unsigned int v21; // ecx
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  __int64 v23; // r15
  unsigned __int16 v24; // cx
  _WORD *v25; // r12
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdx
  unsigned int Interrupt_low; // r13d
  char *v28; // rcx
  char v29; // [rsp+30h] [rbp-298h]
  unsigned int v30; // [rsp+34h] [rbp-294h] BYREF
  char *v31; // [rsp+38h] [rbp-290h]
  struct _NDIS_IF_BLOCK *v32; // [rsp+40h] [rbp-288h]
  struct _NDIS_IF_BLOCK *v33; // [rsp+48h] [rbp-280h]
  struct _NDIS_IF_BLOCK *v34; // [rsp+50h] [rbp-278h]
  _NDIS_MINIPORT_BLOCK *v35; // [rsp+58h] [rbp-270h]
  struct _NM_REQUEST_GET_PARAMETER *v36; // [rsp+60h] [rbp-268h]
  _WORD v37[264]; // [rsp+70h] [rbp-258h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a2 )
    v4 = a1;
  v34 = a2;
  v5 = a3;
  v32 = v4;
  v36 = a3;
  v6 = a2;
  v7 = a1;
  v33 = a1;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
  {
    WPP_SF_qq(0x58u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a3);
    v4 = v32;
    v7 = v33;
    v6 = v34;
  }
  v8 = (char *)*((_QWORD *)v5 + 5);
  v9 = *((_DWORD *)v5 + 13);
  v10 = *((_DWORD *)v5 + 12);
  v31 = v8;
  if ( v8 )
  {
    v11 = 0;
    v29 = 0;
    if ( v10 > 0 )
    {
      while ( 1 )
      {
        if ( v11 )
        {
LABEL_18:
          v5 = v36;
          break;
        }
        v12 = 0;
        p_ifOperStatusFlags = 0LL;
        if ( v9 > 0x218 )
        {
          switch ( v9 )
          {
            case 0x21Cu:
              v14 = 4;
              v15 = 544;
              p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v4)->ifOperStatusFlags;
              goto LABEL_13;
            case 0x220u:
              v14 = 4;
              v12 = 65798;
              v15 = 548;
              goto LABEL_13;
            case 0x224u:
              v14 = 34;
              if ( v7->bNdisIsProvider )
                p_ifOperStatusFlags = &v4->ifPhysAddress.Length;
              else
                v12 = 16843010;
              v15 = 582;
              goto LABEL_13;
            case 0x246u:
              v14 = 34;
              if ( v7->bNdisIsProvider )
                p_ifOperStatusFlags = &v4->PermanentPhysAddress.Length;
              else
                v12 = 16843009;
              v15 = 616;
              goto LABEL_13;
            case 0x268u:
              v14 = 4;
              v12 = 66184;
              v15 = 624;
              goto LABEL_13;
            case 0x270u:
              v14 = 8;
              if ( v6 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v6)->XmitLinkSpeed;
              else
                v12 = 66180;
              v15 = 632;
              goto LABEL_13;
            case 0x278u:
              v14 = 8;
              if ( v6 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v6)->RcvLinkSpeed;
              else
                v12 = 66181;
              v15 = 640;
              goto LABEL_13;
            case 0x280u:
              v14 = 1;
              if ( v7->bNdisIsProvider )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v7)->ifPromiscuousMode;
              else
                v12 = 66176;
              v15 = 641;
              goto LABEL_13;
            case 0x281u:
              v14 = 1;
              p_ifOperStatusFlags = &v7->ifDeviceWakeUpEnable;
              v15 = 644;
              goto LABEL_13;
            case 0x284u:
              v14 = 4;
              if ( v6 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v6)->MediaConnectState;
              else
                v12 = 66186;
              v15 = 648;
              goto LABEL_13;
            case 0x288u:
              v14 = 4;
              if ( v6 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v6)->MediaDuplexState;
              else
                v12 = 66188;
              v15 = v9 + 4;
              v29 = 1;
              goto LABEL_13;
            default:
              goto LABEL_89;
          }
        }
        if ( v9 == 536 )
        {
          v14 = 4;
          v12 = 66179;
          v15 = 540;
        }
        else if ( v9 )
        {
          if ( v9 == 4 )
          {
            v14 = 16;
            v15 = 20;
            p_ifOperStatusFlags = &v7->NetworkGuid;
            goto LABEL_13;
          }
          if ( v9 != 20 )
          {
LABEL_89:
            v11 = 1;
            v29 = 1;
            goto LABEL_17;
          }
          v14 = 516;
          if ( !v7->bNdisIsProvider )
          {
            v12 = 66185;
LABEL_51:
            v15 = 536;
            goto LABEL_13;
          }
          if ( v7->IsNdisFilter )
          {
            Miniport = v7->Miniport;
            v35 = Miniport;
            if ( (unsigned __int8)byte_1C009875D >= 4u )
              WPP_SF_qq(0xD1u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, Miniport, v37);
            memset(v37, 0, 0x204uLL);
            v37[0] = LOWORD(Miniport->BaseMiniport->Interrupt)
                   + *(_WORD *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL)
                   + 12;
            if ( v37[0] > 0x200u )
              v37[0] = 512;
            memmove(
              &v37[1],
              (const void *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 598LL),
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL));
            v23 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL);
            v24 = v37[0];
            v25 = (_WORD *)((char *)&v37[1] + v23);
            if ( v37[0] - (unsigned int)v23 >= 2 )
            {
              *v25 = 45;
              LODWORD(v23) = v23 + 2;
              v24 = v37[0];
              ++v25;
            }
            if ( v24 > (unsigned int)v23 )
            {
              BaseMiniport = Miniport->BaseMiniport;
              Interrupt_low = LOWORD(BaseMiniport->Interrupt);
              if ( v24 - (unsigned int)v23 <= Interrupt_low )
                Interrupt_low = v24 - (_DWORD)v23;
              memmove(v25, *(const void **)&BaseMiniport->Flags, Interrupt_low);
              v24 = v37[0];
              v25 = (_WORD *)((char *)v25 + Interrupt_low);
              Miniport = v35;
              LODWORD(v23) = Interrupt_low + v23;
            }
            if ( v24 - (unsigned int)v23 >= 2 )
            {
              *v25 = 45;
              LODWORD(v23) = v23 + 2;
              v24 = v37[0];
              ++v25;
            }
            if ( v24 - (unsigned int)v23 >= 8 )
              *(_QWORD *)v25 = *(_QWORD *)(*((_QWORD *)Miniport->Reserved4.Buffer + 1)
                                         + 2 * (((unsigned __int64)*Miniport->Reserved4.Buffer - 8) >> 1));
            if ( (unsigned __int8)byte_1C009875D >= 4u )
              WPP_SF_qq(0xD2u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, Miniport, v37);
            v8 = v31;
            p_ifOperStatusFlags = v37;
            v4 = v32;
            goto LABEL_51;
          }
          p_ifOperStatusFlags = &v7->ifAlias.Length;
          v15 = 536;
        }
        else
        {
          v14 = 4;
          p_ifOperStatusFlags = &v7->_NDIS_NSI_INTERFACE_ENUM_ROD;
          v15 = 4;
        }
LABEL_13:
        if ( v10 < (int)v14 )
          goto LABEL_89;
        if ( v12 )
        {
          ProviderIfContext = v4->ProviderIfContext;
          QueryObjectHandler = v4->ProviderHandle->ProviderCharacteristics.QueryObjectHandler;
          v30 = v14;
          if ( QueryObjectHandler(ProviderIfContext, v12, &v30, v8) )
          {
            v28 = v8;
          }
          else
          {
            if ( v30 >= v14 )
            {
LABEL_30:
              v11 = v29;
              v21 = v15 - v9;
              v9 = v15;
              v8 += v21;
              v31 = v8;
              v10 -= v21;
              goto LABEL_17;
            }
            v14 -= v30;
            v28 = &v8[v30];
          }
          memset(v28, 0, v14);
          goto LABEL_30;
        }
        if ( !p_ifOperStatusFlags )
          goto LABEL_89;
        memmove(v8, p_ifOperStatusFlags, v14);
        v11 = v29;
        v16 = v15 - v9;
        v9 = v15;
        v8 += v16;
        v31 = v8;
        v10 -= v16;
LABEL_17:
        v4 = v32;
        v3 = 0;
        v7 = v33;
        v6 = v34;
        if ( v10 <= 0 )
          goto LABEL_18;
      }
    }
    v17 = v9 - *((_DWORD *)v5 + 13);
    *((_DWORD *)v5 + 12) = v17;
    if ( !v17 )
      v3 = -1073741811;
  }
  else
  {
    *((_DWORD *)v5 + 12) = 0;
  }
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqd(0x59u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, v7, v5, v3);
  return v3;
}

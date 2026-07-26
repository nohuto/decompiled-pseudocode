/*
 * XREFs of ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00ADDC0
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000A2C0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B050 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000E630 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x1C00AEB88 (-ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodEnumObject(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  unsigned int v3; // r15d
  struct _NDIS_IF_BLOCK *v4; // r10
  struct _NM_REQUEST_GET_PARAMETER *v5; // rbx
  struct _NDIS_IF_BLOCK *v6; // r9
  struct _NDIS_IF_BLOCK *v7; // r11
  char *v8; // r12
  unsigned int v9; // r14d
  int v10; // ebp
  char v11; // r8
  unsigned int v12; // ebx
  _WORD *p_NetworkGuid; // rdx
  unsigned int v14; // esi
  int v15; // edi
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // r14d
  void *ProviderIfContext; // rcx
  int (__fastcall *QueryObjectHandler)(void *, unsigned int, unsigned int *, void *); // rax
  unsigned int v22; // ecx
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  __int64 v24; // r15
  unsigned __int16 v25; // cx
  _WORD *v26; // r12
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdx
  unsigned int Interrupt_low; // r13d
  char *v29; // rcx
  char v30; // [rsp+30h] [rbp-298h]
  unsigned int v31; // [rsp+34h] [rbp-294h] BYREF
  char *v32; // [rsp+38h] [rbp-290h]
  struct _NDIS_IF_BLOCK *v33; // [rsp+40h] [rbp-288h]
  struct _NDIS_IF_BLOCK *v34; // [rsp+48h] [rbp-280h]
  struct _NDIS_IF_BLOCK *v35; // [rsp+50h] [rbp-278h]
  _NDIS_MINIPORT_BLOCK *v36; // [rsp+58h] [rbp-270h]
  struct _NM_REQUEST_GET_PARAMETER *v37; // [rsp+60h] [rbp-268h]
  _WORD v38[264]; // [rsp+70h] [rbp-258h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a2 )
    v4 = a1;
  v35 = a2;
  v5 = a3;
  v33 = v4;
  v37 = a3;
  v6 = a2;
  v7 = a1;
  v34 = a1;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
  {
    WPP_SF_qq(0x58u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a3);
    v4 = v33;
    v7 = v34;
    v6 = v35;
  }
  v8 = (char *)*((_QWORD *)v5 + 5);
  v9 = *((_DWORD *)v5 + 13);
  v10 = *((_DWORD *)v5 + 12);
  v32 = v8;
  if ( v8 )
  {
    v11 = 0;
    v30 = 0;
    if ( v10 > 0 )
    {
      while ( 1 )
      {
        if ( v11 )
        {
LABEL_20:
          v5 = v37;
          break;
        }
        v12 = 0;
        p_NetworkGuid = 0LL;
        if ( v9 <= 0x218 )
        {
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
              p_NetworkGuid = &v7->NetworkGuid;
              goto LABEL_15;
            }
            if ( v9 != 20 )
            {
LABEL_87:
              v11 = 1;
              v30 = 1;
              goto LABEL_19;
            }
            v14 = 516;
            if ( !v7->bNdisIsProvider )
            {
              v12 = 66185;
LABEL_53:
              v15 = 536;
              goto LABEL_15;
            }
            if ( v7->IsNdisFilter )
            {
              Miniport = v7->Miniport;
              v36 = Miniport;
              if ( (unsigned __int8)byte_1C009961D >= 4u )
                WPP_SF_qq(0xD1u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, Miniport, v38);
              memset(v38, 0, 0x204uLL);
              v38[0] = LOWORD(Miniport->BaseMiniport->Interrupt)
                     + 12
                     + *(_WORD *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL);
              if ( v38[0] > 0x200u )
                v38[0] = 512;
              memmove(
                &v38[1],
                (const void *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 598LL),
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL));
              v24 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL);
              v25 = v38[0];
              v26 = (_WORD *)((char *)&v38[1] + v24);
              if ( v38[0] - (unsigned int)v24 >= 2 )
              {
                *v26 = 45;
                LODWORD(v24) = v24 + 2;
                v25 = v38[0];
                ++v26;
              }
              if ( v25 > (unsigned int)v24 )
              {
                BaseMiniport = Miniport->BaseMiniport;
                Interrupt_low = LOWORD(BaseMiniport->Interrupt);
                if ( v25 - (unsigned int)v24 <= Interrupt_low )
                  Interrupt_low = v25 - (_DWORD)v24;
                memmove(v26, *(const void **)&BaseMiniport->Flags, Interrupt_low);
                v25 = v38[0];
                v26 = (_WORD *)((char *)v26 + Interrupt_low);
                Miniport = v36;
                LODWORD(v24) = Interrupt_low + v24;
              }
              if ( v25 - (unsigned int)v24 >= 2 )
              {
                *v26 = 45;
                LODWORD(v24) = v24 + 2;
                v25 = v38[0];
                ++v26;
              }
              if ( v25 - (unsigned int)v24 >= 8 )
                *(_QWORD *)v26 = *(_QWORD *)(*((_QWORD *)Miniport->Reserved4.Buffer + 1)
                                           + 2 * (((unsigned __int64)*Miniport->Reserved4.Buffer - 8) >> 1));
              if ( (unsigned __int8)byte_1C009961D >= 4u )
                WPP_SF_qq(0xD2u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, Miniport, v38);
              v8 = v32;
              p_NetworkGuid = v38;
              v4 = v33;
              v3 = 0;
              goto LABEL_53;
            }
            p_NetworkGuid = &v7->ifAlias.Length;
            v15 = 536;
          }
          else
          {
            v14 = 4;
            p_NetworkGuid = &v7->_NDIS_NSI_INTERFACE_ENUM_ROD;
            v15 = 4;
          }
        }
        else
        {
          switch ( v9 )
          {
            case 0x21Cu:
              v14 = 4;
              v15 = 544;
              p_NetworkGuid = &ndisGetMiniportIfBlock(v4)->ifOperStatusFlags;
              goto LABEL_15;
            case 0x220u:
              v14 = 4;
              v12 = 65798;
              v15 = 548;
              goto LABEL_15;
            case 0x224u:
              v14 = 34;
              if ( v7->bNdisIsProvider )
                p_NetworkGuid = &v4->ifPhysAddress.Length;
              else
                v12 = 16843010;
              v15 = 582;
              goto LABEL_15;
            case 0x246u:
              v14 = 34;
              if ( v7->bNdisIsProvider )
                p_NetworkGuid = &v4->PermanentPhysAddress.Length;
              else
                v12 = 16843009;
              v15 = 616;
              goto LABEL_15;
            case 0x268u:
              v14 = 4;
              v12 = 66184;
              v15 = 624;
              goto LABEL_15;
            case 0x270u:
              v14 = 8;
              if ( v6 )
                p_NetworkGuid = &ndisGetMiniportIfBlock(v6)->XmitLinkSpeed;
              v15 = 632;
              v16 = 66180;
              break;
            case 0x278u:
              v14 = 8;
              if ( v6 )
                p_NetworkGuid = &ndisGetMiniportIfBlock(v6)->RcvLinkSpeed;
              v15 = 640;
              v16 = 66181;
              break;
            case 0x280u:
              v14 = 1;
              if ( v7->bNdisIsProvider )
                p_NetworkGuid = &ndisGetMiniportIfBlock(v7)->ifPromiscuousMode;
              else
                v12 = 66176;
              v15 = 641;
              goto LABEL_15;
            case 0x281u:
              v14 = 1;
              p_NetworkGuid = &v7->ifDeviceWakeUpEnable;
              v15 = 644;
              goto LABEL_15;
            case 0x284u:
              v14 = 4;
              if ( v6 )
                p_NetworkGuid = &ndisGetMiniportIfBlock(v6)->MediaConnectState;
              v15 = 648;
              v16 = 66186;
              break;
            case 0x288u:
              v14 = 4;
              if ( v6 )
                p_NetworkGuid = &ndisGetMiniportIfBlock(v6)->MediaDuplexState;
              v15 = v9 + 4;
              v30 = 1;
              v16 = 66188;
              break;
            default:
              goto LABEL_87;
          }
          if ( !v6 )
            v12 = v16;
        }
LABEL_15:
        if ( v10 < (int)v14 )
          goto LABEL_87;
        if ( v12 )
        {
          ProviderIfContext = v4->ProviderIfContext;
          QueryObjectHandler = v4->ProviderHandle->ProviderCharacteristics.QueryObjectHandler;
          v31 = v14;
          if ( QueryObjectHandler(ProviderIfContext, v12, &v31, v8) )
          {
            v29 = v8;
          }
          else
          {
            if ( v31 >= v14 )
            {
LABEL_32:
              v11 = v30;
              v22 = v15 - v9;
              v9 = v15;
              v8 += v22;
              v32 = v8;
              v10 -= v22;
              goto LABEL_19;
            }
            v14 -= v31;
            v29 = &v8[v31];
          }
          memset(v29, 0, v14);
          goto LABEL_32;
        }
        if ( !p_NetworkGuid )
          goto LABEL_87;
        memmove(v8, p_NetworkGuid, v14);
        v11 = v30;
        v17 = v15 - v9;
        v9 = v15;
        v8 += v17;
        v32 = v8;
        v10 -= v17;
LABEL_19:
        v4 = v33;
        v7 = v34;
        v6 = v35;
        if ( v10 <= 0 )
          goto LABEL_20;
      }
    }
    v18 = v9 - *((_DWORD *)v5 + 13);
    *((_DWORD *)v5 + 12) = v18;
    if ( !v18 )
      v3 = -1073741811;
  }
  else
  {
    *((_DWORD *)v5 + 12) = 0;
  }
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qqd(0x59u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, v7, v5, v3);
  return v3;
}

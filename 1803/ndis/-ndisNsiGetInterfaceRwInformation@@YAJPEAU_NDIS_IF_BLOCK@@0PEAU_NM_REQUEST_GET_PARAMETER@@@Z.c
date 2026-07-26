/*
 * XREFs of ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00AEBB0
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000A2C0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B050 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRwInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  struct _NM_REQUEST_GET_PARAMETER *v3; // r15
  unsigned int v4; // esi
  struct _NDIS_IF_BLOCK *v5; // r8
  struct _NDIS_IF_BLOCK *v6; // rax
  struct _NDIS_IF_BLOCK *v7; // rdx
  char *v8; // r13
  int v9; // r14d
  int v10; // edi
  char v11; // al
  struct _NDIS_IF_BLOCK *v12; // r15
  _WORD *p_Length; // rbx
  unsigned int v14; // r12d
  unsigned int v15; // ebp
  unsigned int v16; // ecx
  int v17; // r14d
  void *ProviderIfContext; // rcx
  int (__fastcall *QueryObjectHandler)(void *, unsigned int, unsigned int *, void *); // rax
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  unsigned __int16 v22; // dx
  __int64 v23; // rcx
  char *v24; // r9
  int v25; // eax
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdx
  unsigned int v27; // eax
  unsigned int Interrupt_low; // ecx
  __int64 v29; // rbx
  char *v30; // rcx
  char v31; // [rsp+30h] [rbp-298h]
  int v32; // [rsp+34h] [rbp-294h]
  int v33; // [rsp+34h] [rbp-294h]
  unsigned int v34; // [rsp+38h] [rbp-290h]
  unsigned int v35; // [rsp+3Ch] [rbp-28Ch] BYREF
  struct _NDIS_IF_BLOCK *v36; // [rsp+40h] [rbp-288h]
  struct _NDIS_IF_BLOCK *v37; // [rsp+48h] [rbp-280h]
  struct _NDIS_IF_BLOCK *v38; // [rsp+50h] [rbp-278h]
  _NDIS_MINIPORT_BLOCK *v39; // [rsp+58h] [rbp-270h]
  struct _NM_REQUEST_GET_PARAMETER *v40; // [rsp+60h] [rbp-268h]
  _WORD v41[264]; // [rsp+70h] [rbp-258h] BYREF

  v3 = a3;
  v40 = a3;
  v4 = 0;
  v5 = a2;
  v38 = a2;
  v6 = a2;
  if ( !a2 )
    v6 = a1;
  v37 = a1;
  v36 = v6;
  v7 = a1;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
  {
    WPP_SF_qqq(0x4Cu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, v5, v3);
    v7 = v37;
    v5 = v38;
  }
  v8 = (char *)*((_QWORD *)v3 + 5);
  v9 = *((_DWORD *)v3 + 13);
  v10 = *((_DWORD *)v3 + 12);
  if ( v8 )
  {
    v11 = 0;
    v31 = 0;
    if ( v10 > 0 )
    {
      v12 = v36;
      while ( 1 )
      {
        if ( v11 )
        {
LABEL_23:
          v3 = v40;
          v5 = v38;
          break;
        }
        p_Length = 0LL;
        v14 = 0;
        if ( v9 )
        {
          switch ( v9 )
          {
            case 16:
              v15 = 4;
              v32 = 20;
              v14 = 66184;
              break;
            case 20:
              v15 = 516;
              if ( !v7->bNdisIsProvider )
              {
                v14 = 66185;
                goto LABEL_33;
              }
              if ( !v7->IsNdisFilter )
              {
                p_Length = &v7->ifAlias.Length;
LABEL_33:
                v32 = 536;
                break;
              }
              Miniport = v7->Miniport;
              v39 = Miniport;
              if ( (unsigned __int8)byte_1C009961D >= 4u )
                WPP_SF_qq(0xD1u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, Miniport, v41);
              memset(v41, 0, 0x204uLL);
              v41[0] = LOWORD(Miniport->BaseMiniport->Interrupt)
                     + 12
                     + *(_WORD *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL);
              if ( v41[0] > 0x200u )
                v41[0] = 512;
              memmove(
                &v41[1],
                (const void *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 598LL),
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL));
              v22 = v41[0];
              v23 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL);
              v24 = (char *)&v41[1] + v23;
              v33 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL);
              v36 = (struct _NDIS_IF_BLOCK *)((char *)&v41[1] + v23);
              if ( v41[0] - (unsigned int)v23 >= 2 )
              {
                LODWORD(v23) = v23 + 2;
                *(_WORD *)v24 = 45;
                v24 += 2;
                v22 = v41[0];
                v36 = (struct _NDIS_IF_BLOCK *)v24;
                v33 = v23;
              }
              v25 = v22;
              if ( v22 > (unsigned int)v23 )
              {
                BaseMiniport = Miniport->BaseMiniport;
                v27 = v25 - v23;
                Interrupt_low = LOWORD(BaseMiniport->Interrupt);
                v34 = Interrupt_low;
                if ( v27 <= Interrupt_low )
                {
                  Interrupt_low = v27;
                  v34 = v27;
                }
                v29 = Interrupt_low;
                memmove(v24, *(const void **)&BaseMiniport->Flags, Interrupt_low);
                v24 = (char *)(&v36->Type + v29);
                LODWORD(v23) = v34 + v33;
                v22 = v41[0];
                Miniport = v39;
              }
              if ( v22 - (unsigned int)v23 >= 2 )
              {
                LODWORD(v23) = v23 + 2;
                *(_WORD *)v24 = 45;
                v24 += 2;
                v22 = v41[0];
              }
              if ( v22 - (unsigned int)v23 >= 8 )
                *(_QWORD *)v24 = *(_QWORD *)(*((_QWORD *)Miniport->Reserved4.Buffer + 1)
                                           + 2 * (((unsigned __int64)*Miniport->Reserved4.Buffer - 8) >> 1));
              if ( (unsigned __int8)byte_1C009961D >= 4u )
                WPP_SF_qq(0xD2u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, Miniport, v41);
              p_Length = v41;
              v32 = 536;
              break;
            case 536:
              v15 = 34;
              if ( v7->bNdisIsProvider )
                p_Length = &v12->ifPhysAddress.Length;
              else
                v14 = 16843010;
              v32 = 570;
              break;
            case 570:
              v15 = 516;
              v32 = 1086;
              v31 = 1;
              if ( v7->ifL2NetworkInfo )
              {
                p_Length = &v7->ifL2NetworkInfo->Length;
              }
              else
              {
                if ( v10 < 516 )
                  goto LABEL_29;
                memset(v8, 0, 0x204uLL);
                v8 += 516;
                v9 = 1086;
                v10 -= 516;
              }
              break;
            default:
              goto LABEL_29;
          }
        }
        else
        {
          v15 = 16;
          p_Length = &v7->NetworkGuid;
          v32 = 16;
        }
        if ( v10 < (int)v15 )
          goto LABEL_29;
        if ( v14 )
        {
          ProviderIfContext = v12->ProviderIfContext;
          QueryObjectHandler = v12->ProviderHandle->ProviderCharacteristics.QueryObjectHandler;
          v35 = v15;
          if ( QueryObjectHandler(ProviderIfContext, v14, &v35, v8) )
          {
            v30 = v8;
            goto LABEL_64;
          }
          if ( v35 < v15 )
          {
            v15 -= v35;
            v30 = &v8[v35];
LABEL_64:
            memset(v30, 0, v15);
          }
        }
        else
        {
          if ( !p_Length )
          {
LABEL_29:
            v11 = 1;
            v31 = 1;
            goto LABEL_22;
          }
          memmove(v8, p_Length, v15);
        }
        v16 = v32 - v9;
        v9 = v32;
        v8 += v16;
        v11 = v31;
        v10 -= v16;
LABEL_22:
        v7 = v37;
        if ( v10 <= 0 )
          goto LABEL_23;
      }
    }
    v17 = v9 - *((_DWORD *)v3 + 13);
    *((_DWORD *)v3 + 12) = v17;
    if ( !v17 )
      v4 = -1073741811;
  }
  else
  {
    *((_DWORD *)v3 + 12) = 0;
  }
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qqqL(0x4Du, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, v7, v5, v3, v4);
  return v4;
}

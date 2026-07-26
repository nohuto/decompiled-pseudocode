/*
 * XREFs of ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B9F64
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000D6B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E3F0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRwInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  struct _NM_REQUEST_GET_PARAMETER *v3; // r15
  unsigned int v4; // edi
  struct _NDIS_IF_BLOCK *v5; // r8
  struct _NDIS_IF_BLOCK *v6; // rbx
  struct _NDIS_IF_BLOCK *v7; // r13
  int v8; // edx
  int v9; // r14d
  char v10; // al
  char *v11; // r15
  _WORD *p_NetworkGuid; // rbx
  unsigned int v13; // r12d
  int v14; // esi
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  int v17; // r14d
  void *ProviderIfContext; // rcx
  int (__fastcall *QueryObjectHandler)(void *, unsigned int, unsigned int *, void *); // rax
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  __int64 v22; // rsi
  unsigned __int16 v23; // cx
  _WORD *v24; // r13
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdx
  unsigned int Interrupt_low; // eax
  const void *v27; // rdx
  __int64 v28; // rbx
  char *v29; // rcx
  char v30; // [rsp+30h] [rbp-D0h]
  int v31; // [rsp+34h] [rbp-CCh]
  int v32; // [rsp+38h] [rbp-C8h]
  void *v33; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_IF_BLOCK *v34; // [rsp+48h] [rbp-B8h]
  _NDIS_MINIPORT_BLOCK *v35; // [rsp+50h] [rbp-B0h]
  struct _NDIS_IF_BLOCK *v36; // [rsp+58h] [rbp-A8h]
  struct _NM_REQUEST_GET_PARAMETER *v37; // [rsp+60h] [rbp-A0h]
  struct _NDIS_IF_BLOCK *v38; // [rsp+68h] [rbp-98h]
  _WORD v39[264]; // [rsp+70h] [rbp-90h] BYREF

  v3 = a3;
  v37 = a3;
  v4 = 0;
  v38 = a2;
  v36 = a1;
  v5 = a2;
  v6 = a2;
  if ( !a2 )
    v5 = a1;
  v7 = a1;
  v34 = v5;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
  {
    WPP_SF_qqq(0x4Cu, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2, v3);
    v5 = v34;
  }
  v8 = *((_DWORD *)v3 + 12);
  v9 = *((_DWORD *)v3 + 13);
  v31 = v8;
  v33 = (void *)*((_QWORD *)v3 + 5);
  if ( !v33 )
  {
    *((_DWORD *)v3 + 12) = 0;
    goto LABEL_25;
  }
  v10 = 0;
  v30 = 0;
  if ( v8 <= 0 )
    goto LABEL_24;
  v11 = (char *)v33;
  while ( !v10 )
  {
    v32 = 0;
    p_NetworkGuid = 0LL;
    switch ( v9 )
    {
      case 0:
        v13 = 16;
        p_NetworkGuid = &v7->NetworkGuid;
        v14 = 16;
LABEL_36:
        v15 = 0;
        break;
      case 16:
        v14 = 20;
        v15 = 66184;
        v13 = 4;
        break;
      case 20:
        v13 = 516;
        if ( v7->bNdisIsProvider )
        {
          if ( v7->IsNdisFilter )
          {
            Miniport = v7->Miniport;
            v35 = Miniport;
            if ( (unsigned __int8)byte_1C009875D >= 4u )
              WPP_SF_qq(0xD1u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, Miniport, v39);
            memset(v39, 0, 0x204uLL);
            v39[0] = LOWORD(Miniport->BaseMiniport->Interrupt)
                   + *(_WORD *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL)
                   + 12;
            if ( v39[0] > 0x200u )
              v39[0] = 512;
            memmove(
              &v39[1],
              (const void *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 598LL),
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL));
            v22 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL);
            v23 = v39[0];
            v24 = (_WORD *)((char *)&v39[1] + v22);
            if ( v39[0] - (unsigned int)v22 >= 2 )
            {
              LODWORD(v22) = v22 + 2;
              *v24++ = 45;
              v23 = v39[0];
            }
            if ( v23 > (unsigned int)v22 )
            {
              BaseMiniport = Miniport->BaseMiniport;
              Interrupt_low = LOWORD(BaseMiniport->Interrupt);
              v27 = *(const void **)&BaseMiniport->Flags;
              if ( v23 - (unsigned int)v22 <= Interrupt_low )
                Interrupt_low = v23 - (_DWORD)v22;
              v28 = Interrupt_low;
              memmove(v24, v27, Interrupt_low);
              v23 = v39[0];
              v24 = (_WORD *)((char *)v24 + v28);
              LODWORD(v22) = v28 + v22;
              Miniport = v35;
            }
            if ( v23 - (unsigned int)v22 >= 2 )
            {
              LODWORD(v22) = v22 + 2;
              *v24++ = 45;
              v23 = v39[0];
            }
            if ( v23 - (unsigned int)v22 >= 8 )
              *(_QWORD *)v24 = *(_QWORD *)(*((_QWORD *)Miniport->Reserved4.Buffer + 1)
                                         + 2 * (((unsigned __int64)*Miniport->Reserved4.Buffer - 8) >> 1));
            if ( (unsigned __int8)byte_1C009875D >= 4u )
              WPP_SF_qq(0xD2u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, Miniport, v39);
            v7 = v36;
            p_NetworkGuid = v39;
            v8 = v31;
          }
          else
          {
            p_NetworkGuid = &v7->ifAlias.Length;
          }
        }
        else
        {
          v32 = 66185;
        }
        v15 = v32;
        v14 = 536;
        break;
      case 536:
        v13 = 34;
        v14 = 570;
        v15 = v7->bNdisIsProvider == 0 ? 0x1010102 : 0;
        p_NetworkGuid = (_WORD *)((unsigned __int64)&v5->ifPhysAddress & -(__int64)(v7->bNdisIsProvider != 0));
        break;
      case 570:
        v13 = 516;
        v30 = 1;
        v14 = 1086;
        if ( v7->ifL2NetworkInfo )
        {
          p_NetworkGuid = &v7->ifL2NetworkInfo->Length;
          goto LABEL_36;
        }
        if ( v8 < 516 )
          goto LABEL_28;
        memset(v11, 0, 0x204uLL);
        v11 += 516;
        v9 = 1086;
        v8 = v31 - 516;
        v15 = 0;
        v31 -= 516;
        break;
      default:
        goto LABEL_28;
    }
    if ( v8 < (int)v13 )
      goto LABEL_28;
    if ( v15 )
    {
      ProviderIfContext = v34->ProviderIfContext;
      QueryObjectHandler = v34->ProviderHandle->ProviderCharacteristics.QueryObjectHandler;
      LODWORD(v33) = v13;
      if ( QueryObjectHandler(ProviderIfContext, v15, (unsigned int *)&v33, v11) )
      {
        v29 = v11;
        goto LABEL_61;
      }
      if ( (unsigned int)v33 < v13 )
      {
        v13 -= (unsigned int)v33;
        v29 = &v11[(unsigned int)v33];
LABEL_61:
        memset(v29, 0, v13);
      }
    }
    else
    {
      if ( !p_NetworkGuid )
      {
LABEL_28:
        v10 = 1;
        v30 = 1;
        goto LABEL_22;
      }
      memmove(v11, p_NetworkGuid, v13);
    }
    v16 = v14 - v9;
    v9 = v14;
    v11 += v16;
    v10 = v30;
    v8 = v31 - v16;
    v31 -= v16;
LABEL_22:
    v5 = v34;
    if ( v8 <= 0 )
      break;
  }
  v3 = v37;
  v6 = v38;
LABEL_24:
  v17 = v9 - *((_DWORD *)v3 + 13);
  *((_DWORD *)v3 + 12) = v17;
  v4 = v17 == 0 ? 0xC000000D : 0;
LABEL_25:
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qqqL(0x4Du, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, v7, v6, v3, v4);
  return v4;
}

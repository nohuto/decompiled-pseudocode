/*
 * XREFs of ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00A4804
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0006B60 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00084A0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004457C (WPP_SF_qqqL.c)
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
  size_t v26; // r8
  unsigned int Interrupt_low; // eax
  const void *v28; // rdx
  __int64 v29; // rbx
  char *v30; // rcx
  char v31; // [rsp+30h] [rbp-D0h]
  int v32; // [rsp+34h] [rbp-CCh]
  int v33; // [rsp+38h] [rbp-C8h]
  unsigned int v34; // [rsp+3Ch] [rbp-C4h] BYREF
  void *v35; // [rsp+40h] [rbp-C0h]
  struct _NDIS_IF_BLOCK *v36; // [rsp+48h] [rbp-B8h]
  _NDIS_MINIPORT_BLOCK *v37; // [rsp+50h] [rbp-B0h]
  struct _NDIS_IF_BLOCK *v38; // [rsp+58h] [rbp-A8h]
  struct _NM_REQUEST_GET_PARAMETER *v39; // [rsp+60h] [rbp-A0h]
  struct _NDIS_IF_BLOCK *v40; // [rsp+68h] [rbp-98h]
  _WORD v41[264]; // [rsp+70h] [rbp-90h] BYREF

  v3 = a3;
  v39 = a3;
  v4 = 0;
  v40 = a2;
  v38 = a1;
  v5 = a2;
  v6 = a2;
  if ( !a2 )
    v5 = a1;
  v7 = a1;
  v36 = v5;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
  {
    WPP_SF_qqq(0x4Cu, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1, a2, v3);
    v5 = v36;
  }
  v8 = *((_DWORD *)v3 + 12);
  v9 = *((_DWORD *)v3 + 13);
  v32 = v8;
  v35 = (void *)*((_QWORD *)v3 + 5);
  if ( !v35 )
  {
    *((_DWORD *)v3 + 12) = 0;
    goto LABEL_25;
  }
  v10 = 0;
  v31 = 0;
  if ( v8 <= 0 )
    goto LABEL_24;
  v11 = (char *)v35;
  while ( !v10 )
  {
    v33 = 0;
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
            v37 = Miniport;
            if ( (unsigned __int8)byte_1C009261D >= 4u )
              WPP_SF_qq(0xD1u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, Miniport, v41);
            memset(v41, 0, 0x204uLL);
            v41[0] = LOWORD(Miniport->BaseMiniport->Interrupt)
                   + *(_WORD *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL)
                   + 12;
            if ( v41[0] > 0x200u )
              v41[0] = 512;
            memmove(
              &v41[1],
              (const void *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 598LL),
              *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL));
            v22 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4064LL) + 596LL);
            v23 = v41[0];
            v24 = (_WORD *)((char *)&v41[1] + v22);
            if ( v41[0] - (unsigned int)v22 >= 2 )
            {
              LODWORD(v22) = v22 + 2;
              *v24++ = 45;
              v23 = v41[0];
            }
            if ( v23 > (unsigned int)v22 )
            {
              BaseMiniport = Miniport->BaseMiniport;
              v26 = v23 - (unsigned int)v22;
              Interrupt_low = LOWORD(BaseMiniport->Interrupt);
              v28 = *(const void **)&BaseMiniport->Flags;
              if ( (unsigned int)v26 > Interrupt_low )
                v26 = Interrupt_low;
              LODWORD(v35) = v26;
              v29 = (unsigned int)v26;
              memmove(v24, v28, v26);
              v23 = v41[0];
              v24 = (_WORD *)((char *)v24 + v29);
              LODWORD(v22) = (_DWORD)v35 + v22;
              Miniport = v37;
            }
            if ( v23 - (unsigned int)v22 >= 2 )
            {
              LODWORD(v22) = v22 + 2;
              *v24++ = 45;
              v23 = v41[0];
            }
            if ( v23 - (unsigned int)v22 >= 8 )
              *(_QWORD *)v24 = *(_QWORD *)(*((_QWORD *)Miniport->Reserved4.Buffer + 1)
                                         + 2 * (((unsigned __int64)*Miniport->Reserved4.Buffer - 8) >> 1));
            if ( (unsigned __int8)byte_1C009261D >= 4u )
              WPP_SF_qq(0xD2u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, Miniport, v41);
            v7 = v38;
            p_NetworkGuid = v41;
            v8 = v32;
          }
          else
          {
            p_NetworkGuid = &v7->ifAlias.Length;
          }
        }
        else
        {
          v33 = 66185;
        }
        v15 = v33;
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
        v31 = 1;
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
        v8 = v32 - 516;
        v15 = 0;
        v32 -= 516;
        break;
      default:
        goto LABEL_28;
    }
    if ( v8 < (int)v13 )
      goto LABEL_28;
    if ( v15 )
    {
      ProviderIfContext = v36->ProviderIfContext;
      QueryObjectHandler = v36->ProviderHandle->ProviderCharacteristics.QueryObjectHandler;
      v34 = v13;
      if ( QueryObjectHandler(ProviderIfContext, v15, &v34, v11) )
      {
        v30 = v11;
        goto LABEL_61;
      }
      if ( v34 < v13 )
      {
        v13 -= v34;
        v30 = &v11[v34];
LABEL_61:
        memset(v30, 0, v13);
      }
    }
    else
    {
      if ( !p_NetworkGuid )
      {
LABEL_28:
        v10 = 1;
        v31 = 1;
        goto LABEL_22;
      }
      memmove(v11, p_NetworkGuid, v13);
    }
    v16 = v14 - v9;
    v9 = v14;
    v11 += v16;
    v10 = v31;
    v8 = v32 - v16;
    v32 -= v16;
LABEL_22:
    v5 = v36;
    if ( v8 <= 0 )
      break;
  }
  v3 = v39;
  v6 = v40;
LABEL_24:
  v17 = v9 - *((_DWORD *)v3 + 13);
  *((_DWORD *)v3 + 12) = v17;
  v4 = v17 == 0 ? 0xC000000D : 0;
LABEL_25:
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qqqL(0x4Du, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, v7, v6, v3, v4);
  return v4;
}

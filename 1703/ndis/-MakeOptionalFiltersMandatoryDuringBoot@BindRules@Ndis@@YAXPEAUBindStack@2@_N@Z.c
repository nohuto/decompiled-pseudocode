/*
 * XREFs of ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00B3D64
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B2734 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00B338C (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     WPP_SF__guid_D @ 0x1C0078070 (WPP_SF__guid_D_ea_1C0078070.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F139C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot(
        Ndis::BindRules *this,
        struct Ndis::BindStack *a2)
{
  int v2; // r15d
  enum BINDING_ENABLED_OR_DISABLED v3; // r12d
  __int64 v4; // r14
  __int64 v6; // rsi
  _DWORD *v7; // rbx
  int v8; // r8d
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r8d
  char v13; // al
  int v14; // r15d
  __int64 i; // r14
  __int64 v16; // rsi
  _DWORD *v17; // rdi
  int v18; // r8d
  _DWORD *v19; // rdi
  int v20; // r8d
  unsigned __int16 v21; // cx
  bool v22; // cf
  __int64 v23; // [rsp+28h] [rbp-89h]
  _QWORD v24[20]; // [rsp+38h] [rbp-79h] BYREF

  v2 = *((_DWORD *)this + 5);
  v3 = BindingEnabled;
  v4 = 0LL;
  LOBYTE(v23) = (_BYTE)a2;
  while ( (_DWORD)v4 != v2 )
  {
    if ( (unsigned int)v4 >= *((_DWORD *)this + 5) )
      __fastfail(0xBAD0FFu);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * v4);
    if ( v7[13] || v7[7] )
    {
      if ( (_BYTE)a2 )
      {
        if ( v3 )
        {
          if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v6 + 8 * v4), v3, Reason_MissingOptionalFilter)
            && (unsigned __int8)byte_1C0092623 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v4),
              (struct NDIS_PNPTRACE_LOCALS *)v24);
            if ( (unsigned __int8)byte_1C0092623 >= 4u )
            {
              v21 = 42;
              goto LABEL_54;
            }
          }
          goto LABEL_55;
        }
        v8 = v7[8];
        v7[8] = v8 & 0xFFFFFFBF;
        if ( (v8 != 0) == ((v8 & 0xFFFFFFBF) != 0) && *(_QWORD *)v7 )
        {
          v9 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0092623 >= 5u )
          {
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v8 & 0xFFFFFFBF);
            LOBYTE(a2) = v23;
          }
          *(_BYTE *)(*(_QWORD *)v7 + 5240LL) = 1;
          v9 = 1;
        }
        if ( v9 && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v4),
            (struct NDIS_PNPTRACE_LOCALS *)v24);
          if ( (unsigned __int8)byte_1C0092623 >= 4u )
          {
            v21 = 41;
            goto LABEL_54;
          }
          goto LABEL_55;
        }
LABEL_11:
        if ( !(_BYTE)a2 )
          goto LABEL_14;
        v10 = *(_QWORD *)(v6 + 8 * v4);
        v11 = *(_QWORD *)(v10 + 80);
        if ( (*(_DWORD *)(v11 + 48) & 0x11) == 1 && !*(_QWORD *)(v11 + 64) )
        {
          if ( (unsigned __int8)byte_1C0092623 >= 5u )
            WPP_SF__guid_D(0x2Cu, v10, v11 + 32, *(_DWORD *)(v10 + 88));
          v3 = BindingDisabled;
        }
        goto LABEL_13;
      }
      if ( v3 == BindingEnabled )
      {
        v12 = v7[8];
        v7[8] = v12 & 0xFFFFFFBF;
        if ( (v12 != 0) == ((v12 & 0xFFFFFFBF) != 0) && *(_QWORD *)v7 )
        {
          v13 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0092623 >= 5u )
          {
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v12, v12 & 0xFFFFFFBF);
            LOBYTE(a2) = v23;
          }
          *(_BYTE *)(*(_QWORD *)v7 + 5240LL) = 1;
          v13 = 1;
        }
        if ( v13 && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * v4),
            (struct NDIS_PNPTRACE_LOCALS *)v24);
          if ( (unsigned __int8)byte_1C0092623 >= 4u )
          {
            v21 = 43;
LABEL_54:
            WPP_SF_Zq(v21, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v24[1], v24[0], v23);
LABEL_55:
            LOBYTE(a2) = v23;
            goto LABEL_11;
          }
LABEL_13:
          LOBYTE(a2) = v23;
        }
      }
    }
LABEL_14:
    v4 = (unsigned int)(v4 + 1);
  }
  v14 = *((_DWORD *)this + 1);
  for ( i = 0LL; (_DWORD)i != v14; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 1) )
      __fastfail(0xBAD0FFu);
    v16 = *((_QWORD *)this + 1);
    if ( (_BYTE)a2 )
    {
      if ( v3 )
      {
        if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v16 + 8 * i), v3, Reason_MissingOptionalFilter)
          && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          WPP_SF_Zq(
            0x2Eu,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * i) + 80LL) + 32LL),
            **(_QWORD **)(v16 + 8 * i),
            v23);
        }
      }
      else
      {
        v17 = *(_DWORD **)(v16 + 8 * i);
        v18 = v17[8];
        v17[8] = v18 & 0xFFFFFFBF;
        if ( (v18 != 0) != ((v18 & 0xFFFFFFBF) != 0) || !*(_QWORD *)v17 )
        {
          if ( (unsigned __int8)byte_1C0092623 >= 5u )
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v18, v18 & 0xFFFFFFBF);
          v22 = (unsigned __int8)byte_1C0092623 < 4u;
          *(_BYTE *)(*(_QWORD *)v17 + 5240LL) = 1;
          if ( !v22 )
            WPP_SF_Zq(
              0x2Du,
              &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * i) + 80LL) + 32LL),
              **(_QWORD **)(v16 + 8 * i),
              v23);
        }
      }
    }
    else if ( v3 == BindingEnabled )
    {
      v19 = *(_DWORD **)(v16 + 8 * i);
      v20 = v19[8];
      v19[8] = v20 & 0xFFFFFFBF;
      if ( (v20 != 0) != ((v20 & 0xFFFFFFBF) != 0) || !*(_QWORD *)v19 )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v20, v20 & 0xFFFFFFBF);
        v22 = (unsigned __int8)byte_1C0092623 < 4u;
        *(_BYTE *)(*(_QWORD *)v19 + 5240LL) = 1;
        if ( !v22 )
          WPP_SF_Zq(
            0x2Fu,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * i) + 80LL) + 32LL),
            **(_QWORD **)(v16 + 8 * i),
            v23);
      }
    }
    LOBYTE(a2) = v23;
  }
}

/*
 * XREFs of ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00B3F70
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
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x1C00B36A4 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F139C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindOnDetach(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r14d
  enum BINDING_ENABLED_OR_DISABLED v3; // r12d
  __int64 i; // rbp
  __int64 v6; // rsi
  _DWORD *v7; // rbx
  int v8; // r8d
  char v9; // al
  __int64 v10; // rdx
  int v11; // ebp
  __int64 j; // rbx
  __int64 v13; // r14
  _DWORD *v14; // rsi
  int v15; // r8d
  unsigned __int16 v16; // cx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  bool v20; // cf
  _QWORD v21[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((_DWORD *)this + 5);
  v3 = BindingEnabled;
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 5) )
      __fastfail(0xBAD0FFu);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    if ( v7[13] || v7[7] )
    {
      if ( v3 )
      {
        if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v6 + 8 * i), v3, Reason_UnbindOnDetach)
          && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v21);
          if ( (unsigned __int8)byte_1C0092623 >= 4u )
          {
            v16 = 54;
LABEL_32:
            WPP_SF_Zq(v16, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v21[1], v21[0]);
          }
        }
      }
      else
      {
        v8 = v7[8];
        v7[8] = v8 & 0xFFFFFBFF;
        if ( (v8 != 0) == ((v8 & 0xFFFFFBFF) != 0) && *(_QWORD *)v7 )
        {
          v9 = 0;
        }
        else
        {
          if ( (unsigned __int8)byte_1C0092623 >= 5u )
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v8 & 0xFFFFFBFF);
          *(_BYTE *)(*(_QWORD *)v7 + 5240LL) = 1;
          v9 = 1;
        }
        if ( v9 )
        {
          if ( (unsigned __int8)byte_1C0092623 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v21);
            if ( (unsigned __int8)byte_1C0092623 >= 4u )
            {
              v16 = 53;
              goto LABEL_32;
            }
          }
        }
      }
      v10 = *(_QWORD *)(v6 + 8 * i);
      if ( (*(_DWORD *)(*(_QWORD *)(v10 + 80) + 48LL) & 8) != 0 )
      {
        if ( *(_DWORD *)(v10 + 32) )
        {
          LOBYTE(v17) = Ndis::BindState::GetActualBindingState(*(Ndis::BindState **)(v6 + 8 * i));
          if ( !v17 )
          {
            v3 = BindingDisabled;
            if ( (unsigned __int8)byte_1C0092623 >= 5u )
              WPP_SF__guid_D(0x37u, v18, v19 + 32, *(_DWORD *)(v18 + 88));
          }
        }
      }
      continue;
    }
  }
  v11 = *((_DWORD *)this + 1);
  for ( j = 0LL; (_DWORD)j != v11; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *((_DWORD *)this + 1) )
      __fastfail(0xBAD0FFu);
    v13 = *((_QWORD *)this + 1);
    if ( v3 )
    {
      if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v13 + 8 * j), v3, Reason_UnbindOnDetach)
        && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        WPP_SF_Zq(
          0x39u,
          &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
          *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v13 + 8 * j) + 80LL) + 32LL),
          **(_QWORD **)(v13 + 8 * j));
      }
    }
    else
    {
      v14 = *(_DWORD **)(v13 + 8 * j);
      v15 = v14[8];
      v14[8] = v15 & 0xFFFFFBFF;
      if ( (v15 != 0) != ((v15 & 0xFFFFFBFF) != 0) || !*(_QWORD *)v14 )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v15, v15 & 0xFFFFFBFF);
        v20 = (unsigned __int8)byte_1C0092623 < 4u;
        *(_BYTE *)(*(_QWORD *)v14 + 5240LL) = 1;
        if ( !v20 )
          WPP_SF_Zq(
            0x38u,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v13 + 8 * j) + 80LL) + 32LL),
            **(_QWORD **)(v13 + 8 * j));
      }
    }
  }
}

/*
 * XREFs of ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD79C
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BBD08 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BCBB8 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF__guid_D @ 0x1C007D154 (WPP_SF__guid_D_ea_1C007D154.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x1C00BCEE0 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD3B4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindOnDetach(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  enum BINDING_ENABLED_OR_DISABLED v3; // r15d
  unsigned __int64 i; // rbx
  __int64 v6; // rsi
  _DWORD *v7; // rdi
  int v8; // r8d
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // r14
  unsigned __int64 j; // rbx
  __int64 v13; // rsi
  _DWORD *v14; // rdi
  int v15; // r8d
  unsigned __int16 v16; // cx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  bool v20; // cf
  _QWORD v21[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = BindingEnabled;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    if ( v7[13] || v7[7] )
    {
      if ( v3 )
      {
        if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v6 + 8 * i), v3, Reason_UnbindOnDetach)
          && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v21);
          if ( (unsigned __int8)byte_1C0099623 >= 4u )
          {
            v16 = 54;
LABEL_32:
            WPP_SF_Zq(v16, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v21[1], v21[0]);
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
          if ( (unsigned __int8)byte_1C0099623 >= 5u )
            WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v8, v8 & 0xFFFFFBFF);
          *(_BYTE *)(*(_QWORD *)v7 + 5240LL) = 1;
          v9 = 1;
        }
        if ( v9 )
        {
          if ( (unsigned __int8)byte_1C0099623 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
              (struct NDIS_PNPTRACE_LOCALS *)v21);
            if ( (unsigned __int8)byte_1C0099623 >= 4u )
            {
              v16 = 53;
              goto LABEL_32;
            }
          }
        }
      }
      v10 = *(_QWORD *)(v6 + 8 * i);
      if ( (*(_DWORD *)(*(_QWORD *)(v10 + 80) + 40LL) & 8) != 0 )
      {
        if ( *(_DWORD *)(v10 + 32) )
        {
          LOBYTE(v17) = Ndis::BindState::GetActualBindingState(*(Ndis::BindState **)(v6 + 8 * i));
          if ( !v17 )
          {
            v3 = BindingDisabled;
            if ( (unsigned __int8)byte_1C0099623 >= 5u )
              WPP_SF__guid_D(0x37u, v18, v19 + 24, *(_DWORD *)(v18 + 88));
          }
        }
      }
      continue;
    }
  }
  v11 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v11; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      __fastfail(5u);
    v13 = *((_QWORD *)this + 1);
    v14 = *(_DWORD **)(v13 + 8 * j);
    if ( v3 )
    {
      if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(v13 + 8 * j), v3, Reason_UnbindOnDetach)
        && (unsigned __int8)byte_1C0099623 >= 4u )
      {
        WPP_SF_Zq(
          0x39u,
          &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
          *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v13 + 8 * j) + 80LL) + 24LL),
          **(_QWORD **)(v13 + 8 * j));
      }
    }
    else
    {
      v15 = v14[8];
      v14[8] = v15 & 0xFFFFFBFF;
      if ( (v15 != 0) != ((v15 & 0xFFFFFBFF) != 0) || !*(_QWORD *)v14 )
      {
        if ( (unsigned __int8)byte_1C0099623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v15, v15 & 0xFFFFFBFF);
        v20 = (unsigned __int8)byte_1C0099623 < 4u;
        *(_BYTE *)(*(_QWORD *)v14 + 5240LL) = 1;
        if ( !v20 )
          WPP_SF_Zq(
            0x38u,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v13 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v13 + 8 * j));
      }
    }
  }
}

/*
 * XREFs of ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00B4AC0
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B2734 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00B338C (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForVBusDependency(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r15d
  __int64 i; // rdi
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rcx
  bool v8; // zf
  char v9; // cl
  int v10; // r8d
  bool v11; // cf

  v2 = *((_DWORD *)this + 1);
  for ( i = 0LL; (_DWORD)i != v2; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 1) )
      __fastfail(0xBAD0FFu);
    v5 = *((_QWORD *)this + 1);
    v6 = *(_QWORD *)(v5 + 8 * i);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 80) + 48LL);
    if ( v7 )
    {
      v8 = (*(_DWORD *)(v7 + 64) & 0x10000000) == 0;
      v9 = 1;
      if ( !v8 )
        v9 = byte_1C0092118;
      if ( v9 )
      {
        v10 = *(_DWORD *)(v6 + 32);
        *(_DWORD *)(v6 + 32) = v10 & 0xFFDFFFFF;
        if ( (v10 != 0) != ((v10 & 0xFFDFFFFF) != 0) || !*(_QWORD *)v6 )
        {
          if ( (unsigned __int8)byte_1C0092623 >= 5u )
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v10, v10 & 0xFFDFFFFF);
          v11 = (unsigned __int8)byte_1C0092623 < 4u;
          *(_BYTE *)(*(_QWORD *)v6 + 5240LL) = 1;
          if ( !v11 )
            WPP_SF_Zq(
              0x13u,
              &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 32LL),
              **(_QWORD **)(v5 + 8 * i));
        }
      }
      else if ( Ndis::BindState::SetBinding(
                  *(Ndis::BindState **)(v5 + 8 * i),
                  BindingDisabled,
                  Reason_ProtocolDependsOnVBus)
             && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        WPP_SF_Zq(
          0x14u,
          &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
          *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 32LL),
          **(_QWORD **)(v5 + 8 * i));
      }
    }
  }
}

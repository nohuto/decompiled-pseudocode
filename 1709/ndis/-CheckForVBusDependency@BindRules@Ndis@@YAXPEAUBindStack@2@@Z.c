/*
 * XREFs of ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD35C
 * Callers:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BBB74 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC16C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckForVBusDependency(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // rbp
  unsigned __int64 i; // rbx
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  bool v8; // zf
  char DeviceObjectExtension; // cl
  int v10; // r8d
  bool v11; // cf

  v2 = *((unsigned int *)this + 1);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 1) )
      __fastfail(5u);
    v5 = *((_QWORD *)this + 1);
    v6 = *(_QWORD *)(v5 + 8 * i);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 80) + 40LL);
    if ( v7 )
    {
      v8 = (*(_DWORD *)(v7 + 64) & 0x10000000) == 0;
      DeviceObjectExtension = 1;
      if ( !v8 )
        DeviceObjectExtension = (char)WPP_MAIN_CB.DeviceObjectExtension;
      if ( DeviceObjectExtension )
      {
        v10 = *(_DWORD *)(v6 + 32);
        *(_DWORD *)(v6 + 32) = v10 & 0xFFDFFFFF;
        if ( (v10 != 0) != ((v10 & 0xFFDFFFFF) != 0) || !*(_QWORD *)v6 )
        {
          if ( (unsigned __int8)byte_1C0098763 >= 5u )
            WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v10, v10 & 0xFFDFFFFF);
          v11 = (unsigned __int8)byte_1C0098763 < 4u;
          *(_BYTE *)(*(_QWORD *)v6 + 5240LL) = 1;
          if ( !v11 )
            WPP_SF_Zq(
              0x13u,
              &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 24LL),
              **(_QWORD **)(v5 + 8 * i));
        }
      }
      else if ( Ndis::BindState::SetBinding(
                  *(Ndis::BindState **)(v5 + 8 * i),
                  BindingDisabled,
                  Reason_ProtocolDependsOnVBus)
             && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        WPP_SF_Zq(
          0x14u,
          &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
          *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 80LL) + 24LL),
          **(_QWORD **)(v5 + 8 * i));
      }
    }
  }
}

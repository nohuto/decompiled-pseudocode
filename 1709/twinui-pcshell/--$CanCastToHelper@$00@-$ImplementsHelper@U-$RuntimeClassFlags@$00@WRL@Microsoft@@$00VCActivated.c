/*
 * XREFs of ??$CanCastToHelper@$00@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00VCActivatedEventArgsBase@@UIApplicationViewActivatedEventArgs@Activation@ApplicationModel@Windows@@UIViewSwitcherProvider@678@U?$CloakedIid@UIInitializeApplicationViewActivatedEventArgs@Activation@ApplicationModel@Windows@@@23@U?$CloakedIid@UIMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801CE724
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@VNil@Details@23@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UIWeakReferenceSource@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@9ApplicationModel@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801CE5F0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@VNil@Details@23@VCActi.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeApplicationViewActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>::CanCastToHelper<1>(
        char *a1,
        __int64 a2,
        void **a3)
{
  char *v3; // r10
  char *v4; // rcx
  char *v5; // rcx
  unsigned int v6; // r11d
  unsigned int v7; // ecx
  int v8; // r9d
  int CanCastTo; // eax
  void *v11; // r9

  v3 = a1;
  if ( *(_DWORD *)a2 == -815458541
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_cf651713_cd08_4fd8_b697_a281b6544e2e.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  v4 = a1 + 8;
  if ( *(_DWORD *)a2 == 485530526
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c.Data4[4] )
  {
    *a3 = v4;
    return 0LL;
  }
  v5 = v4 + 8;
  v6 = -2147467262;
  if ( *(_DWORD *)a2 == -432202956
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_e63d1b34_5ed4_4edf_8b51_9a260ffd16e9.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_e63d1b34_5ed4_4edf_8b51_9a260ffd16e9.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_e63d1b34_5ed4_4edf_8b51_9a260ffd16e9.Data4[4]
    || (v5 += 8, *(_DWORD *)a2 == 1276687894)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_4c18b616_ff4b_4954_9b2e_8019aff960f1.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_4c18b616_ff4b_4954_9b2e_8019aff960f1.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_4c18b616_ff4b_4954_9b2e_8019aff960f1.Data4[4]
    || (v5 += 8, *(_DWORD *)a2 == -244138313)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_f172beb7_5016_48f3_858b_da6d2000ed58.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_f172beb7_5016_48f3_858b_da6d2000ed58.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_f172beb7_5016_48f3_858b_da6d2000ed58.Data4[4] )
  {
    *a3 = v5;
    v7 = 0;
    v8 = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v5 + 8), (const struct _GUID *)a2, a3);
    v7 = 0;
    v8 = v6;
    if ( CanCastTo >= 0 )
      v8 = 0;
  }
  if ( v8 >= 0 )
    return 0LL;
  v11 = v3 + 136;
  if ( *(_DWORD *)a2 == -1827868853
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data4[4]
    || (v11 = v3 + 144, *(_DWORD *)a2 == 871532710)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data4[4]
    || (v11 = v3 + 152, *(_DWORD *)a2 == 1392539546)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_5300779a_0d50_411c_8c2c_67e5d4155f1f.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_5300779a_0d50_411c_8c2c_67e5d4155f1f.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_5300779a_0d50_411c_8c2c_67e5d4155f1f.Data4[4] )
  {
    *a3 = v11;
  }
  else if ( *(_DWORD *)a2 == 2091404550
         && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data2
         && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data4
         && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data4[4] )
  {
    *a3 = v3 + 160;
  }
  else
  {
    return v6;
  }
  return v7;
}

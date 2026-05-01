/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VCActivatedEventArgsBase@@@Details@23@UIApplicationViewActivatedEventArgs@Activation@ApplicationModel@Windows@@UIViewSwitcherProvider@789@U?$CloakedIid@UIMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F239C
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@@Details@23@UIWeakReferenceSource@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@89Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F2298 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$ImplementsMarker@VC.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$CloakedIid@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@@@23@U?$CloakedIid@UIActivatedEventArgsInternal@Activation@ApplicationModel@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180026550 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00U-$CloakedIid@UIInitial.c)
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsBase>,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // r11
  __int64 result; // rax

  if ( InlineIsEqualGUID(a2, &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e) )
    goto LABEL_10;
  if ( InlineIsEqualGUID(v3, &GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c) )
  {
    *v4 = v5;
    result = 0LL;
  }
  else
  {
    result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>::CanCastTo(
               v5 + 8,
               v6,
               v4);
  }
  if ( (_DWORD)result != -2147467262 )
    return result;
  if ( (a1 += 120LL, *v6 == -1827868853)
    && v6[1] == *(_DWORD *)&GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data2
    && v6[2] == *(_DWORD *)GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data4
    && v6[3] == *(_DWORD *)&GUID_930cef4b_b829_40fc_88f4_8513e8a64738.Data4[4]
    || (a1 += 8LL, *v6 == 871532710)
    && v6[1] == *(_DWORD *)&GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data2
    && v6[2] == *(_DWORD *)GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data4
    && v6[3] == *(_DWORD *)&GUID_33f288a6_5c2c_4d27_bac7_7536088f1219.Data4[4] )
  {
LABEL_10:
    *v4 = a1;
    return 0LL;
  }
  if ( *v6 == 2091404550
    && v6[1] == *(_DWORD *)&GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data2
    && v6[2] == *(_DWORD *)GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data4
    && v6[3] == *(_DWORD *)&GUID_7ca84d06_f54c_4ba8_bd6f_9abaf9380d51.Data4[4] )
  {
    *v4 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}

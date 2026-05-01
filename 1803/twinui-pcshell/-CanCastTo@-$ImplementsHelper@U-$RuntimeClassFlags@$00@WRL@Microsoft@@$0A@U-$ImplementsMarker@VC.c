/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@@Details@23@UIWeakReferenceSource@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@89Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F2298
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2190 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800F2190.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VCActivatedEventArgsBase@@@Details@23@UIApplicationViewActivatedEventArgs@Activation@ApplicationModel@Windows@@UIViewSwitcherProvider@789@U?$CloakedIid@UIMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F239C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00U-$ImplementsMarker@VCA.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsWithPrelaunchAndViewIdBase>,IWeakReferenceSource,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax
  _QWORD *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx

  result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsBase>,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>::CanCastTo();
  if ( (_DWORD)result == -2147467262 )
  {
    if ( *a2 == 205812091
      && a2[1] == *(_DWORD *)&GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data2
      && a2[2] == *(_DWORD *)GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data4
      && a2[3] == *(_DWORD *)&GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data4[4] )
    {
      v6 = a1 + 184;
LABEL_7:
      *v5 = v6;
      return 0LL;
    }
    v7 = a1 + 200;
    if ( *a2 == 56
      && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
      || (v7 = a1 + 208, *a2 == -70697434)
      && a2[1] == *(_DWORD *)&GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data2
      && a2[2] == *(_DWORD *)GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data4
      && a2[3] == *(_DWORD *)&GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data4[4] )
    {
      *v5 = v7;
      return 0LL;
    }
    if ( *a2 == 265518780
      && a2[1] == *(_DWORD *)&GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data2
      && a2[2] == *(_DWORD *)GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data4
      && a2[3] == *(_DWORD *)&GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data4[4] )
    {
      v6 = a1 + 216;
      goto LABEL_7;
    }
    return 2147500034LL;
  }
  return result;
}

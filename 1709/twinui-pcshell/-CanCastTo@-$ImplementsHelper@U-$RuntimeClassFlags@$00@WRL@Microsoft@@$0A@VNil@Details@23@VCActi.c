/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@VNil@Details@23@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UIWeakReferenceSource@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@9ApplicationModel@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801CE5F0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CE3A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivated.c)
 * Callees:
 *     ??$CanCastToHelper@$00@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00VCActivatedEventArgsBase@@UIApplicationViewActivatedEventArgs@Activation@ApplicationModel@Windows@@UIViewSwitcherProvider@678@U?$CloakedIid@UIInitializeApplicationViewActivatedEventArgs@Activation@ApplicationModel@Windows@@@23@U?$CloakedIid@UIMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801CE724 (--$CanCastToHelper@$00@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00VCActivated.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::Nil,CActivatedEventArgsWithPrelaunchAndViewIdBase,IWeakReferenceSource,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::CanCastTo(
        __int64 a1)
{
  int CanCastTo; // eax
  _DWORD *v3; // rdx
  _QWORD *v4; // r8
  unsigned int v5; // r9d
  int v6; // eax
  __int64 v7; // rcx

  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,CActivatedEventArgsBase,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeApplicationViewActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>::CanCastToHelper<1>();
  v5 = 0;
  if ( CanCastTo < 0 )
  {
    if ( *v3 == 205812091
      && v3[1] == *(_DWORD *)&GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data2
      && v3[2] == *(_DWORD *)GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data4
      && v3[3] == *(_DWORD *)&GUID_0c44717b_19f7_48d6_b046_cf22826eaa74.Data4[4] )
    {
      *v4 = a1 + 224;
    }
    else
    {
      if ( *v3 == 928102546
        && v3[1] == *(_DWORD *)&GUID_3751b892_f670_4f8d_af13_9cd405db1f36.Data2
        && v3[2] == *(_DWORD *)GUID_3751b892_f670_4f8d_af13_9cd405db1f36.Data4
        && v3[3] == *(_DWORD *)&GUID_3751b892_f670_4f8d_af13_9cd405db1f36.Data4[4] )
      {
        *v4 = a1 + 232;
        v6 = 0;
      }
      else
      {
        v6 = -2147467262;
      }
      if ( v6 < 0 )
      {
        v7 = a1 + 264;
        if ( *v3 == 56
          && v3[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
          && v3[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
          && v3[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4]
          || (v7 = a1 + 272, *v3 == -70697434)
          && v3[1] == *(_DWORD *)&GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data2
          && v3[2] == *(_DWORD *)GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data4
          && v3[3] == *(_DWORD *)&GUID_fbc93e26_a14a_4b4f_82b0_33bed920af52.Data4[4] )
        {
          *v4 = v7;
        }
        else if ( *v3 == 265518780
               && v3[1] == *(_DWORD *)&GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data2
               && v3[2] == *(_DWORD *)GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data4
               && v3[3] == *(_DWORD *)&GUID_0fd37ebc_9dc9_46b5_9ace_bd95d4565345.Data4[4] )
        {
          *v4 = a1 + 280;
        }
        else
        {
          return (unsigned int)-2147467262;
        }
      }
    }
  }
  return v5;
}

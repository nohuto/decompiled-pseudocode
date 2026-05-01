/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$CloakedIid@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@@@23@U?$CloakedIid@UIActivatedEventArgsInternal@Activation@ApplicationModel@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180026550
 * Callers:
 *     ?QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800278D0 (-QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@VCActivatedEventArgsBase@@@Details@23@UIApplicationViewActivatedEventArgs@Activation@ApplicationModel@Windows@@UIViewSwitcherProvider@789@U?$CloakedIid@UIMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F239C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00U-$ImplementsMarker@VCA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r10
  int IsEqualGUID; // eax
  _QWORD *v5; // r8
  __int64 v6; // r10
  unsigned int v7; // ecx

  if ( *a2 == -1711520541
    && a2[1] == *(_DWORD *)&GUID_99fc44e3_ce9a_4284_bf04_76331d1b1788.Data2
    && a2[2] == *(_DWORD *)GUID_99fc44e3_ce9a_4284_bf04_76331d1b1788.Data4
    && a2[3] == *(_DWORD *)&GUID_99fc44e3_ce9a_4284_bf04_76331d1b1788.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    v3 = a1 + 8;
    if ( *a2 == 1547026376
      && a2[1] == *(_DWORD *)&GUID_5c35bfc8_102e_4cf0_a6e2_c69f88dbed9d.Data2
      && a2[2] == *(_DWORD *)GUID_5c35bfc8_102e_4cf0_a6e2_c69f88dbed9d.Data4
      && a2[3] == *(_DWORD *)&GUID_5c35bfc8_102e_4cf0_a6e2_c69f88dbed9d.Data4[4]
      || (v3 = a1 + 16, *a2 == -1796592748)
      && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
      && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
      && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
    {
      *a3 = v3;
      return 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(a2, &GUID_00000003_0000_0000_c000_000000000046);
      v7 = 0;
      if ( IsEqualGUID )
        *v5 = v6;
      else
        return (unsigned int)-2147467262;
    }
    return v7;
  }
}

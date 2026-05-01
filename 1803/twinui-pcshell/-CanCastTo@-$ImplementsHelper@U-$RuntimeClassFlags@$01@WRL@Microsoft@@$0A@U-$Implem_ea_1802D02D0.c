/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithSite@@@Details@23@U?$ChainInterfaces@UITabletModeViewManagerInternal@@UITabletModeViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIEdgeUiTouchInvocation@@UIEdgeUiMouseInvocation@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802D02D0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModeViewManagerInternal@@UITabletModeViewManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIEdgeUiTouchInvocation@@UIEdgeUiMouseInvocation@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D0DA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802D0DA0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F584C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,Microsoft::WRL::ChainInterfaces<ITabletModeViewManagerInternal,ITabletModeViewManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IEdgeUiTouchInvocation,IEdgeUiMouseInvocation>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int CanCastTo; // r10d
  _DWORD *v4; // r11
  BOOL IsEqualGUID; // eax
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r9

  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::CanCastTo(
                a1,
                a2,
                a3);
  if ( CanCastTo == -2147467262 )
  {
    IsEqualGUID = InlineIsEqualGUID(v4, &GUID_84098f74_87a7_4582_b398_f6c3178e9dd6);
    CanCastTo = 0;
    if ( IsEqualGUID
      || InlineIsEqualGUID(v6, &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3)
      || InlineIsEqualGUID(v9, &GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef) )
    {
      *v7 = v8;
    }
    else if ( InlineIsEqualGUID(v10, &GUID_ae50431b_f86a_4c3c_b11d_2910d9407613) )
    {
      *v11 = v12 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
  }
  return CanCastTo;
}

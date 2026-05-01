/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotification@@UIWeakReferenceSource@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@789Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F2524
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@6789@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F24A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800F24A0.c)
 *     ??$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x180152D50 (--$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager.c)
 *     ??$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801530D0 (--$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007C4EC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIActionCenterExperienc.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  _DWORD *v10; // r10

  if ( InlineIsEqualGUID(a2, &GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_00000038_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v6, &GUID_1ec5d3ef_a8bf_4311_9eeb_33ba50f461fe) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::CanCastTo(
                             v9 + 8,
                             v10);
    }
    return v8;
  }
}

/*
 * XREFs of ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003D338
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x180041168 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180096F04 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1800B4194 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x1800B8530 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1800B8DA0 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1800D56B0 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D5CF8 (-OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D6A70 (-OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800DA3B4 (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?_HandleSelfActivation@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF168 (-_HandleSelfActivation@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18011C358 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___ @ 0x1801DE044 (ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z @ 0x18003D1E8 (-_GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIProperty.c)
 *     ?_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x18003D258 (-_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyV.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BII@AA @ 0x18004700C (--_9IPropertyValueStatics@Foundation@Windows@@$BII@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        char a3)
{
  int PropertyValueFactory; // eax
  __int64 v7; // rdx
  int v8; // ebx
  struct Windows::Foundation::IPropertyValueStatics *v9; // rcx
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // rcx
  int v12; // eax
  struct Windows::Foundation::IPropertyValue *v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // rcx
  struct Windows::Foundation::IPropertyValueStatics *v15; // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // [rsp+20h] [rbp-20h] BYREF
  struct Windows::Foundation::IPropertyValue *v18[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::Foundation::IPropertyValueStatics *v20; // [rsp+78h] [rbp+38h] BYREF

  v18[1] = (struct Windows::Foundation::IPropertyValue *)-2LL;
  v20 = 0LL;
  PropertyValueFactory = Windows::Internal::ShellHelpers::PropertySetHelper::_GetPropertyValueFactory(this, &v20);
  v8 = PropertyValueFactory;
  if ( PropertyValueFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x50,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)PropertyValueFactory);
LABEL_3:
    v9 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValueStatics *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return (unsigned int)v8;
  }
  v17 = 0LL;
  LOBYTE(v7) = a3;
  v10 =  Windows::Foundation::IPropertyValueStatics::`vcall'{136,{flat}}(v20, v7, &v17);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x52,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v10);
LABEL_7:
    v11 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **)))(*v11)[2])(v11);
    }
    goto LABEL_3;
  }
  v18[0] = 0LL;
  v12 = (**v17)(v17, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, v18);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x54,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v12);
    v13 = v18[0];
    goto LABEL_11;
  }
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::_SetPropVal(this, a2, v18[0]);
  v13 = v18[0];
  if ( v8 < 0 )
  {
LABEL_11:
    if ( v13 )
    {
      v18[0] = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_7;
  }
  if ( v18[0] )
  {
    v18[0] = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **)))(*v14)[2])(v14);
  }
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValueStatics *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0;
}

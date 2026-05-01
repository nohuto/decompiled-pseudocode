/*
 * XREFs of ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003C0D8
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x18003F7A8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180092944 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJPEAUHSTRING__@@00HH00E@Z @ 0x1800A7118 (-Reactivate@CShoulderTapExperienceManager@@AEAAJPEAUHSTRING__@@00HH00E@Z.c)
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1800C3890 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C3E68 (-OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C4BF8 (-OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C7F78 (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800F189C (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ActivateExperienceWithPropertySetCore__lambda_7bec014655fe4d535cb5642aa7e0e9b0___ @ 0x18018F5E8 (ActivateExperienceWithPropertySetCore__lambda_7bec014655fe4d535cb5642aa7e0e9b0___.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x18003BFF8 (-_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyV.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BII@AA @ 0x18004617C (--_9IPropertyValueStatics@Foundation@Windows@@$BII@AA.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        char a3)
{
  HRESULT v6; // eax
  int ActivationFactory; // eax
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // rcx
  int v13; // eax
  struct Windows::Foundation::IPropertyValue *v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // [rsp+28h] [rbp-48h] BYREF
  struct Windows::Foundation::IPropertyValue *v20[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v20[1] = (struct Windows::Foundation::IPropertyValue *)-2LL;
  v18 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v18);
  v9 = ActivationFactory;
  string = 0LL;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x49,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)ActivationFactory);
LABEL_5:
    v10 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return (unsigned int)v9;
  }
  v19 = 0LL;
  LOBYTE(v8) = a3;
  v11 =  Windows::Foundation::IPropertyValueStatics::`vcall'{136,{flat}}(v18, v8, &v19);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4B,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v11);
LABEL_9:
    v12 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **)))(*v12)[2])(v12);
    }
    goto LABEL_5;
  }
  v20[0] = 0LL;
  v13 = (**v19)(v19, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, v20);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4D,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v13);
    v14 = v20[0];
    goto LABEL_13;
  }
  v9 = Windows::Internal::ShellHelpers::PropertySetHelper::_SetPropVal(this, a2, v20[0]);
  v14 = v20[0];
  if ( v9 < 0 )
  {
LABEL_13:
    if ( v14 )
    {
      v20[0] = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    goto LABEL_9;
  }
  if ( v20[0] )
  {
    v20[0] = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **)))(*v15)[2])(v15);
  }
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return 0;
}

/*
 * XREFs of ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x18006CC80
 * Callers:
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180061BE0 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1801719EC (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801862DC (-NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x18006D520 (-SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BFA@AA @ 0x1800A55E0 (--_9IPropertyValueStatics@Foundation@Windows@@$BFA@AA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        __int64 a3,
        unsigned int a4)
{
  HRESULT v7; // eax
  int ActivationFactory; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  struct Windows::Foundation::IPropertyValue *v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // rcx
  __int64 v14; // rcx
  struct Windows::Foundation::IPropertyValue *v16; // [rsp+20h] [rbp-50h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // [rsp+28h] [rbp-48h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v18[1] = -2LL;
  v18[0] = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    RaiseException(v7, 1u, 0, 0LL);
    JUMPOUT(0x1800DBD24LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, v18);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)ActivationFactory,
      (int)v16);
  }
  else
  {
    v17 = 0LL;
    v10 =  Windows::Foundation::IPropertyValueStatics::`vcall'{80,{flat}}(v18[0], a4, &v17);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v10,
        (int)v16);
    }
    else
    {
      v16 = 0LL;
      v11 = (**v17)(v17, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v16);
      v9 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54,
          (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v11,
          (int)v16);
      }
      else
      {
        v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetPropVal(this, a2, v16);
        if ( v9 >= 0 )
          v9 = 0;
      }
      v12 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **)))(*v13)[2])(v13);
    }
  }
  v14 = v18[0];
  if ( v18[0] )
  {
    v18[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v9;
}

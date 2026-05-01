/*
 * XREFs of ??$_SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x1800B5468
 * Callers:
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1800B4194 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1800DA1E0 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800DA514 (-NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z @ 0x18003D1E8 (-_GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIProperty.c)
 *     ?_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x18003D258 (-_SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyV.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BFA@AA @ 0x1800B5870 (--_9IPropertyValueStatics@Foundation@Windows@@$BFA@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::_SetValue<int>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        struct Windows::Foundation::IPropertyValue *a3,
        unsigned int a4)
{
  int PropertyValueFactory; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  struct Windows::Foundation::IPropertyValue *v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // rcx
  struct Windows::Foundation::IPropertyValueStatics *v13; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **); // [rsp+20h] [rbp-20h] BYREF
  struct Windows::Foundation::IPropertyValueStatics *v16[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::Foundation::IPropertyValue *v18; // [rsp+70h] [rbp+30h] BYREF

  v18 = a3;
  v16[1] = (struct Windows::Foundation::IPropertyValueStatics *)-2LL;
  v16[0] = 0LL;
  PropertyValueFactory = Windows::Internal::ShellHelpers::PropertySetHelper::_GetPropertyValueFactory(this, v16);
  v8 = PropertyValueFactory;
  if ( PropertyValueFactory >= 0 )
  {
    v15 = 0LL;
    v9 =  Windows::Foundation::IPropertyValueStatics::`vcall'{80,{flat}}(v16[0], a4, &v15);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v18 = 0LL;
      v10 = (**v15)(v15, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v18);
      v8 = v10;
      if ( v10 >= 0 )
      {
        v8 = Windows::Internal::ShellHelpers::PropertySetHelper::_SetPropVal(this, a2, v18);
        if ( v8 >= 0 )
          v8 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x54,
          (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v10);
      }
      v11 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x52,
        (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v9);
    }
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Foundation::IPropertyValue **)))(*v12)[2])(v12);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x50,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)PropertyValueFactory);
  }
  v13 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValueStatics *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)v8;
}

/*
 * XREFs of ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18006D2B0
 * Callers:
 *     _lambda_cc443415f5ecfa248de51aa242c4a017_::operator() @ 0x180003950 (_lambda_cc443415f5ecfa248de51aa242c4a017_--operator().c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064984 (-OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180065C7C (-OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180076730 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x180076D48 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18007C0D4 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@E@Z @ 0x18007F25C (-SetAppActivationResponse@PositionerPropertySetHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___ @ 0x18007F74C (ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___.c)
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1801586E8 (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180165968 (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1801719EC (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x18018618C (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x180186680 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?_HandleSelfActivation@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B20E0 (-_HandleSelfActivation@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BII@AA @ 0x1800A366C (--_9IPropertyValueStatics@Foundation@Windows@@$BII@AA.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  HRESULT v7; // eax
  int ActivationFactory; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v17; // rcx
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-39h]
  _BYTE v21[8]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v22; // [rsp+38h] [rbp-21h] BYREF
  __int64 v23; // [rsp+40h] [rbp-19h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-11h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp+7h] BYREF
  HSTRING string; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v25[1] = -2LL;
  v25[0] = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    RaiseException(v7, 1u, 0, 0LL);
    JUMPOUT(0x1800DBF28LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, v25);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)ActivationFactory,
      v20);
    goto LABEL_15;
  }
  v24 = 0LL;
  v10 =  Windows::Foundation::IPropertyValueStatics::`vcall'{136,{flat}}(v25[0], a4, &v24);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v23 = 0LL;
    v11 = (**v24)(v24, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v23);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v11,
        v20);
    }
    else
    {
      v12 = v23;
      v22 = 0LL;
      if ( *a1 )
      {
        v13 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
                *a1,
                &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
                &v22);
        v9 = v13;
        if ( v13 < 0 )
        {
          v19 = 27LL;
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v22 + 80LL))(
                  v22,
                  a2,
                  v12,
                  v21);
          v9 = v13;
          if ( v13 >= 0 )
          {
            v14 = v22;
            if ( v22 )
            {
              v22 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            }
            goto LABEL_10;
          }
          v19 = 72LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v13,
          v20);
      }
      else
      {
        v9 = -2147467261;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      if ( v9 >= 0 )
LABEL_10:
        v9 = 0;
    }
    v15 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x52,
    (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
    (const char *)(unsigned int)v10,
    v20);
LABEL_13:
  v16 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
  }
LABEL_15:
  v17 = v25[0];
  if ( v25[0] )
  {
    v25[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v9;
}

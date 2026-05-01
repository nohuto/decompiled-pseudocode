/*
 * XREFs of ??$_GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x180018BA4
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180012B3C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z @ 0x180045258 (-_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z.c)
 *     ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF5F4 (-_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18011C358 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x180006810 (-_GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIProper.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BKA@AA @ 0x18001D25C (--_9IPropertyValue@Foundation@Windows@@$BKA@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<_GUID>(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1,
        HSTRING a2,
        struct Windows::Foundation::IPropertyValue *a3,
        __int64 a4)
{
  int PropVal; // ebx
  int v6; // eax
  struct Windows::Foundation::IPropertyValue *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Foundation::IPropertyValue *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  if ( a4 )
  {
    v10 = 0LL;
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::_GetPropVal(a1, a2, &v10);
    if ( PropVal >= 0 )
    {
      v6 =  Windows::Foundation::IPropertyValue::`vcall'{160,{flat}}(v10, a4);
      PropVal = v6;
      if ( v6 >= 0 )
        PropVal = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x2F,
          (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v6);
    }
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  else
  {
    PropVal = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)0x80004003LL);
  }
  return (unsigned int)PropVal;
}

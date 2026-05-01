/*
 * XREFs of ??$_GetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAH@Z1@Z @ 0x1800B9A7C
 * Callers:
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D6638 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x180006810 (-_GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIProper.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BFI@AA @ 0x180046FCC (--_9IPropertyValue@Foundation@Windows@@$BFI@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<int>(
        Windows::Internal::ShellHelpers::PropertySetHelper *a1,
        HSTRING a2,
        struct Windows::Foundation::IPropertyValue *a3,
        __int64 a4)
{
  int PropVal; // ebx
  int v5; // eax
  struct Windows::Foundation::IPropertyValue *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Foundation::IPropertyValue *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  if ( a4 )
  {
    v9 = 0LL;
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::_GetPropVal(a1, a2, &v9);
    if ( PropVal >= 0 )
    {
      v5 =  Windows::Foundation::IPropertyValue::`vcall'{88,{flat}}((__int64)v9);
      PropVal = v5;
      if ( v5 >= 0 )
        PropVal = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x2F,
          (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v5);
    }
    v6 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v6 + 16LL))(v6);
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

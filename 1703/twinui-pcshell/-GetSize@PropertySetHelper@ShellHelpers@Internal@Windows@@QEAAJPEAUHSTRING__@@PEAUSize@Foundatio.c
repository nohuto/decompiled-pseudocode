/*
 * XREFs of ?GetSize@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUSize@Foundation@4@@Z @ 0x18008D7D8
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800936D0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18010C48C (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x1800067D0 (-_GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIProper.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BMA@AA @ 0x1800979BC (--_9IPropertyValue@Foundation@Windows@@$BMA@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetSize(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        struct Windows::Foundation::Size *a3)
{
  int PropVal; // ebx
  struct Windows::Foundation::IPropertyValue *v5; // rcx
  int v6; // eax
  struct Windows::Foundation::IPropertyValue *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Foundation::IPropertyValue *v10; // [rsp+50h] [rbp+18h] BYREF

  if ( !a3 )
  {
    PropVal = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)0x80004003LL);
    return (unsigned int)PropVal;
  }
  v10 = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::_GetPropVal(this, a2, &v10);
  if ( PropVal < 0 )
    goto LABEL_4;
  v6 =  Windows::Foundation::IPropertyValue::`vcall'{192,{flat}}(v10, a3);
  PropVal = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x28,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v6);
LABEL_4:
    v5 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return (unsigned int)PropVal;
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0;
}

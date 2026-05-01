/*
 * XREFs of ?GetUInt64@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEA_K@Z @ 0x18012C82C
 * Callers:
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180125704 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013751C (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x180006810 (-_GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIProper.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BHA@AA @ 0x18004709C (--_9IPropertyValueStatics@Foundation@Windows@@$BHA@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt64(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        unsigned __int64 *a3)
{
  int PropVal; // ebx
  struct Windows::Foundation::IPropertyValue *v4; // rcx
  int v5; // eax
  struct Windows::Foundation::IPropertyValue *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Foundation::IPropertyValue *v9; // [rsp+50h] [rbp+18h] BYREF

  if ( !a3 )
  {
    PropVal = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"internal\\onecoreshell\\inc\\PropertySetHelpers.h",
      (const char *)0x80004003LL);
    return (unsigned int)PropVal;
  }
  v9 = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::_GetPropVal(this, a2, &v9);
  if ( PropVal < 0 )
    goto LABEL_4;
  v5 =  Windows::Foundation::IPropertyValueStatics::`vcall'{112,{flat}}((__int64)v9);
  PropVal = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2F,
      (__int64)"internal\\onecoreshell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)v5);
LABEL_4:
    v4 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return (unsigned int)PropVal;
  }
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0;
}

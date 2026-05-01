/*
 * XREFs of ?GetInt32WithDefault@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAHPEAUHSTRING__@@H@Z @ 0x180097DC4
 * Callers:
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C47E8 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x1800067D0 (-_GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIProper.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BFI@AA @ 0x18004614C (--_9IPropertyValue@Foundation@Windows@@$BFI@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetInt32WithDefault(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        unsigned int a3)
{
  int PropVal; // ebx
  struct Windows::Foundation::IPropertyValue *v4; // rcx
  int v5; // eax
  struct Windows::Foundation::IPropertyValue *v6; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Foundation::IPropertyValue *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::_GetPropVal(this, a2, &v10);
  if ( PropVal < 0 )
  {
LABEL_2:
    v4 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    goto LABEL_9;
  }
  v5 =  Windows::Foundation::IPropertyValue::`vcall'{88,{flat}}((__int64)v10);
  PropVal = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x28,
      (__int64)"internal\\shell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v5);
    goto LABEL_2;
  }
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  PropVal = 0;
LABEL_9:
  result = a3;
  if ( PropVal < 0 )
    return 0LL;
  return result;
}

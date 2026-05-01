/*
 * XREFs of _ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext::SetAssociatedWindow @ 0x1802B5140
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18006D050 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

__int64 __fastcall ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext::SetAssociatedWindow(
        __int64 a1,
        unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE v9[32]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v9, (const WCHAR **)&off_18034C750);
  v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)(a1 + 48),
         *(HSTRING *)(v4 + 24),
         v5,
         a2);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10B,
    (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)v6);
  return v7;
}

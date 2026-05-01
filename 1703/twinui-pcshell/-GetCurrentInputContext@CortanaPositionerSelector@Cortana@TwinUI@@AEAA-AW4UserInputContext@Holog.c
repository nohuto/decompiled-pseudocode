/*
 * XREFs of ?GetCurrentInputContext@CortanaPositionerSelector@Cortana@TwinUI@@AEAA?AW4UserInputContext@Holographic@Shell@Internal@Windows@@XZ @ 0x1800C0F70
 * Callers:
 *     ?RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1800C0930 (-RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 TwinUI::Cortana::CortanaPositionerSelector::GetCurrentInputContext()
{
  HRESULT v0; // eax
  int ActivationFactory; // eax
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v7 = -2LL;
  v6 = 0;
  v5 = 0LL;
  string = 0LL;
  v0 = WindowsCreateStringReference(
         L"Windows.Internal.Shell.Holographic.ContextIdentifier",
         0x34u,
         &hstringHeader,
         &string);
  if ( v0 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v0);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_b80ca0d2_a583_4e8b_84c6_fac647a1d771, &v5);
  if ( ActivationFactory >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 64LL))(v5, &v6);
    if ( v2 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63,
        (__int64)"internal\\onecoreuapshell\\inc\\holographicsession.h",
        (const char *)(unsigned int)v2);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x61,
      (__int64)"internal\\onecoreuapshell\\inc\\holographicsession.h",
      (const char *)(unsigned int)ActivationFactory);
  }
  v3 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v6;
}

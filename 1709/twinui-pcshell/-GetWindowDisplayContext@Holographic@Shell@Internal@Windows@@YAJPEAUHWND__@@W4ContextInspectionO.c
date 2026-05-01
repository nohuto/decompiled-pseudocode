/*
 * XREFs of ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x1800F892C
 * Callers:
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FD3E0 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 *     ?_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FD7C0 (-_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Fo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Holographic::GetWindowDisplayContext(
        unsigned int a1,
        unsigned int a2,
        __int64 a3)
{
  HRESULT v6; // eax
  int ActivationFactory; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+30h] [rbp-58h] BYREF
  HSTRING_HEADER v13; // [rsp+40h] [rbp-48h] BYREF
  HSTRING v14; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v12[1] = -2LL;
  v12[0] = 0LL;
  v14 = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.Internal.Shell.Holographic.ContextIdentifier", 0x34u, &v13, &v14);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(v14, &GUID_b80ca0d2_a583_4e8b_84c6_fac647a1d771, v12);
  v8 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v12[0] + 48LL))(v12[0], a1, a2, a3);
    v8 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"internal\\onecoreuapshell\\inc\\holographicsession.h",
        (const char *)(unsigned int)v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2B,
      (__int64)"internal\\onecoreuapshell\\inc\\holographicsession.h",
      (const char *)(unsigned int)ActivationFactory);
  }
  v10 = v12[0];
  if ( v12[0] )
  {
    v12[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}

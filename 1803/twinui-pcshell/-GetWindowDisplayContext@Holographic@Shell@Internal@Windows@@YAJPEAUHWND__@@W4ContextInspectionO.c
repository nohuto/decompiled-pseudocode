/*
 * XREFs of ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x1800905E8
 * Callers:
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180020BD0 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180020F50 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
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
  __int64 v9; // rcx
  __int64 v11; // rdx
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
    RaiseException(v6, 1u, 0, 0LL);
    JUMPOUT(0x1800ED7C2LL);
  }
  ActivationFactory = RoGetActivationFactory(v14, &GUID_b80ca0d2_a583_4e8b_84c6_fac647a1d771, v12);
  v8 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v11 = 43LL;
  }
  else
  {
    ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v12[0] + 48LL))(
                          v12[0],
                          a1,
                          a2,
                          a3);
    v8 = ActivationFactory;
    if ( ActivationFactory >= 0 )
      goto LABEL_4;
    v11 = 48LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"internal\\onecoreuapshell\\inc\\holographicsession.h",
    (const char *)(unsigned int)ActivationFactory);
LABEL_4:
  v9 = v12[0];
  if ( v12[0] )
  {
    v12[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v8;
}

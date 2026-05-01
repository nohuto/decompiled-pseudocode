/*
 * XREFs of ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x1800C068C
 * Callers:
 *     ?RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1800C0930 (-RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView.c)
 *     ?PurloinForeground@HolographicPositioner@@UEAAJXZ @ 0x1800D9400 (-PurloinForeground@HolographicPositioner@@UEAAJXZ.c)
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x18014D750 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Holographic::GetUserDisplayContext(
        Windows::Internal::Shell::Holographic *this,
        enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  HRESULT v3; // eax
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v10; // [rsp+30h] [rbp-38h] BYREF
  HSTRING v11; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9[1] = -2LL;
  v9[0] = 0LL;
  v11 = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Internal.Shell.Holographic.ContextIdentifier", 0x34u, &v10, &v11);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(v11, &GUID_b80ca0d2_a583_4e8b_84c6_fac647a1d771, v9);
  v5 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, Windows::Internal::Shell::Holographic *))(*(_QWORD *)v9[0] + 56LL))(
           v9[0],
           this);
    v5 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x48,
        (__int64)"internal\\onecoreuapshell\\inc\\holographicsession.h",
        (const char *)(unsigned int)v6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x46,
      (__int64)"internal\\onecoreuapshell\\inc\\holographicsession.h",
      (const char *)(unsigned int)ActivationFactory);
  }
  v7 = v9[0];
  if ( v9[0] )
  {
    v9[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}

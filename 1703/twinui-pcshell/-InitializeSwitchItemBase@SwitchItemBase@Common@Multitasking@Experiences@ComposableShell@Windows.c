/*
 * XREFs of ?InitializeSwitchItemBase@SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UEAAJXZ @ 0x180165B60
 * Callers:
 *     ?RuntimeClassInitialize@AppViewSwitchItem@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@@Z @ 0x180163AD8 (-RuntimeClassInitialize@AppViewSwitchItem@@QEAAJPEAUIApplicationView@@PEAUIApplicationViewIconLo.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase::InitializeSwitchItemBase(
        WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase *this)
{
  HRESULT v2; // eax
  __int64 v3; // rcx
  int v4; // edi
  _QWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v7; // [rsp+30h] [rbp-38h] BYREF
  HSTRING v8; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6[1] = -2LL;
  *((_QWORD *)this + 8) = 0LL;
  v8 = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Foundation.Collections.PropertySet", 0x2Au, &v7, &v8);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
  v3 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *((_QWORD *)this + 12) = 0LL;
  v4 = RoActivateInstance(v8, v6);
  if ( v4 >= 0 )
  {
    if ( *(_QWORD *)&GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *((_QWORD *)this + 12) = v6[0];
    }
    else
    {
      v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))v6[0])(
             v6[0],
             &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
             (char *)this + 96);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6[0] + 16LL))(v6[0]);
    }
  }
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"internal\\shellcommoncomposable\\inc\\SwitchItemBase.h",
      (const char *)(unsigned int)v4);
  return 0LL;
}

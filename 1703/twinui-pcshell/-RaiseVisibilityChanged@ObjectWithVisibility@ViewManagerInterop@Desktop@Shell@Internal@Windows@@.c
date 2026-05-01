/*
 * XREFs of ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x18005FF30
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18005681C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@Shell@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E830 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@S.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@Shell@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E960 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@.c)
 *     ??$Make@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@AEAE@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@12@AEAE@Z @ 0x18005F6BC (--$Make@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@AEAE@Deta.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_de7a847248f7e9ff51c83bca1460305a___ @ 0x18005FE8C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_de7a847248f7e9ff51c83bca1460305a___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::RaiseVisibilityChanged(
        Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *this,
        char a2)
{
  volatile signed __int64 *v3; // rbx
  int v4; // edi
  int v5; // edi
  IUnknown **v6; // rax
  __int64 v7; // rcx
  _QWORD v9[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v11; // [rsp+88h] [rbp+28h] BYREF
  __int64 v12; // [rsp+90h] [rbp+30h] BYREF
  volatile signed __int64 *v13; // [rsp+98h] [rbp+38h] BYREF

  v11 = a2;
  Microsoft::WRL::Details::Make<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs,unsigned char &>(
    &v13,
    &v11);
  v3 = v13;
  if ( v13 )
  {
    if ( this )
      (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)this + 8LL))(this);
    v9[0] = this;
    v9[1] = this;
    if ( this )
      (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)this + 8LL))(this);
    v9[2] = v3;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef((__int64)v3);
    v5 = *((_DWORD *)this + 8);
    v6 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_de7a847248f7e9ff51c83bca1460305a___(&v12, v9);
    v4 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v5, 0, *v6, 0LL);
    v7 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v3);
    (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)this + 16LL))(this);
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
        (const char *)(unsigned int)v4);
    (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)this + 16LL))(this);
  }
  else
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
      (const char *)0x8007000ELL);
  }
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v3);
  return (unsigned int)v4;
}

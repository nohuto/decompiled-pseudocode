/*
 * XREFs of ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DA250
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D8600 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D8B70 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 *     CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___::Invoke @ 0x1800E1160 (CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___--Invoke.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _LogEventWithViewHostItemData @ 0x1800D73B4 (_LogEventWithViewHostItemData.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1800DBB20 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VViewHostItemEventArgsBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DD0F0 (-Release@-$RuntimeClass@U-$InterfaceList@VViewHostItemEventArgsBase@@VNil@Details@WRL@Microsoft@.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VViewEventArgsBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DD190 (-AddRef@-$RuntimeClass@U-$InterfaceList@VViewEventArgsBase@@VNil@Details@WRL@Microsoft@@@Details.c)
 *     ??$InvokeAll@QEAVApplicationViewBackedViewHostItem@@$$T@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJ$$QEBQEAVApplicationViewBackedViewHostItem@@$$QEA$$T@Z @ 0x1800DEC80 (--$InvokeAll@QEAVApplicationViewBackedViewHostItem@@$$T@-$AsyncEventSourceT@U-$ITypedEventHandle.c)
 *     ??0ViewHostItemEventArgs@@QEAA@XZ @ 0x1800E0320 (--0ViewHostItemEventArgs@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_RaiseRequestNavigateToView(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rsi
  ViewHostItemEventArgs *v8; // rax
  ViewHostItemEventArgs *v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+28h] [rbp-28h] BYREF
  ViewHostItemEventArgs *v21; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  ViewHostItemEventArgs *v24; // [rsp+80h] [rbp+30h]
  __int64 v25; // [rsp+88h] [rbp+38h] BYREF

  v22[1] = -2LL;
  HolographicPositioner::_FindViewHostItem(this, &v20, a2);
  v3 = v20;
  if ( !v20 )
    goto LABEL_27;
  LogEventWithViewHostItemData(
    v20,
    (void (__fastcall *)(PCWSTR *, char *))HolographicPositionerTelemetry::HolographicViewRequestNavigateToView<unsigned short const *,unsigned int &>);
  v19 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v3)(
         v3,
         &GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad,
         &v19);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v25 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 64LL))(v19, &v25);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x494,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v6);
LABEL_23:
      v16 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      goto LABEL_25;
    }
    v7 = v25;
    v24 = 0LL;
    v8 = (ViewHostItemEventArgs *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v8 )
    {
      v5 = -2147024882;
      v12 = 2147942414LL;
      v13 = 1175LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)v12);
      if ( v24 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewHostItemEventArgsBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v24);
      goto LABEL_23;
    }
    v9 = ViewHostItemEventArgs::ViewHostItemEventArgs(v8);
    *((_DWORD *)v9 + 8) = 1;
    if ( *((_QWORD *)v9 + 5) != v7 )
    {
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v10 = *((_QWORD *)v9 + 5);
      *((_QWORD *)v9 + 5) = v7;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewEventArgsBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(v9);
    v24 = v9;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewHostItemEventArgsBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v9);
    v21 = v9;
    v22[0] = v3;
    v11 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::InvokeAll<ApplicationViewBackedViewHostItem * const,std::nullptr_t>(
            (char *)this + 264,
            v22,
            &v21);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 1176LL;
      goto LABEL_21;
    }
    if ( v24 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewHostItemEventArgsBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v24);
    v14 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
LABEL_27:
    v5 = 0;
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x491,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v4);
LABEL_25:
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_28:
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v5;
}

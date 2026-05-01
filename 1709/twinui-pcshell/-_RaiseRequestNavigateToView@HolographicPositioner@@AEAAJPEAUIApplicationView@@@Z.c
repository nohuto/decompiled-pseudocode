/*
 * XREFs of ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FE680
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800FB940 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800FC040 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 *     CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___::Invoke @ 0x180105F80 (CAsyncCallbackWithLambda__lambda_2537e68a50ce23545e2a8601cc08edfc___--Invoke.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _LogEventWithViewHostItemData @ 0x1800FA7D0 (_LogEventWithViewHostItemData.c)
 *     ?_IsSelfActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAH@Z @ 0x1800FEED4 (-_IsSelfActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collection.c)
 *     ?_HandleSelfActivation@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF168 (-_HandleSelfActivation@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x180100454 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180101960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_180101960.c)
 *     ??$InvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$0A@Uerr_returncode_policy@wil@@@wil@@QEAAJ$$QEAPEAVApplicationViewBackedViewHostItem@@$$QEAPEAVViewSizePreferencesChangedEventArgs@@@Z @ 0x1801036D8 (--$InvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVViewSizePreferencesChangedEventArgs@@@-$.c)
 *     ??0ViewHostItemEventArgs@@QEAA@XZ @ 0x1801052D8 (--0ViewHostItemEventArgs@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_RaiseRequestNavigateToView(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  HolographicPositioner *v8; // rcx
  int v9; // eax
  struct Windows::Foundation::Collections::IPropertySet *v10; // rdi
  ViewHostItemEventArgs *v11; // rax
  ViewHostItemEventArgs *v12; // rbx
  __int64 v13; // rcx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v19; // rcx
  __int64 v20; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v21; // rcx
  __int64 v22; // rcx
  ViewHostItemEventArgs *v24; // [rsp+20h] [rbp-40h]
  __int64 v25; // [rsp+28h] [rbp-38h] BYREF
  __int64 v26[2]; // [rsp+30h] [rbp-30h] BYREF
  ViewHostItemEventArgs *v27; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v28[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v30; // [rsp+90h] [rbp+30h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v31; // [rsp+98h] [rbp+38h] BYREF

  v28[1] = -2LL;
  HolographicPositioner::_FindViewHostItem(this, v26, a2);
  v4 = v26[0];
  if ( !v26[0] )
    goto LABEL_35;
  LogEventWithViewHostItemData(
    v26[0],
    (void (__fastcall *)(PCWSTR *, char *))HolographicPositionerTelemetry::HolographicViewRequestNavigateToView<unsigned short const *,unsigned int &>);
  v25 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v4)(
         v4,
         &GUID_0cfc8c70_0442_4d54_ab51_7f5a0c9e44ad,
         &v25);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v31 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v25 + 64LL))(
           v25,
           &v31);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5B3,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v7);
LABEL_31:
      v21 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v21 + 16LL))(v21);
      }
      goto LABEL_33;
    }
    v30 = 0;
    if ( (int)HolographicPositioner::_IsSelfActivation(this, a2, v31, &v30) >= 0 )
    {
      if ( v30 )
      {
        v9 = HolographicPositioner::_HandleSelfActivation(v8, v31);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5B9,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v9);
      }
    }
    v10 = v31;
    v24 = 0LL;
    v11 = (ViewHostItemEventArgs *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v11 )
    {
      v6 = -2147024882;
      v17 = 2147942414LL;
      v18 = 1469LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)v17);
      if ( v24 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::Release(v24);
      goto LABEL_31;
    }
    v12 = ViewHostItemEventArgs::ViewHostItemEventArgs(v11);
    *((_DWORD *)v12 + 14) = 1;
    if ( *((struct Windows::Foundation::Collections::IPropertySet **)v12 + 8) != v10 )
    {
      if ( v10 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v10 + 8LL))(v10);
      v13 = *((_QWORD *)v12 + 8);
      *((_QWORD *)v12 + 8) = v10;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = *((_QWORD *)v12 + 11);
    v26[1] = v14;
    while ( v14 >= 0 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 11, v14 + 1, v14);
      if ( v15 == v14 )
        goto LABEL_20;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v14 + 16));
LABEL_20:
    v24 = v12;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::Release(v12);
    v27 = v12;
    v4 = v26[0];
    v28[0] = v26[0];
    v16 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,0,wil::err_returncode_policy>::InvokeAll<ApplicationViewBackedViewHostItem *,ViewSizePreferencesChangedEventArgs *>(
            (char *)this + 320,
            v28,
            &v27);
    v6 = v16;
    if ( v16 < 0 )
    {
      v17 = (unsigned int)v16;
      v18 = 1470LL;
      goto LABEL_29;
    }
    if ( v24 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::Release(v24);
    v19 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
LABEL_35:
    v6 = 0;
    goto LABEL_36;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x5B0,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v5);
LABEL_33:
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
LABEL_36:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}

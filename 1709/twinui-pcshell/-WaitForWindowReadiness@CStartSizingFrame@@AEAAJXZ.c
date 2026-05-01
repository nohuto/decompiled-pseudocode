/*
 * XREFs of ?WaitForWindowReadiness@CStartSizingFrame@@AEAAJXZ @ 0x1800D087C
 * Callers:
 *     ?HandleWindowPositionChanging@CStartSizingFrame@@AEAA_JPEAUtagWINDOWPOS@@@Z @ 0x1800D061C (-HandleWindowPositionChanging@CStartSizingFrame@@AEAA_JPEAUtagWINDOWPOS@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180048310 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ?AsWeak@?$ComPtr@UIStartSizingFrameCallback@@@WRL@Microsoft@@QEBAJPEAVWeakRef@23@@Z @ 0x1800D1600 (-AsWeak@-$ComPtr@UIStartSizingFrameCallback@@@WRL@Microsoft@@QEBAJPEAVWeakRef@23@@Z.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_dd105f6278bc7bec38635a3a4a66283f___ @ 0x1800D1758 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_1800D1758.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CStartSizingFrame::WaitForWindowReadiness(CStartSizingFrame *this)
{
  int v2; // eax
  unsigned int v3; // r15d
  struct IUnknown *v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rsi
  char *v9; // r8
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD v15[4]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+40h] [rbp-38h]
  _QWORD v17[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  __int64 v20; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+40h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+50h] BYREF

  v15[1] = -2LL;
  v21 = 0LL;
  v2 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 2) + 24LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 24LL),
         &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
         &v21);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *(_QWORD *)&v16 = this;
    *((_QWORD *)&v16 + 1) = CStartSizingFrame::OnClientWindowReadyForPresentationChanged;
    v4 = 0LL;
    v15[2] = 0LL;
    v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = &IAppViewDataSourceAdapter::`vftable';
      v5[3] = 1;
      *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_OWORD *)v6 + 1) = v16;
      *(_QWORD *)v6 = off_180205020;
      v4 = (struct IUnknown *)v6;
    }
    v15[3] = v4;
    v7 = *((_QWORD *)this + 3);
    v23 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IStartSizingFrameCallback>::AsWeak(&v23, &v22);
    v20 = 0LL;
    CMarshaledInterface::Marshal(&v20, &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd, v4, 2);
    v8 = v22;
    v17[0] = v22;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v17[1] = this;
    v18 = v20;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_dd105f6278bc7bec38635a3a4a66283f___(
      v15,
      v17);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v17[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
    v9 = (char *)this + 32;
    v10 = v15[0];
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v21 + 80LL))(v21, v15[0], v9);
    v3 = v11;
    if ( v11 >= 0 )
      v3 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x175,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
        (const char *)(unsigned int)v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v12 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v4 )
      ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x157,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
      (const char *)(unsigned int)v2);
  }
  v13 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v3;
}

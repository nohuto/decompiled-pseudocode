/*
 * XREFs of ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1801D1AF0
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1801D177C (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180026834 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180048310 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_05d91f74b5ede77de7d082105d7f406a___ @ 0x1801D4004 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_1801D4004.c)
 *     ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x1801D5390 (-StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1801D77DC (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801D9E34 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801D9F44 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_1801D9F44.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801DA25C (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSingleViewShellExperience::WaitForWindowReadyForPresentation(__int64 a1, int a2)
{
  bool v3; // r15
  bool v4; // si
  unsigned int v5; // r14d
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v7; // rbx
  char v8; // r12
  int v9; // eax
  unsigned int v10; // r14d
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  struct IUnknown *v15; // rdi
  _DWORD *v16; // rax
  _DWORD *v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  const unsigned __int16 *v26; // rbx
  const unsigned __int16 *v27; // rax
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v30[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+68h] [rbp-A0h]
  __int128 v34; // [rsp+78h] [rbp-90h]
  __int64 v35; // [rsp+88h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  struct IUnknown *v37; // [rsp+98h] [rbp-70h]
  __int128 v38; // [rsp+A0h] [rbp-68h]
  char v39; // [rsp+B0h] [rbp-58h]
  _QWORD v40[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v41; // [rsp+D8h] [rbp-30h]
  int *v42; // [rsp+E0h] [rbp-28h]
  int *v43; // [rsp+E8h] [rbp-20h]
  int v44; // [rsp+F0h] [rbp-18h] BYREF
  char v45; // [rsp+F4h] [rbp-14h]
  int v46; // [rsp+118h] [rbp+10h] BYREF
  const char *v47; // [rsp+120h] [rbp+18h]
  __int64 v48; // [rsp+128h] [rbp+20h]
  char v49; // [rsp+130h] [rbp+28h]
  __int64 v50; // [rsp+138h] [rbp+30h]
  _BYTE v51[144]; // [rsp+140h] [rbp+38h] BYREF
  __int64 v52; // [rsp+1D0h] [rbp+C8h]
  __int64 v53; // [rsp+1D8h] [rbp+D0h]
  __int64 v54; // [rsp+1E0h] [rbp+D8h]
  __int64 v55; // [rsp+1E8h] [rbp+E0h]
  _QWORD v56[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v57; // [rsp+208h] [rbp+100h]
  _QWORD v58[39]; // [rsp+210h] [rbp+108h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+380h] [rbp+278h]

  v35 = -2LL;
  LODWORD(v29) = a2;
  v30[0] = -1;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 24) + 344LL))(*(_QWORD *)(a1 + 24), v30);
  v3 = *(_QWORD *)(a1 + 120) != 0LL;
  v4 = *(_DWORD *)(a1 + 72) != 0;
  v5 = v30[0];
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v7 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  v40[1] = 0LL;
  v40[2] = v40;
  v40[3] = 0LL;
  v41 = 0;
  v42 = &v46;
  v43 = &v44;
  v44 = 0;
  v45 = 0;
  v49 = 0;
  v46 = 0;
  v47 = "WaitForWindowReadyForPresentation";
  v48 = 0LL;
  v8 = 1;
  v50 = 1LL;
  v52 = 0LL;
  v53 = 0LL;
  memset(v51, 0, sizeof(v51));
  v54 = 0LL;
  v55 = 0LL;
  v40[0] = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::StartActivity(
    (SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v40,
    v7,
    StringRawBuffer,
    v5,
    v4,
    v3,
    *(_BYTE *)(a1 + 53));
  *(_QWORD *)&v33 = v40;
  *((_QWORD *)&v33 + 1) = a1;
  v38 = v33;
  v39 = 1;
  v31 = 0LL;
  v9 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24))(
         *(_QWORD *)(a1 + 24),
         &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
         &v31);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x302,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_52;
  }
  if ( *(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a1 + 72) = 4;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 336LL))(*(_QWORD *)(a1 + 24), 4LL);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *(_DWORD *)(a1 + 76) = 4;
      v12 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x63,
        (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v11);
    }
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x7E,
        (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v12);
      goto LABEL_11;
    }
  }
  v12 = 0;
LABEL_11:
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x305,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v12);
  if ( (v29 & 1) == 0 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 72LL))(*(_QWORD *)(a1 + 80));
    v10 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x309,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v13);
      if ( (v29 & 4) != 0 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x30B,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v14);
        goto LABEL_52;
      }
    }
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x33A,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x800704DALL);
LABEL_51:
    v10 = 0;
    goto LABEL_52;
  }
  *(_QWORD *)&v34 = a1;
  *((_QWORD *)&v34 + 1) = CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged;
  v15 = 0LL;
  v36 = 0LL;
  v16 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  if ( v16 )
  {
    *(_QWORD *)v16 = &IAppViewDataSourceAdapter::`vftable';
    v16[3] = 1;
    *(_QWORD *)v16 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v17 + 1) = v34;
    *(_QWORD *)v17 = off_180205020;
    v15 = (struct IUnknown *)v17;
  }
  v37 = v15;
  v18 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)&v33 = v18;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v29 = 0LL;
  CMarshaledInterface::Marshal(&v29, &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd, v15, 2);
  v56[0] = v18;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v56[1] = a1;
  v57 = v29;
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    v58,
    v40);
  v58[0] = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_05d91f74b5ede77de7d082105d7f406a___(
    &v32,
    v56);
  v58[0] = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v58);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v58);
  v19 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v56[0];
  if ( v56[0] )
  {
    v56[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v32;
  v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v31 + 80LL))(v31, v32, a1 + 120);
  v10 = v22;
  if ( v22 >= 0 )
  {
    v8 = 0;
    v39 = 0;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v24 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v15 )
      ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
    goto LABEL_51;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x335,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v22);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v23 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v15 )
    ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
LABEL_52:
  v25 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  if ( v8 )
  {
    v26 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
    v27 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
    SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
      (SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v40,
      v27,
      v26);
  }
  v40[0] = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v40);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v40);
  return v10;
}

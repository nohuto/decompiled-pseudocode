/*
 * XREFs of ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1801822C4
 * Callers:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180181FD4 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800260C4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x1800472D0 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ??$Start@PEBGPEBGI_N_NAEA_N@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAI$$QEA_N2AEA_N@Z @ 0x1801849C4 (--$Start@PEBGPEBGI_N_NAEA_N@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@SA-.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@VCSingleViewShellExperience@@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@01@PEAVCSingleViewShellExperience@@P83@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@5678@@Z@Z @ 0x180184ABC (--$Callback@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@I_ea_180184ABC.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_00be1f95221eb842538ce67e0fb4e246___ @ 0x180184B10 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_180184B10.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180188998 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018B014 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18018B124 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_18018B124.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18018B440 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSingleViewShellExperience::WaitForWindowReadyForPresentation(__int64 a1, char a2)
{
  _QWORD *v4; // r12
  int v5; // eax
  unsigned int v6; // r14d
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  struct IUnknown *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  PCWSTR v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdi
  const unsigned __int16 *v21; // rbx
  const unsigned __int16 *v22; // rax
  bool v24; // [rsp+48h] [rbp-C0h] BYREF
  bool v25; // [rsp+49h] [rbp-BFh] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  PCWSTR StringRawBuffer; // [rsp+68h] [rbp-A0h] BYREF
  struct IUnknown *v30; // [rsp+70h] [rbp-98h] BYREF
  __int128 v31; // [rsp+78h] [rbp-90h] BYREF
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *v32; // [rsp+88h] [rbp-80h] BYREF
  __int64 v33; // [rsp+90h] [rbp-78h]
  char v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  _QWORD v36[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-50h]
  _QWORD v38[39]; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v39[40]; // [rsp+1F8h] [rbp+F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+370h] [rbp+268h]

  v35 = -2LL;
  LODWORD(v27) = -1;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 24) + 344LL))(*(_QWORD *)(a1 + 24), &v27);
  v4 = (_QWORD *)(a1 + 120);
  v24 = *(_QWORD *)(a1 + 120) != 0LL;
  v25 = *(_DWORD *)(a1 + 72) != 0;
  LODWORD(v26) = v27;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v30 = (struct IUnknown *)WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Start<unsigned short const *,unsigned short const *,unsigned int,bool,bool,bool &>(
    (SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *)v39,
    (__int64)&v25,
    (__int64)&v24,
    a1 + 53);
  *(_QWORD *)&v31 = v39;
  *((_QWORD *)&v31 + 1) = a1;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)&v32, &v31);
  v28 = 0LL;
  v5 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24))(
         *(_QWORD *)(a1 + 24),
         &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
         &v28);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x301,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_48;
  }
  if ( *(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a1 + 72) = 4;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 336LL))(*(_QWORD *)(a1 + 24), 4LL);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *(_DWORD *)(a1 + 76) = 4;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x63,
        (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v7);
    }
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x7E,
        (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
        (const char *)(unsigned int)v8);
      goto LABEL_11;
    }
  }
  v8 = 0;
LABEL_11:
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x304,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8);
  if ( (a2 & 1) == 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 72LL))(*(_QWORD *)(a1 + 80));
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x308,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v9);
      if ( (a2 & 4) != 0 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 72LL))(*(_QWORD *)(a1 + 88), a1);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x30A,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v10);
        goto LABEL_48;
      }
    }
  }
  if ( *v4 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x339,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x800704DALL);
LABEL_47:
    v6 = 0;
    goto LABEL_48;
  }
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,CSingleViewShellExperience,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>(
    &v30,
    a1);
  v11 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)&v31 = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v26 = 0LL;
  v12 = v30;
  CMarshaledInterface::Marshal(&v26, &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd, v30, 2);
  v36[0] = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v36[1] = a1;
  v37 = v26;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    v38,
    v39);
  v38[0] = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_00be1f95221eb842538ce67e0fb4e246___(
    &StringRawBuffer,
    v36);
  v38[0] = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v38);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v38);
  v13 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v36[0];
  if ( v36[0] )
  {
    v36[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = StringRawBuffer;
  v16 = (*(__int64 (__fastcall **)(__int64, PCWSTR, _QWORD *))(*(_QWORD *)v28 + 80LL))(v28, StringRawBuffer, v4);
  v6 = v16;
  if ( v16 >= 0 )
  {
    v34 = 0;
    if ( v15 )
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v15 + 16LL))(v15);
    v18 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v12 )
      ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
    goto LABEL_47;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x334,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v16);
  if ( v15 )
    (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v15 + 16LL))(v15);
  v17 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
LABEL_48:
  v19 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v34 )
  {
    v20 = v33;
    v21 = WindowsGetStringRawBuffer(*(HSTRING *)(v33 + 16), 0LL);
    v22 = WindowsGetStringRawBuffer(*(HSTRING *)(v20 + 8), 0LL);
    SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(v32, v22, v21);
  }
  v39[0] = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v39);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v39);
  return v6;
}

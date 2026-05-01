/*
 * XREFs of ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x1801D27B4
 * Callers:
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1801CF5B0 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x1801D0548 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1801D1350 (-OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowSta.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1801D177C (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x1801D299C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0_N@Z @ 0x1801D5010 (-StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801D9E34 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801DA25C (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801DAC3C (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(CSingleViewShellExperience *this)
{
  bool v2; // si
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v4; // rbx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  int v8[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+28h] [rbp-D8h]
  _QWORD v10[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+50h] [rbp-B0h]
  int *v12; // [rsp+58h] [rbp-A8h]
  int *v13; // [rsp+60h] [rbp-A0h]
  int v14; // [rsp+68h] [rbp-98h] BYREF
  char v15; // [rsp+6Ch] [rbp-94h]
  int v16; // [rsp+90h] [rbp-70h] BYREF
  const char *v17; // [rsp+98h] [rbp-68h]
  __int64 v18; // [rsp+A0h] [rbp-60h]
  char v19; // [rsp+A8h] [rbp-58h]
  __int64 v20; // [rsp+B0h] [rbp-50h]
  _BYTE v21[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+148h] [rbp+48h]
  __int64 v23; // [rsp+150h] [rbp+50h]
  __int64 v24; // [rsp+158h] [rbp+58h]
  __int64 v25; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v9 = -2LL;
  v2 = *((_QWORD *)this + 15) != 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v4 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  v10[1] = 0LL;
  v10[2] = v10;
  v10[3] = 0LL;
  v11 = 0;
  v12 = &v16;
  v13 = &v14;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  v16 = 0;
  v17 = "CancelWaitForWindowReadyForPresentation";
  v18 = 0LL;
  v20 = 1LL;
  v22 = 0LL;
  v23 = 0LL;
  memset(v21, 0, sizeof(v21));
  v24 = 0LL;
  v25 = 0LL;
  v10[0] = &SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::`vftable';
  SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::StartActivity(
    (SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation *)v10,
    v4,
    StringRawBuffer,
    v2);
  if ( *((_QWORD *)this + 15) )
  {
    *(_QWORD *)v8 = 0LL;
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, int *))this + 3))(
           *((_QWORD *)this + 3),
           &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
           v8);
    if ( v5 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v8 + 88LL))(*(_QWORD *)v8, *((_QWORD *)this + 15));
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x393,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v6);
      *((_QWORD *)this + 15) = 0LL;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x391,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v5);
    }
    v7 = *(_QWORD *)v8;
    if ( *(_QWORD *)v8 )
    {
      *(_QWORD *)v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v10);
  v10[0] = &SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v10);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v10);
}

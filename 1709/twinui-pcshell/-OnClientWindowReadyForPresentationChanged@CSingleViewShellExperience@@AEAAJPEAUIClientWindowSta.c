/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1801D1350
 * Callers:
 *     <none>
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1801D233C (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x1801D27B4 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?StartActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXPEBG0I@Z @ 0x1801D59A4 (-StartActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXPEBG0I@Z.c)
 *     ?Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x1801D881C (-Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801D9E34 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801DA25C (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  unsigned int v5; // esi
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v7; // rbx
  int v8; // r9d
  unsigned int v9; // r8d
  __int64 v10; // rdx
  int v11; // eax
  _QWORD v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+50h] [rbp-B0h]
  int *v15; // [rsp+58h] [rbp-A8h]
  int *v16; // [rsp+60h] [rbp-A0h]
  int v17; // [rsp+68h] [rbp-98h] BYREF
  char v18; // [rsp+6Ch] [rbp-94h]
  int v19; // [rsp+90h] [rbp-70h] BYREF
  const char *v20; // [rsp+98h] [rbp-68h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  char v22; // [rsp+A8h] [rbp-58h]
  __int64 v23; // [rsp+B0h] [rbp-50h]
  _BYTE v24[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+148h] [rbp+48h]
  __int64 v26; // [rsp+150h] [rbp+50h]
  __int64 v27; // [rsp+158h] [rbp+58h]
  __int64 v28; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v5 = *((_DWORD *)this + 10);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v7 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  v13[1] = 0LL;
  v13[2] = v13;
  v13[3] = 0LL;
  v14 = 0;
  v15 = &v19;
  v16 = &v17;
  v17 = 0;
  v18 = 0;
  v22 = 0;
  v19 = 0;
  v20 = "OnClientWindowReadinessProcessed";
  v21 = 0LL;
  v23 = 1LL;
  v25 = 0LL;
  v26 = 0LL;
  memset(v24, 0, sizeof(v24));
  v27 = 0LL;
  v28 = 0LL;
  v13[0] = &SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::`vftable';
  SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::StartActivity(
    (SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *)v13,
    v7,
    StringRawBuffer,
    v5);
  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(this);
  if ( (unsigned int)SHIsSameObject(
                       *((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 3),
                       (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2)
    && *((_DWORD *)this + 16) == 1 )
  {
    v8 = *((_DWORD *)this + 17);
    v9 = v8 & 1 | 2;
    if ( (v8 & 2) == 0 )
      v9 = *((_DWORD *)this + 17) & 1;
    v10 = v9 | 4;
    if ( (v8 & 4) == 0 )
      v10 = v9;
    v11 = CSingleViewShellExperience::ShowView(this, v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x264,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v11);
  }
  SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::Stop(
    (SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *)v13,
    *((_DWORD *)this + 10));
  v13[0] = &SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v13);
  return 0LL;
}

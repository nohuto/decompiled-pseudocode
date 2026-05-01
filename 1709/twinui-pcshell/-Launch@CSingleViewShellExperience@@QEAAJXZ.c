/*
 * XREFs of ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D0060
 * Callers:
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x180097220 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Prelaunch@CStartExperienceManager@@UEAAJE@Z @ 0x1800B6820 (-Prelaunch@CStartExperienceManager@@UEAAJE@Z.c)
 *     ?Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z @ 0x1800CF250 (-Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1801D3108 (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1801D33BC (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c093b048b1c12e288728af00af624558___ @ 0x1801D37D4 (Windows--Internal--ComTaskPool--QueueTask__lambda_c093b048b1c12e288728af00af624558___.c)
 *     ?StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z @ 0x1801D5F48 (-StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801D9E34 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801D9F44 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_1801D9F44.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801DA25C (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1801E2048 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801E20A8 (_Init_thread_header.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSingleViewShellExperience::Launch(CSingleViewShellExperience *this)
{
  __int64 v2; // rdx
  ExperienceManagerUtils *v3; // rcx
  HWND v4; // r14
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v6; // rbx
  HSTRING v7; // rbx
  HRESULT v8; // eax
  int v9; // edi
  __int64 v10; // rbx
  HSTRING v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  HSTRING newString; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D8h]
  __int64 v19; // [rsp+38h] [rbp-D0h]
  __int64 v20; // [rsp+40h] [rbp-C8h]
  _QWORD v21[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h]
  int *v23; // [rsp+70h] [rbp-98h]
  int *v24; // [rsp+78h] [rbp-90h]
  int v25; // [rsp+80h] [rbp-88h] BYREF
  char v26; // [rsp+84h] [rbp-84h]
  int v27; // [rsp+A8h] [rbp-60h] BYREF
  const char *v28; // [rsp+B0h] [rbp-58h]
  __int64 v29; // [rsp+B8h] [rbp-50h]
  char v30; // [rsp+C0h] [rbp-48h]
  __int64 v31; // [rsp+C8h] [rbp-40h]
  _BYTE v32[144]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+160h] [rbp+58h]
  __int64 v34; // [rsp+168h] [rbp+60h]
  __int64 v35; // [rsp+170h] [rbp+68h]
  __int64 v36; // [rsp+178h] [rbp+70h]
  _QWORD v37[2]; // [rsp+188h] [rbp+80h] BYREF
  HSTRING string; // [rsp+198h] [rbp+90h] BYREF
  HRESULT v39; // [rsp+1A0h] [rbp+98h]
  _QWORD v40[40]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+320h] [rbp+218h]

  v19 = -2LL;
  v2 = 4LL;
  if ( dword_1802BB0C0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1802BB0C0);
    if ( dword_1802BB0C0 == -1 )
    {
      dword_1802BB0C4 = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
      Init_thread_footer(&dword_1802BB0C0);
    }
  }
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( v3 )
    v4 = ExperienceManagerUtils::WindowFromViewWrapper(
           v3,
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v2);
  else
    v4 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v6 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  v21[1] = 0LL;
  v21[2] = v21;
  v21[3] = 0LL;
  LODWORD(v22) = 0;
  v23 = &v27;
  v24 = &v25;
  v25 = 0;
  v26 = 0;
  v30 = 0;
  v27 = 0;
  v28 = "Launch";
  v29 = 0LL;
  v31 = 1LL;
  v33 = 0LL;
  v34 = 0LL;
  memset(v32, 0, sizeof(v32));
  v35 = 0LL;
  v36 = 0LL;
  v21[0] = &SingleViewExperienceTelemetry::Launch::`vftable';
  SingleViewExperienceTelemetry::Launch::StartActivity(
    (SingleViewExperienceTelemetry::Launch *)v21,
    v6,
    StringRawBuffer,
    v4);
  v7 = *(HSTRING *)this;
  WindowsDeleteString(0LL);
  newString = 0LL;
  v8 = WindowsDuplicateString(v7, &newString);
  v9 = v8;
  LODWORD(v18) = v8;
  if ( v8 >= 0 )
  {
    CSingleViewShellExperience::BoostPriority(this, 0LL);
    v10 = *((_QWORD *)this + 12);
    v20 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v37[0] = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v37[1] = this;
    string = 0LL;
    v39 = v18;
    if ( (int)v18 >= 0 )
    {
      v11 = newString;
      WindowsDeleteString(0LL);
      string = 0LL;
      v39 = WindowsDuplicateString(v11, &string);
    }
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
      v40,
      v21);
    v40[0] = &SingleViewExperienceTelemetry::Launch::`vftable';
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_c093b048b1c12e288728af00af624558___(v13, v12, v14, v37);
    v40[0] = &SingleViewExperienceTelemetry::Launch::`vftable';
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v40);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v40);
    WindowsDeleteString(string);
    string = 0LL;
    v15 = v37[0];
    if ( v37[0] )
    {
      v37[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( v9 < 0 )
    {
      CSingleViewShellExperience::UnboostPriority(this, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v9);
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xF7,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8);
  }
  WindowsDeleteString(newString);
  newString = 0LL;
  v21[0] = &SingleViewExperienceTelemetry::Launch::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v21);
  return (unsigned int)v9;
}

/*
 * XREFs of ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180180AE0
 * Callers:
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x180092BE4 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z @ 0x1800C1720 (-Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180182128 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18018367C (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18018392C (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ??$Start@PEBGPEBGAEBQEAUHWND__@@@Launch@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0AEBQEAUHWND__@@@Z @ 0x180183DB8 (--$Start@PEBGPEBGAEBQEAUHWND__@@@Launch@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0AEBQEAU.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_c093b048b1c12e288728af00af624558___ @ 0x180185630 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_c093b048b1c12e288728af00af624558___.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018B014 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18018B124 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_18018B124.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18018B440 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180193FE8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180194048 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSingleViewShellExperience::Launch(CSingleViewShellExperience *this)
{
  __int64 v2; // rdx
  ExperienceManagerUtils *v3; // rcx
  HSTRING v4; // rbx
  HRESULT v5; // eax
  int v6; // edi
  __int64 v7; // rbx
  HSTRING v8; // rdi
  int v9; // edi
  IUnknown **v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  HSTRING newString; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h]
  HWND v16; // [rsp+48h] [rbp-C0h]
  _QWORD v17[5]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v18[2]; // [rsp+78h] [rbp-90h] BYREF
  HSTRING string; // [rsp+88h] [rbp-80h] BYREF
  HRESULT v20; // [rsp+90h] [rbp-78h]
  _QWORD v21[40]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v22[40]; // [rsp+1D8h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  v17[3] = -2LL;
  v2 = 4LL;
  if ( dword_180245210 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180245210);
    if ( dword_180245210 == -1 )
    {
      dword_180245214 = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
      Init_thread_footer(&dword_180245210);
    }
  }
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( v3 )
    v16 = ExperienceManagerUtils::WindowFromViewWrapper(
            v3,
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v2);
  else
    v16 = 0LL;
  v17[1] = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v17[2] = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  SingleViewExperienceTelemetry::Launch::Start<unsigned short const *,unsigned short const *,HWND__ * const &>((SingleViewExperienceTelemetry::Launch *)v22);
  v4 = *(HSTRING *)this;
  WindowsDeleteString(0LL);
  newString = 0LL;
  v5 = WindowsDuplicateString(v4, &newString);
  v6 = v5;
  LODWORD(v15) = v5;
  if ( v5 >= 0 )
  {
    CSingleViewShellExperience::BoostPriority(this, 0LL);
    v7 = *((_QWORD *)this + 12);
    v17[4] = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v18[0] = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v18[1] = this;
    string = 0LL;
    v20 = v15;
    if ( (int)v15 >= 0 )
    {
      v8 = newString;
      WindowsDeleteString(0LL);
      string = 0LL;
      v20 = WindowsDuplicateString(v8, &string);
    }
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
      v21,
      v22);
    v21[0] = &SingleViewExperienceTelemetry::Launch::`vftable';
    v9 = dword_180245214;
    v10 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_c093b048b1c12e288728af00af624558___(
                         v17,
                         v18);
    v6 = Windows::Internal::ComTaskPool::RunTask(0, 2u, v9, 0, *v10, 0LL);
    v11 = v17[0];
    if ( v17[0] )
    {
      v17[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v21[0] = &SingleViewExperienceTelemetry::Launch::`vftable';
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v21);
    WindowsDeleteString(string);
    string = 0LL;
    v12 = v18[0];
    if ( v18[0] )
    {
      v18[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v6 < 0 )
    {
      CSingleViewShellExperience::UnboostPriority(this, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v6);
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xF7,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v5);
  }
  WindowsDeleteString(newString);
  newString = 0LL;
  v22[0] = &SingleViewExperienceTelemetry::Launch::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v22);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v22);
  return (unsigned int)v6;
}

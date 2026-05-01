/*
 * XREFs of ?Uncloak@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C4A4
 * Callers:
 *     ?Uncloak@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1800681F0 (-Uncloak@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?Uncloak@CStartExperienceManager@@UEAAJXZ @ 0x180076A80 (-Uncloak@CStartExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?OnViewUncloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180068680 (-OnViewUncloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ShowView@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x18006DEC0 (-ShowView@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006E21C (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006E568 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18006EB4C (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsP.c)
 *     ?StartActivity@Uncloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18006F580 (-StartActivity@Uncloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?OnViewUncloaked@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180077100 (-OnViewUncloaked@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800772B0 (-OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18008AAB0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1801035C4 (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::Uncloak(HSTRING *this)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v3; // rbx
  TwinUI::Cortana::ShellExperienceView *v4; // rcx
  __int64 (__fastcall *v5)(TwinUI::Cortana::ShellExperienceView *, struct CSingleViewShellExperience *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  DesktopSingleViewShellExperiencePersonality *v8; // rcx
  __int64 (*v9)(void); // rax
  int v10; // eax
  CStartExperienceManager *v11; // rcx
  __int64 (__fastcall *v12)(CStartExperienceManager *__hidden, struct CSingleViewShellExperience *); // rax
  __int64 v14; // rdx
  HANDLE ProcessHeap; // rax
  WINBOOL fPending[2]; // [rsp+28h] [rbp-E0h] BYREF
  LPVOID Context[3]; // [rsp+30h] [rbp-D8h] BYREF
  void **v18; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v19[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h]
  int *v21; // [rsp+70h] [rbp-98h]
  int *v22; // [rsp+78h] [rbp-90h]
  int v23; // [rsp+80h] [rbp-88h] BYREF
  char v24; // [rsp+84h] [rbp-84h]
  _BYTE v25[32]; // [rsp+88h] [rbp-80h] BYREF
  int v26; // [rsp+A8h] [rbp-60h] BYREF
  const char *v27; // [rsp+B0h] [rbp-58h]
  LPVOID lpMem; // [rsp+B8h] [rbp-50h]
  char v29; // [rsp+C0h] [rbp-48h]
  __int64 v30; // [rsp+C8h] [rbp-40h]
  _BYTE v31[144]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v32[3]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v33; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  Context[1] = (LPVOID)-2LL;
  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v3 = WindowsGetStringRawBuffer(this[1], 0LL);
  v19[0] = 0LL;
  v19[1] = &v18;
  v19[2] = 0LL;
  LODWORD(v20) = 0;
  v21 = &v26;
  v22 = &v23;
  v23 = 0;
  v24 = 0;
  v29 = 0;
  v26 = 0;
  v27 = "Uncloak";
  lpMem = 0LL;
  v30 = 1LL;
  v32[0] = 0LL;
  memset_0(v31, 0, sizeof(v31));
  v32[1] = 0LL;
  v32[2] = 0LL;
  v33 = 0LL;
  v18 = &SingleViewExperienceTelemetry::Uncloak::`vftable';
  SingleViewExperienceTelemetry::Uncloak::StartActivity(
    (SingleViewExperienceTelemetry::Uncloak *)&v18,
    v3,
    StringRawBuffer);
  if ( *((_DWORD *)this + 10) != 2 )
  {
    v7 = -2147024809;
    v14 = 995LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v7,
      fPending[0]);
    goto LABEL_11;
  }
  v4 = (TwinUI::Cortana::ShellExperienceView *)this[11];
  v5 = *(__int64 (__fastcall **)(TwinUI::Cortana::ShellExperienceView *, struct CSingleViewShellExperience *))(*(_QWORD *)v4 + 32LL);
  if ( v5 == TwinUI::Cortana::ShellExperienceView::OnViewUncloaking )
  {
    v6 = TwinUI::Cortana::ShellExperienceView::OnViewUncloaking(v4, (struct CSingleViewShellExperience *)this);
  }
  else if ( v5 == CStartExperienceManager::OnViewUncloaking )
  {
    v6 = CStartExperienceManager::OnViewUncloaking(v4, (struct CSingleViewShellExperience *)this);
  }
  else
  {
    v6 = v5(v4, (struct CSingleViewShellExperience *)this);
  }
  v7 = v6;
  if ( v6 < 0 )
  {
    v14 = 996LL;
    goto LABEL_25;
  }
  v8 = (DesktopSingleViewShellExperiencePersonality *)this[10];
  v9 = *(__int64 (**)(void))(*(_QWORD *)v8 + 40LL);
  if ( (char *)v9 == (char *)DesktopSingleViewShellExperiencePersonality::ShowView )
    v10 = DesktopSingleViewShellExperiencePersonality::ShowView(v8);
  else
    v10 = v9();
  v7 = v10;
  if ( v10 < 0 )
  {
    v14 = 997LL;
    goto LABEL_25;
  }
  v11 = (CStartExperienceManager *)this[11];
  v12 = *(__int64 (__fastcall **)(CStartExperienceManager *__hidden, struct CSingleViewShellExperience *))(*(_QWORD *)v11 + 40LL);
  if ( v12 == CStartExperienceManager::OnViewUncloaked )
    CStartExperienceManager::OnViewUncloaked(v11, (struct CSingleViewShellExperience *)this);
  else
    v12(v11, (struct CSingleViewShellExperience *)this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v18);
  v7 = 0;
LABEL_11:
  v18 = &SingleViewExperienceTelemetry::Uncloak::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v18);
  wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v33);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v32);
  if ( v29 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
    v29 = 0;
  }
  lpMem = 0LL;
  if ( v23 == 1 )
  {
    v23 = 2;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, Context)
      && fPending[0] )
    {
      Context[0] = qword_180438800;
      qword_180438800[0] = &LockScreenServiceLogging::`vftable';
      qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
    }
    _TlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)Context[0] + 1), v25);
  }
  v23 = 3;
  if ( (_DWORD)v20 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
  return v7;
}

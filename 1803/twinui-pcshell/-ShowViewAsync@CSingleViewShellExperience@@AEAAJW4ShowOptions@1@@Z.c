/*
 * XREFs of ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006ABC8
 * Callers:
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006ADAC (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18006BC78 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z @ 0x180053570 (-get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?OnPriorityBoostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800686C0 (-OnPriorityBoostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperienc.c)
 *     ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180069930 (-BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x180069C38 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A07C (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?StashPendingShow@CSingleViewShellExperience@@AEAAXW4ShowOptions@1@@Z @ 0x18006A228 (-StashPendingShow@CSingleViewShellExperience@@AEAAXW4ShowOptions@1@@Z.c)
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18006A25C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?OnPriorityBoostRequested@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800774C0 (-OnPriorityBoostRequested@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnPriorityBoostRequested@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007B8D0 (-OnPriorityBoostRequested@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::ShowViewAsync(__int64 a1, WINBOOL a2)
{
  char v2; // r14
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  CStartExperienceManager *v9; // rcx
  __int64 (__fastcall *v10)(TwinUI::Cortana::ShellExperienceView *, struct CSingleViewShellExperience *); // rax
  int v11; // eax
  int v12; // edi
  const WCHAR *StringRawBuffer; // rdi
  const WCHAR *v14; // r15
  __int64 (__fastcall *v15)(ViewWrapperBase *, bool *); // rax
  int v16; // eax
  ViewWrapperBase *v17; // rcx
  TraceLoggingHProvider v19; // r10
  int cData; // [rsp+28h] [rbp-99h]
  int cDataa; // [rsp+28h] [rbp-99h]
  unsigned __int8 v22[8]; // [rsp+38h] [rbp-89h] BYREF
  ViewWrapperBase *v23; // [rsp+40h] [rbp-81h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-79h] BYREF
  int v25; // [rsp+4Ch] [rbp-75h] BYREF
  LPVOID Context[3]; // [rsp+50h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+98h] [rbp-29h] BYREF
  int *v30; // [rsp+A8h] [rbp-19h]
  int v31; // [rsp+B0h] [rbp-11h]
  int v32; // [rsp+B4h] [rbp-Dh]
  __int64 v33; // [rsp+B8h] [rbp-9h]
  int v34; // [rsp+C0h] [rbp-1h]
  int v35; // [rsp+C4h] [rbp+3h]
  __int64 v36; // [rsp+C8h] [rbp+7h]
  int v37; // [rsp+D0h] [rbp+Fh]
  int v38; // [rsp+D4h] [rbp+13h]
  __int64 v39; // [rsp+D8h] [rbp+17h]
  int v40; // [rsp+E0h] [rbp+1Fh]
  int v41; // [rsp+E4h] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  Context[1] = (LPVOID)-2LL;
  v2 = a2;
  v4 = CSingleViewShellExperience::WaitForWindowReadyForPresentation(a1, a2);
  v8 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27D,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4,
      cData);
    return v8;
  }
  else
  {
    CSingleViewShellExperience::BoostDiskIo((CSingleViewShellExperience *)a1, v5, v6, v7, cData);
    if ( !*(_BYTE *)(a1 + 140) )
    {
      v9 = *(CStartExperienceManager **)(a1 + 88);
      v10 = *(__int64 (__fastcall **)(TwinUI::Cortana::ShellExperienceView *, struct CSingleViewShellExperience *))(*(_QWORD *)v9 + 120LL);
      if ( v10 == CStartExperienceManager::OnPriorityBoostRequested )
      {
        v11 = CStartExperienceManager::OnPriorityBoostRequested(v9, (struct CSingleViewShellExperience *)a1);
      }
      else if ( v10 == TwinUI::Cortana::ShellExperienceView::OnPriorityBoostRequested )
      {
        v11 = TwinUI::Cortana::ShellExperienceView::OnPriorityBoostRequested(
                v9,
                (struct CSingleViewShellExperience *)a1);
      }
      else if ( v10 == CActionCenterExperienceManager::OnPriorityBoostRequested )
      {
        v11 = CActionCenterExperienceManager::OnPriorityBoostRequested(v9, (struct CSingleViewShellExperience *)a1);
      }
      else
      {
        v11 = v10(v9, (struct CSingleViewShellExperience *)a1);
      }
      v12 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x44B,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v11,
          cDataa);
      *(_BYTE *)(a1 + 140) = v12 >= 0;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
    v14 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
      && fPending )
    {
      Context[0] = qword_180438800;
      qword_180438800[0] = &LockScreenServiceLogging::`vftable';
      qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
    }
    if ( **((_DWORD **)Context[0] + 1) > 5u
      && TlgKeywordOn(*((TraceLoggingHProvider *)Context[0] + 1), 0x200000000000uLL) )
    {
      TlgCreateWsz(&pDesc, v14);
      TlgCreateWsz(&v29, StringRawBuffer);
      v25 = 1;
      v30 = &v25;
      v31 = 4;
      v32 = 0;
      v33 = a1 + 148;
      v34 = 1;
      v35 = 0;
      v36 = a1 + 144;
      v37 = 4;
      v38 = 0;
      v39 = a1 + 140;
      v40 = 1;
      v41 = 0;
      TlgWrite(v19, &unk_18039F1DF, 0LL, 0LL, 8u, &pData);
    }
    CSingleViewShellExperience::StashPendingShow(a1, v2);
    v23 = 0LL;
    v22[0] = 1;
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, ViewWrapperBase **))(a1 + 24))(
           *(_QWORD *)(a1 + 24),
           &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
           &v23) >= 0 )
    {
      v15 = *(__int64 (__fastcall **)(ViewWrapperBase *, bool *))(*(_QWORD *)v23 + 72LL);
      v16 = v15 == ViewWrapperBase::get_ClientWindowReadyForPresentation
          ? ViewWrapperBase::get_ClientWindowReadyForPresentation(v23, (bool *)v22)
          : v15(v23, (bool *)v22);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x286,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v16,
          cDataa);
    }
    if ( v22[0] )
    {
      CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation((CSingleViewShellExperience *)a1);
      CSingleViewShellExperience::ShowView(a1, v2);
    }
    v17 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return 0LL;
  }
}

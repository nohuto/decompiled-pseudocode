/*
 * XREFs of _lambda_aa48c572b33de96146be9e3e412c5ad4_::operator() @ 0x1800685B0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_11a7567f3465c52bdf1b4059be609446___::Run @ 0x18006ED10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_11a7567f3465c52bdf1b4059be609446___--Run.c)
 * Callees:
 *     WPP_SF_qd @ 0x180006DCC (WPP_SF_qd.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x18006779C (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x180067824 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x18006B6E4 (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
 *     ??$FailedSettingPresentedWindowOnFrame@AEBJ@CFramePresentationTelemetry@@SAXAEBJ@Z @ 0x18006C10C (--$FailedSettingPresentedWindowOnFrame@AEBJ@CFramePresentationTelemetry@@SAXAEBJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3a86b7f81a3339fd1802a7db538923d1___ @ 0x18006CA70 (Windows--Internal--ComTaskPool--QueueTask__lambda_3a86b7f81a3339fd1802a7db538923d1___.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_aa48c572b33de96146be9e3e412c5ad4_::operator()(CFrameApplicationPresentation **a1)
{
  struct wil::details::IFailureCallback *v2; // r15
  CFrameApplicationPresentation *v3; // r8
  bool v4; // r13
  __int64 v5; // r12
  CFrameApplicationPresentation *v6; // rax
  CFrameApplicationPresentation *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  CFrameApplicationPresentation *v10; // r14
  CFrameApplicationPresentation *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  PSRWLOCK v14; // r14
  PVOID Ptr; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct CFrameApplicationPresentation *v18; // rbx
  CFrameApplicationPresentation *v19; // rcx
  __int64 v20; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD v22[3]; // [rsp+38h] [rbp-51h] BYREF
  LPVOID v23[4]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v24; // [rsp+70h] [rbp-19h] BYREF
  __int64 v25; // [rsp+80h] [rbp-9h]
  int v26; // [rsp+88h] [rbp-1h]
  __int64 v27; // [rsp+90h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned int v29; // [rsp+F0h] [rbp+67h] BYREF
  int v30; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v31; // [rsp+100h] [rbp+77h]
  PVOID v32; // [rsp+108h] [rbp+7Fh]

  v2 = (struct wil::details::IFailureCallback *)(a1 + 2);
  v3 = a1[8];
  if ( *(_DWORD *)v3 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v23,
      v2,
      (CFrameApplicationPresentation *)((char *)v3 + 40));
  }
  else
  {
    memset(v23, 0, sizeof(v23));
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0;
    v27 = 0LL;
  }
  v4 = (unsigned int)SHIsSameObject(
                       (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1,
                       **((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))a1[1] + 14)) != 0;
  v5 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)*a1 + 32LL))(*a1);
  v6 = a1[1];
  if ( v5 == **((_QWORD **)v6 + 15) && v4 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v2, 0);
  }
  else
  {
    if ( !IsWindowVisible(*((HWND *)v6 + 17)) )
      ShowWindowAsync(*((HWND *)a1[1] + 17), 4);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v7 = a1[1];
      v8 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)*a1 + 32LL))(*a1);
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        &WPP_7785cad5b4a736930de9968ca66fe3e3_Traceguids,
        v8,
        *((_DWORD *)v7 + 14));
    }
    v9 = **((_QWORD **)a1[1] + 14);
    v31 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = *a1;
    v11 = a1[1];
    CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
      (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v22,
      v11);
    if ( *((CFrameApplicationPresentation **)v11 + 11) != v10 || *((_QWORD *)v11 + 12) != v5 )
      *((_BYTE *)v11 + 104) = 0;
    if ( *((CFrameApplicationPresentation **)v11 + 11) != v10 )
    {
      if ( v10 )
        (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v10 + 8LL))(v10);
      v12 = *((_QWORD *)v11 + 11);
      *((_QWORD *)v11 + 11) = v10;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    *((_QWORD *)v11 + 12) = v5;
    CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v22);
    if ( (unsigned int)GetWindowBand(*((_QWORD *)a1[1] + 17), &v29) )
      (*(void (__fastcall **)(CFrameApplicationPresentation *, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, v29);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1[1] + 16) + 48LL))(*((_QWORD *)a1[1] + 16), v5);
    v30 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x273,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v13);
      CFramePresentationTelemetry::FailedSettingPresentedWindowOnFrame<long const &>(&v30);
    }
    if ( v5 )
    {
      v14 = CApplicationManagerUtility::g_pIAMGlobals;
      Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
      v32 = Ptr;
      if ( Ptr )
      {
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
        v22[0] = Ptr;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
        v22[1] = v5;
        Windows::Internal::ComTaskPool::QueueTask__lambda_3a86b7f81a3339fd1802a7db538923d1___(
          v17,
          v16,
          LODWORD(v14[13].Ptr),
          v22);
        if ( v22[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22[0] + 16LL))(v22[0]);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      }
    }
    CFrameApplicationPresentation::_UpdateMinSizePreferences(a1[1], **((HWND **)a1[1] + 15));
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(CFrameApplicationPresentation *, _QWORD, _QWORD))(*(_QWORD *)*a1 + 208LL))(
      *a1,
      *((_QWORD *)a1[1] + 17),
      (unsigned int)(*((_DWORD *)a1[1] + 54) != 0) + 4);
    if ( v9 && !v4 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 208LL))(v9, *((_QWORD *)a1[1] + 17), 0LL);
    v18 = a1[1];
    CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
      (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v22,
      v18);
    *((_BYTE *)v18 + 104) = 1;
    CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v22);
    v19 = a1[1];
    if ( **((_QWORD **)v19 + 15) )
    {
      if ( !*((_DWORD *)v19 + 54) )
      {
        v20 = *((_QWORD *)v19 + 73);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 184LL))(v20);
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v2, 0);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v26 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v24);
  if ( LOBYTE(v23[3]) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v23[2]);
  }
}

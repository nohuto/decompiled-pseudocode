/*
 * XREFs of _lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_::operator() @ 0x1800665DC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_917667f80511e4bec41c80ee8a028167___::Run @ 0x18006BB50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_917667f80511e4bec41c80ee8a028167___--Run.c)
 * Callees:
 *     WPP_SF_qd @ 0x180006D2C (WPP_SF_qd.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x180065C5C (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x180065CE4 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z @ 0x1800691B8 (-_UpdateMinSizePreferences@CFrameApplicationPresentation@@AEAAJPEAUHWND__@@@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180069684 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_f0fa1bf0d3c290ed98c5e51ba0126ad5___ @ 0x180069A64 (CIAMGlobals--QueueViewManagementTask__lambda_f0fa1bf0d3c290ed98c5e51ba0126ad5___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_::operator()(CFrameApplicationPresentation **a1)
{
  __int64 v2; // r13
  bool v3; // r12
  __int64 v4; // r15
  CFrameApplicationPresentation *v5; // rcx
  CFrameApplicationPresentation *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  CFrameApplicationPresentation *v9; // r14
  CFrameApplicationPresentation *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct CFrameApplicationPresentation *v13; // rdi
  HANDLE ProcessHeap; // rax
  _BYTE v15[24]; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v16[16]; // [rsp+58h] [rbp-29h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp-19h]
  char v18; // [rsp+70h] [rbp-11h]
  _BYTE v19[24]; // [rsp+78h] [rbp-9h] BYREF
  int v20; // [rsp+90h] [rbp+Fh]
  unsigned int v21; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v22; // [rsp+F0h] [rbp+6Fh]

  v2 = (__int64)(a1 + 2);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 2),
    (wil::ActivityThreadWatcher *)v16);
  v3 = (unsigned int)SHIsSameObject(
                       (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1,
                       **((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))a1[1] + 12)) != 0;
  v4 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)*a1 + 32LL))(*a1);
  v5 = a1[1];
  if ( v4 == **((_QWORD **)v5 + 13) && v3 )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, 0);
  }
  else
  {
    if ( !IsWindowVisible(*((HWND *)v5 + 15)) )
      ShowWindowAsync(*((HWND *)a1[1] + 15), 4);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = a1[1];
      v7 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)*a1 + 32LL))(*a1);
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        &WPP_a1658e10cf12387b63d474d4cc4de9d3_Traceguids,
        v7,
        *((_DWORD *)v6 + 10));
    }
    v8 = **((_QWORD **)a1[1] + 12);
    v22 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = *a1;
    v10 = a1[1];
    CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
      (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v15,
      v10);
    if ( *((CFrameApplicationPresentation **)v10 + 9) != v9 || *((_QWORD *)v10 + 10) != v4 )
      *((_BYTE *)v10 + 88) = 0;
    if ( *((CFrameApplicationPresentation **)v10 + 9) != v9 )
    {
      if ( v9 )
        (*(void (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v9 + 8LL))(v9);
      v11 = *((_QWORD *)v10 + 9);
      *((_QWORD *)v10 + 9) = v9;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    *((_QWORD *)v10 + 10) = v4;
    CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v15);
    if ( (unsigned int)GetWindowBand(*((_QWORD *)a1[1] + 15), &v21) )
      (*(void (__fastcall **)(CFrameApplicationPresentation *, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, v21);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1[1] + 14) + 48LL))(*((_QWORD *)a1[1] + 14), v4);
    if ( v4 )
      CIAMGlobals::QueueViewManagementTask__lambda_f0fa1bf0d3c290ed98c5e51ba0126ad5___(v12, v4);
    CFrameApplicationPresentation::_UpdateMinSizePreferences(a1[1], **((HWND **)a1[1] + 13));
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(CFrameApplicationPresentation *, _QWORD, _QWORD))(*(_QWORD *)*a1 + 208LL))(
      *a1,
      *((_QWORD *)a1[1] + 15),
      (unsigned int)(*((_DWORD *)a1[1] + 50) != 0) + 4);
    if ( v8 && !v3 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 208LL))(v8, *((_QWORD *)a1[1] + 15), 0LL);
    v13 = a1[1];
    CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
      (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v15,
      v13);
    *((_BYTE *)v13 + 88) = 1;
    CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v15);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, 0);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v20 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
  if ( v18 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}

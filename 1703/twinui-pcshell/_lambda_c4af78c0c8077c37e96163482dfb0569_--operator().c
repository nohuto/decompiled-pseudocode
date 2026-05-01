/*
 * XREFs of _lambda_c4af78c0c8077c37e96163482dfb0569_::operator() @ 0x180066DD4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a12f61aea3debf81db7797da6f154ad8___::Run @ 0x18006BA70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a12f61aea3debf81db7797da6f154ad8___--Run.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     WPP_SF_Ld @ 0x1800392C0 (WPP_SF_Ld.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x180065C5C (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x180065CE4 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180069684 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ??$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z @ 0x18006A168 (--$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_c4af78c0c8077c37e96163482dfb0569_::operator()(unsigned int *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdi
  HANDLE ProcessHeap; // rax
  int v9; // [rsp+20h] [rbp-88h]
  _BYTE v10[24]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v11; // [rsp+50h] [rbp-58h] BYREF
  LPVOID lpMem; // [rsp+60h] [rbp-48h]
  char v13; // [rsp+68h] [rbp-40h]
  _BYTE v14[24]; // [rsp+70h] [rbp-38h] BYREF
  int v15; // [rsp+88h] [rbp-20h]
  __int64 v16; // [rsp+B0h] [rbp+8h] BYREF

  v2 = (__int64)(a1 + 4);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 4),
    (wil::ActivityThreadWatcher *)&v11);
  if ( !IsWindowVisible(*(HWND *)(*((_QWORD *)a1 + 1) + 120LL)) )
  {
    v3 = *((_QWORD *)a1 + 1);
    if ( **(_QWORD **)(v3 + 96) )
    {
      if ( !*a1 )
      {
        v16 = *(_QWORD *)(v3 + 208);
        CFramePresentationTelemetry::ClosedFrameShown<unsigned short const *>(&v16);
        ShowWindowAsync(*(HWND *)(*((_QWORD *)a1 + 1) + 120LL), 4);
      }
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 112LL) + 56LL))(
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 112LL),
    *a1);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = *(_DWORD *)(*((_QWORD *)a1 + 1) + 40LL);
    WPP_SF_Ld(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, &WPP_a1658e10cf12387b63d474d4cc4de9d3_Traceguids, *a1, v9);
  }
  v4 = *((_QWORD *)a1 + 1);
  v5 = **(_QWORD **)(v4 + 96);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 208LL))(
      v5,
      *(_QWORD *)(v4 + 120),
      (unsigned int)(*(_DWORD *)(v4 + 200) != 0) + 4);
  v6 = *a1;
  v7 = *((_QWORD *)a1 + 1);
  CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
    (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v10,
    (struct CFrameApplicationPresentation *)v7);
  if ( v6 == *(_DWORD *)(v7 + 200) )
    *(_BYTE *)(v7 + 204) = 1;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v10);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v2, 0);
  if ( v15 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v14);
  if ( v13 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}

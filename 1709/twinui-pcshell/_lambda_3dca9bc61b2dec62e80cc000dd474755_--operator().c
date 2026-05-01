/*
 * XREFs of _lambda_3dca9bc61b2dec62e80cc000dd474755_::operator() @ 0x180069208
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8ef6d4805f8528fcb28166bccfad057a___::Run @ 0x18006EC30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8ef6d4805f8528fcb28166bccfad057a___--Run.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     WPP_SF_Ld @ 0x18003A7BC (WPP_SF_Ld.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800491CC (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x18006779C (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x180067824 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ??$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z @ 0x18006C568 (--$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_3dca9bc61b2dec62e80cc000dd474755_::operator()(unsigned int *a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  HANDLE ProcessHeap; // rax
  _BYTE v11[24]; // [rsp+40h] [rbp-21h] BYREF
  LPVOID v12[4]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v13; // [rsp+78h] [rbp+17h] BYREF
  __int64 v14; // [rsp+88h] [rbp+27h]
  int v15; // [rsp+90h] [rbp+2Fh]
  __int64 v16; // [rsp+98h] [rbp+37h]
  __int64 v17; // [rsp+C8h] [rbp+67h] BYREF

  v2 = *((_QWORD *)a1 + 8);
  if ( *(_DWORD *)v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v12,
      (struct wil::details::IFailureCallback *)(a1 + 4),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 40));
  }
  else
  {
    memset(v12, 0, sizeof(v12));
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0;
    v16 = 0LL;
  }
  if ( !IsWindowVisible(*(HWND *)(*((_QWORD *)a1 + 1) + 136LL)) )
  {
    v3 = *((_QWORD *)a1 + 1);
    if ( **(_QWORD **)(v3 + 112) )
    {
      if ( !*a1 )
      {
        v17 = *(_QWORD *)(v3 + 552);
        CFramePresentationTelemetry::ClosedFrameShown<unsigned short const *>(&v17);
        ShowWindowAsync(*(HWND *)(*((_QWORD *)a1 + 1) + 136LL), 4);
      }
    }
  }
  if ( *((_BYTE *)a1 + 5) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 128LL) + 208LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 128LL),
      0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 128LL) + 56LL))(
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 128LL),
    *a1);
  if ( *((_BYTE *)a1 + 5) )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 128LL) + 208LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 128LL),
      1LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x10u,
      &WPP_7785cad5b4a736930de9968ca66fe3e3_Traceguids,
      *a1,
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 56LL));
  v4 = *((_QWORD *)a1 + 1);
  v5 = **(_QWORD **)(v4 + 112);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 208LL))(
      v5,
      *(_QWORD *)(v4 + 136),
      (unsigned int)(*(_DWORD *)(v4 + 216) != 0) + 4);
  v6 = *a1;
  v7 = *((_QWORD *)a1 + 1);
  CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
    (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v11,
    (struct CFrameApplicationPresentation *)v7);
  if ( v6 == *(_DWORD *)(v7 + 216) )
    *(_BYTE *)(v7 + 536) = 1;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v11);
  v8 = *((_QWORD *)a1 + 1);
  if ( **(_QWORD **)(v8 + 120) )
  {
    if ( !*(_DWORD *)(v8 + 216) )
    {
      v9 = *(_QWORD *)(v8 + 584);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 184LL))(v9);
    }
  }
  if ( *((_BYTE *)a1 + 4) )
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 136LL),
      0LL);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 4));
  if ( v15 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v13);
  if ( LOBYTE(v12[3]) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v12[2]);
  }
}

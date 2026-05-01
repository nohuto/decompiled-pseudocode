/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79b63e686e97a215717fb7e387d32a07___::Run @ 0x180145140
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$SessionIdleTaskCompletionRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x1801444D4 (--$SessionIdleTaskCompletionRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79b63e686e97a215717fb7e387d32a07___::Run(
        __int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  HANDLE ProcessHeap; // rax
  LPVOID v8[4]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v9; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  __int64 v12; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 80);
  if ( *(_DWORD *)v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v8,
      (struct wil::details::IFailureCallback *)(a1 + 32),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 40));
  }
  else
  {
    memset(v8, 0, sizeof(v8));
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0;
    v12 = 0LL;
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 144LL);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2C9,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v4);
  }
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(v5 + 144);
  if ( v6 )
  {
    *(_QWORD *)(v5 + 144) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  ViewManagerInteropTraceLogging::SessionIdleTaskCompletionRemoved<unsigned int &>((int *)(*(_QWORD *)(a1 + 16) + 156LL));
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 32);
  if ( v11 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v9);
  if ( LOBYTE(v8[3]) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v8[2]);
  }
}

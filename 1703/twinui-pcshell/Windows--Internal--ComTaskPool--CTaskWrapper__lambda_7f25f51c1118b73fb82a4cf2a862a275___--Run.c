/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7f25f51c1118b73fb82a4cf2a862a275___::Run @ 0x18011A870
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180069684 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ??$SessionIdleTaskCompletionRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x180119B40 (--$SessionIdleTaskCompletionRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7f25f51c1118b73fb82a4cf2a862a275___::Run(
        __int64 a1)
{
  HANDLE ProcessHeap; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-58h] BYREF
  LPVOID lpMem; // [rsp+30h] [rbp-48h]
  char v9; // [rsp+38h] [rbp-40h]
  _BYTE v10[24]; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 32),
    (wil::ActivityThreadWatcher *)v7);
  if ( v11 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v10);
  if ( v9 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2C8,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v4);
  }
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(v5 + 120);
  if ( v6 )
  {
    *(_QWORD *)(v5 + 120) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  ViewManagerInteropTraceLogging::SessionIdleTaskCompletionRemoved<unsigned int &>((int *)(*(_QWORD *)(a1 + 16) + 132LL));
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 32);
}

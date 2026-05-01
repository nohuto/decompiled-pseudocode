/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a629fb13df2657ee8e744f2b26d8144___::Run @ 0x18011A940
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180069684 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$SessionIdleTaskCompletionAdded@AEAIAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEBQEAUHWND__@@AEAK@Z @ 0x1801199C8 (--$SessionIdleTaskCompletionAdded@AEAIAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAXAEA.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a629fb13df2657ee8e744f2b26d8144___::Run(
        __int64 a1)
{
  HANDLE ProcessHeap; // rax
  HRESULT v3; // eax
  __int64 v4; // rbx
  LPVOID v5; // rdi
  __int64 v6; // rcx
  LPVOID v7; // rcx
  _BYTE v8[16]; // [rsp+38h] [rbp-48h] BYREF
  LPVOID lpMem; // [rsp+48h] [rbp-38h]
  char v10; // [rsp+50h] [rbp-30h]
  _BYTE v11[24]; // [rsp+58h] [rbp-28h] BYREF
  int v12; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  LPVOID ppv; // [rsp+A0h] [rbp+20h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 48),
    (wil::ActivityThreadWatcher *)v8);
  if ( v12 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v11);
  if ( v10 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  ppv = 0LL;
  v3 = CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &ppv);
  if ( v3 < 0
    || (v3 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)ppv + 24LL))(
               ppv,
               *(unsigned int *)(a1 + 40),
               0x80000000LL),
        v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2B1,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v3);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = ppv;
    if ( *(LPVOID *)(v4 + 120) != ppv )
    {
      if ( ppv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
      v6 = *(_QWORD *)(v4 + 120);
      *(_QWORD *)(v4 + 120) = v5;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    ViewManagerInteropTraceLogging::SessionIdleTaskCompletionAdded<unsigned int &,HWND__ * const &,unsigned long &>(
      (int *)(*(_QWORD *)(a1 + 16) + 132LL),
      (__int64 *)(a1 + 32),
      a1 + 40);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 48);
  }
  v7 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v7 + 16LL))(v7);
  }
}

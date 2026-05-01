/*
 * XREFs of CAsyncCallbackWithLambda__lambda_edabc7bfffa072f6dcb0170080417172___::Invoke @ 0x1800761C0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180069684 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ?Stop@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180078518 (-Stop@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAsyncCallbackWithLambda__lambda_edabc7bfffa072f6dcb0170080417172___::Invoke(__int64 a1)
{
  HANDLE ProcessHeap; // rax
  unsigned int i; // ebx
  __int64 v4; // rcx
  _BYTE v6[16]; // [rsp+38h] [rbp-48h] BYREF
  LPVOID lpMem; // [rsp+48h] [rbp-38h]
  char v8; // [rsp+50h] [rbp-30h]
  _BYTE v9[24]; // [rsp+58h] [rbp-28h] BYREF
  int v10; // [rsp+70h] [rbp-10h]
  unsigned int v11; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+30h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 72),
    (wil::ActivityThreadWatcher *)v6);
  if ( v10 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v9);
  if ( v8 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
    v8 = 0;
  }
  lpMem = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), &v11) >= 0 )
  {
    for ( i = 0; i < v11; ++i )
    {
      v12 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 64) + 32LL))(
             *(_QWORD *)(a1 + 64),
             i,
             &GUID_727f9e97_76ee_497b_a942_b6371328485c,
             &v12) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(
          v12,
          *(_QWORD *)(a1 + 40),
          *(unsigned int *)(a1 + 48),
          *(_QWORD *)(a1 + 56));
      v4 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
  }
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)(a1 + 72));
  return 0LL;
}

/*
 * XREFs of CAsyncCallbackWithLambda__lambda_3a8de745e4864761b0fe42eebb248ca2___::Invoke @ 0x1800790C0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?Stop@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007B0C8 (-Stop@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAsyncCallbackWithLambda__lambda_3a8de745e4864761b0fe42eebb248ca2___::Invoke(__int64 a1)
{
  __int64 v2; // r8
  unsigned int i; // ebx
  __int64 v4; // rcx
  HANDLE ProcessHeap; // rax
  LPVOID v7[4]; // [rsp+48h] [rbp-9h] BYREF
  __int128 v8; // [rsp+68h] [rbp+17h] BYREF
  __int64 v9; // [rsp+78h] [rbp+27h]
  int v10; // [rsp+80h] [rbp+2Fh]
  __int64 v11; // [rsp+88h] [rbp+37h]
  unsigned int v12; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v13; // [rsp+C8h] [rbp+77h] BYREF

  v2 = *(_QWORD *)(a1 + 136);
  if ( *(_DWORD *)v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v7,
      (struct wil::details::IFailureCallback *)(a1 + 88),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 40));
  }
  else
  {
    memset(v7, 0, sizeof(v7));
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
  }
  if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 80) + 24LL))(*(_QWORD *)(a1 + 80), &v12) >= 0 )
  {
    for ( i = 0; i < v12; ++i )
    {
      v13 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 80) + 32LL))(
             *(_QWORD *)(a1 + 80),
             i,
             &GUID_727f9e97_76ee_497b_a942_b6371328485c,
             &v13) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v13 + 24LL))(
          v13,
          *(_QWORD *)(a1 + 56),
          *(unsigned int *)(a1 + 64),
          *(_QWORD *)(a1 + 72));
      v4 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
  }
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)(a1 + 88));
  if ( v10 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v8);
  if ( LOBYTE(v7[3]) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v7[2]);
  }
  return 0LL;
}

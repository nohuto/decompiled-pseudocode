/*
 * XREFs of CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216___::Invoke @ 0x1800732E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180060610 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216___::Invoke(__int64 a1)
{
  __int64 v2; // r14
  volatile signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  DWORD v6; // r12d
  IUnknown *v7; // rsi
  IUnknown *v8; // rax
  IUnknown *v9; // rdi
  DWORD CurrentThreadId; // eax
  int v11; // edi
  __int64 v12; // rcx
  DWORD v14; // [rsp+90h] [rbp+40h] BYREF
  volatile signed __int64 *v15; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+58h] BYREF

  v14 = 0;
  v16 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 56) + 128LL) + 128LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 56) + 128LL),
         &v16) >= 0 )
    (*(void (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v16 + 168LL))(v16, &v14);
  v2 = *(_QWORD *)(a1 + 56);
  v3 = (volatile signed __int64 *)v2;
  v15 = (volatile signed __int64 *)v2;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 72);
    while ( v4 >= 0 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 72), v4 + 1, v4);
      if ( v5 == v4 )
        goto LABEL_8;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v4 + 16));
LABEL_8:
    v3 = v15;
  }
  v6 = v14;
  v7 = 0LL;
  v8 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v8->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v8[1].lpVtbl) = 1;
    v8->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v9->lpVtbl = (struct IUnknownVtbl *)off_1801FF3A8;
    v9[2].lpVtbl = 0LL;
    if ( &v9[2] != (IUnknown *)&v15 )
    {
      v9[2].lpVtbl = (struct IUnknownVtbl *)v2;
      v3 = 0LL;
      v15 = 0LL;
    }
    v7 = v9;
  }
  CurrentThreadId = GetCurrentThreadId();
  v11 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, v6, v7, 0LL);
  if ( v7 )
    ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v3);
  if ( v11 < 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(_BYTE *)(*(_QWORD *)(a1 + 56) + 137LL) = 0;
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0LL;
}

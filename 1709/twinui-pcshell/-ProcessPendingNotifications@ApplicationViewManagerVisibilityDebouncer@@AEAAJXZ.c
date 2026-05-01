/*
 * XREFs of ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18007BC20
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B830 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     CAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51___::Invoke @ 0x18007CFF0 (CAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51___--Invoke.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18002564C (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x18007C1A8 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x18007C740 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@AEAAXXZ @ 0x18007C950 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@AEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications(
        ApplicationViewManagerVisibilityDebouncer *this)
{
  struct IObjectArray *v2; // rbx
  ULONGLONG TickCount64; // r13
  __int64 v4; // r15
  struct IApplicationView *v5; // rdi
  unsigned int v6; // r12d
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct IObjectArray *v14; // rcx
  __int64 *v15; // r12
  int v16; // r15d
  __int64 v17; // rcx
  IUnknown *v18; // rdi
  IUnknown *v19; // rax
  IUnknown *v20; // rbx
  ApplicationViewManagerVisibilityDebouncer *v21; // r14
  DWORD CurrentThreadId; // eax
  int v23; // r15d
  struct IObjectArray *v25; // [rsp+30h] [rbp-79h] BYREF
  int v26; // [rsp+38h] [rbp-71h] BYREF
  int v27; // [rsp+40h] [rbp-69h] BYREF
  __int64 v28; // [rsp+48h] [rbp-61h]
  struct IObjectArray **v29; // [rsp+50h] [rbp-59h]
  ApplicationViewManagerVisibilityDebouncer *v30; // [rsp+58h] [rbp-51h]
  ApplicationViewManagerVisibilityDebouncer *v31; // [rsp+60h] [rbp-49h] BYREF
  int v32; // [rsp+68h] [rbp-41h] BYREF
  __int64 v33; // [rsp+70h] [rbp-39h]
  struct IObjectArray **v34; // [rsp+78h] [rbp-31h]
  struct IApplicationView *v35; // [rsp+80h] [rbp-29h]
  unsigned int v36; // [rsp+88h] [rbp-21h]
  __int64 v37; // [rsp+90h] [rbp-19h]
  __int64 v38; // [rsp+98h] [rbp-11h]
  __int64 v39; // [rsp+A0h] [rbp-9h]
  ApplicationViewManagerVisibilityDebouncer *v40; // [rsp+A8h] [rbp-1h]
  IUnknown *v41; // [rsp+B0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  struct IObjectArray *v43; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v44; // [rsp+120h] [rbp+77h]
  IUnknown *v45; // [rsp+128h] [rbp+7Fh]

  v39 = -2LL;
  v43 = 0LL;
  AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)this + 16, &v43);
  v2 = v43;
  while ( 1 )
  {
    if ( !*((_QWORD *)this + 11) )
      goto LABEL_66;
    TickCount64 = GetTickCount64();
    v4 = *((_QWORD *)this + 10);
    v5 = *(struct IApplicationView **)v4;
    v35 = v5;
    if ( v5 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = *(_DWORD *)(v4 + 8);
    v36 = v6;
    v7 = *(_QWORD *)(v4 + 16);
    v37 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = *(_QWORD *)(v4 + 24);
    v38 = v8;
    if ( v6 == 1 )
      break;
LABEL_10:
    v25 = v2;
    if ( v2 )
      ((void (__fastcall *)(struct IObjectArray *))v2->lpVtbl->AddRef)(v2);
    v26 = 0;
    v9 = ((__int64 (__fastcall *)(struct IObjectArray *, int *))v2->lpVtbl->GetCount)(v2, &v26);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD,
        (__int64)"internal\\shell\\private\\inc\\objectarrayadapter.h",
        (const char *)(unsigned int)v9);
    v27 = 0;
    v28 = 0LL;
    v29 = &v25;
    ObjectArrayAdapter<IApplicationViewChangeListener>::Iterator::GetCurrentObject(&v27);
    v32 = v26;
    v33 = 0LL;
    v34 = &v25;
    ObjectArrayAdapter<IApplicationViewChangeListener>::Iterator::GetCurrentObject(&v32);
    while ( v27 != v32 || v29 != v34 )
    {
      v10 = v28;
      v44 = v28;
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      v11 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, _QWORD, __int64))(*(_QWORD *)v10 + 24LL))(
              v10,
              v5,
              v6,
              v7);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x132,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
          (const char *)(unsigned int)v11);
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      ++v27;
      ObjectArrayAdapter<IApplicationViewChangeListener>::Iterator::GetCurrentObject(&v27);
    }
    v12 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v14->lpVtbl->Release)(v14);
    }
    CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
      (char *)this + 80,
      0LL);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v5 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( TickCount64 >= v8 + 50 )
  {
    ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView(this, v5);
    goto LABEL_10;
  }
  v15 = (__int64 *)((char *)this + 184);
  if ( *((_QWORD *)this + 23) )
  {
LABEL_62:
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v5 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v5 + 16LL))(v5);
LABEL_66:
    v23 = 0;
    goto LABEL_67;
  }
  v16 = v8 - TickCount64;
  v40 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 19);
  v30 = this;
  v31 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 19);
  v17 = *v15;
  if ( *v15 )
  {
    *v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = 0LL;
  v45 = 0LL;
  v19 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v19;
  if ( v19 )
  {
    v19->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
    HIDWORD(v19[1].lpVtbl) = 1;
    v19->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v20->lpVtbl = (struct IUnknownVtbl *)off_1801FFE98;
    v20[2].lpVtbl = (struct IUnknownVtbl *)this;
    v20[3].lpVtbl = 0LL;
    if ( &v20[3] == (IUnknown *)&v31 )
    {
      v21 = v31;
    }
    else
    {
      v20[3].lpVtbl = (struct IUnknownVtbl *)this;
      v21 = 0LL;
      v31 = 0LL;
    }
    v18 = v20;
    v45 = v20;
  }
  else
  {
    v21 = v31;
  }
  v41 = v18;
  CurrentThreadId = GetCurrentThreadId();
  v23 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, v16 + 50, v18, (_QWORD *)this + 23);
  if ( v18 )
    ((void (__fastcall *)(IUnknown *))v18->lpVtbl->Release)(v18);
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v21 + 19, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *, __int64))(*(_QWORD *)v31 + 56LL))(v31, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( v23 >= 0 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 19, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v2 = v43;
    v7 = v37;
    v5 = v35;
    goto LABEL_62;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x122,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)(unsigned int)v23);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 19, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(ApplicationViewManagerVisibilityDebouncer *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v35 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v35 + 16LL))(v35);
  v2 = v43;
LABEL_67:
  if ( v2 )
    ((void (__fastcall *)(struct IObjectArray *))v2->lpVtbl->Release)(v2);
  return (unsigned int)v23;
}

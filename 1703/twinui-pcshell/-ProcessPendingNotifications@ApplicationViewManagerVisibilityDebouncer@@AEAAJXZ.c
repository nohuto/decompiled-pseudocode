/*
 * XREFs of ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x180079020
 * Callers:
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180078C40 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     CAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51___::Invoke @ 0x18007A1B0 (CAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51___--Invoke.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180024D24 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??DIterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA?AV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@XZ @ 0x18004363C (--DIterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA-AV-$ComPtr@UIImmersiveMonitor@@@WRL@.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x180079428 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?end@?$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@QEAA?AVIterator@1@XZ @ 0x1800798E4 (-end@-$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@QEAA-AVIterator@1@XZ.c)
 *     ?begin@?$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@QEAA?AVIterator@1@XZ @ 0x180079920 (-begin@-$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@QEAA-AVIterator@1@XZ.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x180079978 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIApplicationViewCollection@@U?$InterfaceList@UIApplicationViewCollectionTestHook@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180079AC0 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationViewVisibilityDebounced.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@AEAAXXZ @ 0x180079C34 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_5f803f865b4b07caa2d72f9fc7ffab60___ @ 0x18007A008 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_5f803f865b4b07caa2d72f9fc7ffab60___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications(
        ApplicationViewManagerVisibilityDebouncer *this)
{
  struct IObjectArray *v2; // rbx
  ULONGLONG TickCount64; // r13
  __int64 v4; // r15
  struct IApplicationView *v5; // rsi
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
  signed __int32 v17; // eax
  signed __int32 v18; // eax
  __int64 v19; // rcx
  IUnknown *v20; // rbx
  DWORD CurrentThreadId; // eax
  int v22; // esi
  __int64 v23; // rcx
  struct IObjectArray *v25; // [rsp+30h] [rbp-69h] BYREF
  int v26; // [rsp+38h] [rbp-61h] BYREF
  int v27; // [rsp+40h] [rbp-59h] BYREF
  __int64 v28; // [rsp+48h] [rbp-51h]
  __int64 v29; // [rsp+50h] [rbp-49h]
  ApplicationViewManagerVisibilityDebouncer *v30; // [rsp+58h] [rbp-41h] BYREF
  ApplicationViewManagerVisibilityDebouncer *v31; // [rsp+60h] [rbp-39h]
  struct IApplicationView *v32; // [rsp+68h] [rbp-31h]
  unsigned int v33; // [rsp+70h] [rbp-29h]
  __int64 v34; // [rsp+78h] [rbp-21h]
  __int64 v35; // [rsp+80h] [rbp-19h]
  int v36; // [rsp+88h] [rbp-11h] BYREF
  __int64 v37; // [rsp+90h] [rbp-9h]
  __int64 v38; // [rsp+98h] [rbp-1h]
  __int64 v39; // [rsp+A0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  struct IObjectArray *v41; // [rsp+100h] [rbp+67h] BYREF
  __int64 v42; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v43; // [rsp+110h] [rbp+77h] BYREF
  ApplicationViewManagerVisibilityDebouncer *v44; // [rsp+118h] [rbp+7Fh]

  v39 = -2LL;
  v41 = 0LL;
  AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)this + 14, &v41);
  v2 = v41;
  while ( 1 )
  {
    if ( !*((_QWORD *)this + 9) )
      goto LABEL_54;
    TickCount64 = GetTickCount64();
    v4 = *((_QWORD *)this + 8);
    v5 = *(struct IApplicationView **)v4;
    v32 = v5;
    if ( v5 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = *(_DWORD *)(v4 + 8);
    v33 = v6;
    v7 = *(_QWORD *)(v4 + 16);
    v34 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = *(_QWORD *)(v4 + 24);
    v35 = v8;
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
    ObjectArrayAdapter<IApplicationViewChangeListener>::begin(&v25, &v27);
    ObjectArrayAdapter<IApplicationViewChangeListener>::end(&v25, &v36);
    while ( v27 != v36 || v29 != v38 )
    {
      ObjectArrayAdapter<IImmersiveMonitor>::Iterator::operator*((__int64)&v27, &v42);
      v10 = v42;
      v11 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, _QWORD, __int64))(*(_QWORD *)v42 + 24LL))(
              v42,
              v5,
              v6,
              v7);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x132,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
          (const char *)(unsigned int)v11);
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      ++v27;
      ObjectArrayAdapter<IApplicationViewChangeListener>::Iterator::GetCurrentObject(&v27);
    }
    v12 = v37;
    if ( v37 )
    {
      v37 = 0LL;
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
      (char *)this + 64,
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
  v15 = (__int64 *)((char *)this + 168);
  if ( *((_QWORD *)this + 21) )
  {
LABEL_50:
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v5 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v5 + 16LL))(v5);
LABEL_54:
    v22 = 0;
    goto LABEL_55;
  }
  v16 = v8 - TickCount64;
  v44 = this;
  do
    v17 = *((_DWORD *)this + 15);
  while ( v17 != 0x7FFFFFFF && v17 != _InterlockedCompareExchange((volatile signed __int32 *)this + 15, v17 + 1, v17) );
  v30 = this;
  v31 = this;
  do
    v18 = *((_DWORD *)this + 15);
  while ( v18 != 0x7FFFFFFF && v18 != _InterlockedCompareExchange((volatile signed __int32 *)this + 15, v18 + 1, v18) );
  v19 = *v15;
  if ( *v15 )
  {
    *v15 = 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 16LL))(v19, 0x7FFFFFFFLL);
  }
  v20 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_5f803f865b4b07caa2d72f9fc7ffab60___(
                        &v43,
                        &v30);
  CurrentThreadId = GetCurrentThreadId();
  v22 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, v16 + 50, v20, (__int64 *)this + 21);
  v23 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( v31 )
    ((void (*)(void))Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::InterfaceList<IApplicationViewCollection,Microsoft::WRL::Details::InterfaceList<IApplicationViewCollectionTestHook,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release)();
  if ( v22 >= 0 )
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::InterfaceList<IApplicationViewCollection,Microsoft::WRL::Details::InterfaceList<IApplicationViewCollectionTestHook,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(this);
    v2 = v41;
    v7 = v34;
    v5 = v32;
    goto LABEL_50;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x122,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)(unsigned int)v22);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::InterfaceList<IApplicationViewCollection,Microsoft::WRL::Details::InterfaceList<IApplicationViewCollectionTestHook,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(this);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v32 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v32 + 16LL))(v32);
  v2 = v41;
LABEL_55:
  if ( v2 )
    ((void (__fastcall *)(struct IObjectArray *))v2->lpVtbl->Release)(v2);
  return (unsigned int)v22;
}

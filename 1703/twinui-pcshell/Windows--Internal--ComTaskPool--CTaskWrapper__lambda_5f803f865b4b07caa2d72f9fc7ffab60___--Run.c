/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run @ 0x18007A050
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIApplicationViewChangeListener@@U?$InterfaceList@UIApplicationViewCollection@@U?$InterfaceList@UIApplicationViewCollectionTestHook@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180079AC0 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationViewVisibilityDebounced.c)
 *     CreateAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51___ @ 0x180079FCC (CreateAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51___.c)
 *     ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18007ADC8 (-AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  volatile signed __int32 *v5; // rdx
  signed __int32 v6; // eax
  NotificationDispatcher *v7; // rdi
  signed __int32 v8; // eax
  struct IAsyncCallback *v9; // rbx
  int v10; // eax
  volatile signed __int32 *v11; // rcx
  volatile signed __int32 *v12; // [rsp+28h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h]
  volatile signed __int32 *v14; // [rsp+38h] [rbp-18h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IAsyncCallback *v17; // [rsp+70h] [rbp+20h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp+28h] BYREF
  volatile signed __int32 **v19; // [rsp+80h] [rbp+30h]

  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 104LL), &SRWLock);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v2 + 168);
  if ( v3 )
  {
    *(_QWORD *)(v2 + 168) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(volatile signed __int32 **)(a1 + 24);
  v12 = v5;
  if ( v5 )
  {
    do
      v6 = *((_DWORD *)v5 + 15);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange(v5 + 15, v6 + 1, v6) );
    v5 = v12;
  }
  v13 = v4;
  v19 = &v12;
  v7 = *(NotificationDispatcher **)(*(_QWORD *)(a1 + 16) + 96LL);
  v14 = v5;
  if ( v5 )
  {
    do
      v8 = *((_DWORD *)v5 + 15);
    while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange(v5 + 15, v8 + 1, v8) );
    v4 = v13;
  }
  v15 = v4;
  CreateAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51_(&v17);
  if ( v14 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::InterfaceList<IApplicationViewCollection,Microsoft::WRL::Details::InterfaceList<IApplicationViewCollectionTestHook,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v14);
  v9 = v17;
  if ( v17 )
  {
    v10 = NotificationDispatcher::AddTask(v7, v17);
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1D,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
        (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
      (const char *)0x8007000ELL);
  }
  v11 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::InterfaceList<IApplicationViewCollection,Microsoft::WRL::Details::InterfaceList<IApplicationViewCollectionTestHook,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}

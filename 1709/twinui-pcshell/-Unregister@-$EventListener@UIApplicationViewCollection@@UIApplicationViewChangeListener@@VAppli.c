/*
 * XREFs of ?Unregister@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x18019310C
 * Callers:
 *     ??_EAppViewDataSourceAdapter@@UEAAPEAXI@Z @ 0x180191140 (--_EAppViewDataSourceAdapter@@UEAAPEAXI@Z.c)
 *     ??1ShellHookEventListener@AppViewEventHelpers@@QEAA@XZ @ 0x180191270 (--1ShellHookEventListener@AppViewEventHelpers@@QEAA@XZ.c)
 *     ?Register@?$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellHookRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIImmersiveShellHookService@@@Z @ 0x180192D2C (-Register@-$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellH.c)
 *     ?Register@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x180192DFC (-Register@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplica.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18007B24C (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x18007B2F8 (--1SmartCookie@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall AppViewEventHelpers::EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>::Unregister(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  SmartCookie *v3; // rbx
  RTL_SRWLOCK *v4; // rbp
  PVOID Ptr; // rcx
  RTL_SRWLOCK *v6; // rdi
  __int64 v7; // rcx
  SmartCookie *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(RTL_SRWLOCK **)(a1 + 8);
  if ( v2 )
  {
    v3 = 0LL;
    v8 = 0LL;
    v4 = v2 + 8;
    AcquireSRWLockExclusive(v2 + 8);
    Ptr = v2[9].Ptr;
    v2[9].Ptr = 0LL;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v6 = v2 + 7;
    if ( &v8 != (SmartCookie **)v6 )
    {
      v3 = (SmartCookie *)v6->Ptr;
      v6->Ptr = 0LL;
      v8 = v3;
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    SmartCookie::Unregister(v3);
    if ( v3 )
    {
      SmartCookie::~SmartCookie((SmartCookie **)v3);
      operator delete(v3);
    }
    v7 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
}

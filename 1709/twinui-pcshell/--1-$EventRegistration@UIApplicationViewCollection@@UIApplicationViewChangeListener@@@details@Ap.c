/*
 * XREFs of ??1?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@UEAA@XZ @ 0x180193C34
 * Callers:
 *     ??_GShellHookRegistration@details@AppViewEventHelpers@@UEAAPEAXI@Z @ 0x180193C00 (--_GShellHookRegistration@details@AppViewEventHelpers@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1SmartCookie@@QEAA@XZ @ 0x18007B2F8 (--1SmartCookie@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AppViewEventHelpers::details::EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>::~EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rdi
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *(void **)(a1 + 56);
  if ( v3 )
  {
    SmartCookie::~SmartCookie(*(SmartCookie ***)(a1 + 56));
    operator delete(v3);
  }
  *(_DWORD *)(a1 + 52) = -1073741823;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}

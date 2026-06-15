/*
 * XREFs of ?InternalTimerCallback@RoutingTimer@@KAXPEAXE@Z @ 0x1800C8FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall RoutingTimer::InternalTimerCallback(struct _RTL_CRITICAL_SECTION **a1)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v3; // [rsp+30h] [rbp-18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    a1[3]);
  (*(void (__fastcall **)(struct _RTL_CRITICAL_SECTION **))&(*a1)->LockCount)(a1);
  ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION **, struct _RTL_CRITICAL_SECTION *))(*a1)->SpinCount)(a1, a1[1]);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}

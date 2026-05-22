/*
 * XREFs of _lambda_4a72313d4a7b8def72ed26018d805a27_::_lambda_invoker_cdecl_ @ 0x180091CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendTrackedNodesUpdates@SpatialInputControllerCollection@@QEAAXPEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x1800946C8 (-SendTrackedNodesUpdates@SpatialInputControllerCollection@@QEAAXPEAUIPerceptionTimestamp@Percept.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_4a72313d4a7b8def72ed26018d805a27_::_lambda_invoker_cdecl_(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  struct Windows::Perception::IPerceptionTimestamp **v3; // rax
  struct Windows::Perception::IPerceptionTimestamp *v4; // rbx
  SpatialInputControllerCollection *v5; // rcx
  struct Windows::Perception::IPerceptionTimestamp *v7; // [rsp+50h] [rbp+8h] BYREF
  struct Windows::Perception::IPerceptionTimestamp *v8; // [rsp+58h] [rbp+10h]
  __int64 v9; // [rsp+60h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  v3 = (struct Windows::Perception::IPerceptionTimestamp **)(a1 + 120);
  v4 = 0LL;
  v7 = 0LL;
  if ( &v7 != (struct Windows::Perception::IPerceptionTimestamp **)(a1 + 120) )
  {
    v4 = *v3;
    v7 = *v3;
    *v3 = 0LL;
  }
  v8 = v4;
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
    v9 = a1 + 32;
    v5 = *(SpatialInputControllerCollection **)(a1 + 24);
    if ( v5 )
      SpatialInputControllerCollection::SendTrackedNodesUpdates(v5, v4);
    if ( a1 != -32 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  }
  if ( v4 )
    (*(void (__fastcall **)(struct Windows::Perception::IPerceptionTimestamp *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF) == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return 0LL;
}

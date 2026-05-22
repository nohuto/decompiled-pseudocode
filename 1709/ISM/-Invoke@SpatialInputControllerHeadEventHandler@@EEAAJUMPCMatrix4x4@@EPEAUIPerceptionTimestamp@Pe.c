/*
 * XREFs of ?Invoke@SpatialInputControllerHeadEventHandler@@EEAAJUMPCMatrix4x4@@EPEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x180091BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInputControllerHeadEventHandler::Invoke(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // rcx

  if ( *(_QWORD *)(a1 + 72) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 12));
    v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
    if ( *(_QWORD *)(a1 + 120) != a4 )
    {
      if ( a4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
      v7 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 120) = a4;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    if ( (*(int (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64, __int64))(**(_QWORD **)(a1 + 72) + 128LL))(
           *(_QWORD *)(a1 + 72),
           lambda_4a72313d4a7b8def72ed26018d805a27_::_lambda_invoker_cdecl_,
           a1,
           3LL) < 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return 0LL;
}

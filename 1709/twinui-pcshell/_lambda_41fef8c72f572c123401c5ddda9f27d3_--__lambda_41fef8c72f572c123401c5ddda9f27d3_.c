/*
 * XREFs of _lambda_41fef8c72f572c123401c5ddda9f27d3_::__lambda_41fef8c72f572c123401c5ddda9f27d3_ @ 0x18017AF20
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_509b9a9f35e2a008debf118f8fd212fd___ @ 0x18017AD10 (CreationThreadDispatcher--RunAsync__lambda_509b9a9f35e2a008debf118f8fd212fd___.c)
 *     ??_E?$CTaskWrapper@V_lambda_41fef8c72f572c123401c5ddda9f27d3_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18017B710 (--_E-$CTaskWrapper@V_lambda_41fef8c72f572c123401c5ddda9f27d3_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_509b9a9f35e2a008debf118f8fd212fd____::_1_::dtor$2 @ 0x1801F5477 (_CreationThreadDispatcher--RunAsync__lambda_509b9a9f35e2a008debf118f8fd212fd____--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_41fef8c72f572c123401c5ddda9f27d3_::__lambda_41fef8c72f572c123401c5ddda9f27d3_(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = (volatile signed __int32 *)a1[2];
  if ( v2 )
  {
    a1[2] = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 11, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v4 = a1[1];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}

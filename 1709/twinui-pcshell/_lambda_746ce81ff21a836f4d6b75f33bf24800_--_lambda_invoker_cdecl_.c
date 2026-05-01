/*
 * XREFs of _lambda_746ce81ff21a836f4d6b75f33bf24800_::_lambda_invoker_cdecl_ @ 0x180132F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ @ 0x1801370E0 (-InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_746ce81ff21a836f4d6b75f33bf24800_::_lambda_invoker_cdecl_(volatile signed __int32 *Parameter)
{
  ViewManagerBridge::InitializeAndRunCoreUiMessageLoop((ViewManagerBridge *)Parameter);
  if ( Parameter )
  {
    if ( _InterlockedExchangeAdd(Parameter + 21, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)Parameter + 280LL))(Parameter, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return 0LL;
}

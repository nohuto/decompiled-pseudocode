/*
 * XREFs of _lambda_73af3bb2f3d5c91ade250b7343a71e20_::__lambda_73af3bb2f3d5c91ade250b7343a71e20_ @ 0x1800786D4
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x180078310 (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 *     ??_G?$CAsyncCallbackWithLambda@V_lambda_73af3bb2f3d5c91ade250b7343a71e20_@@@@UEAAPEAXI@Z @ 0x180079450 (--_G-$CAsyncCallbackWithLambda@V_lambda_73af3bb2f3d5c91ade250b7343a71e20_@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_73af3bb2f3d5c91ade250b7343a71e20_::__lambda_73af3bb2f3d5c91ade250b7343a71e20_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[3];
  if ( v2 )
  {
    a1[3] = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 228), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 80) + 64LL))(v2 + 80, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}

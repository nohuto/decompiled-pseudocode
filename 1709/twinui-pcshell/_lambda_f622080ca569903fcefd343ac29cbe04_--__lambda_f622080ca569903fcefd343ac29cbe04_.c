/*
 * XREFs of _lambda_f622080ca569903fcefd343ac29cbe04_::__lambda_f622080ca569903fcefd343ac29cbe04_ @ 0x18015AF4C
 * Callers:
 *     _XamlAllUpViewHost::AnimateDismissFrames_::_1_::dtor$25 @ 0x1801F16D6 (_XamlAllUpViewHost--AnimateDismissFrames_--_1_--dtor$25.c)
 *     _XamlAllUpViewHost::AnimateDismissFrames_::_1_::dtor$24 @ 0x1801F1702 (_XamlAllUpViewHost--AnimateDismissFrames_--_1_--dtor$24.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_f622080ca569903fcefd343ac29cbe04_::__lambda_f622080ca569903fcefd343ac29cbe04_(
        volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 37, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 80LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}

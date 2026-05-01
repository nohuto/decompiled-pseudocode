/*
 * XREFs of Microsoft::WRL::ComPtr_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____::_ComPtr_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____ @ 0x1801DD86C
 * Callers:
 *     _DesktopSingleViewShellExperiencePersonality::RegisterSessionIdleDetector_::_1_::dtor$1 @ 0x1801F7C60 (_DesktopSingleViewShellExperiencePersonality--RegisterSessionIdleDetector_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____::_ComPtr_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____(
        volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 40LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}

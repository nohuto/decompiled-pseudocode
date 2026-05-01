/*
 * XREFs of ??1?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x180100ECC
 * Callers:
 *     _HolographicPositioner::_TransitionViewToHolographic_::_1_::dtor$3 @ 0x1801ED708 (_HolographicPositioner--_TransitionViewToHolographic_--_1_--dtor$3.c)
 *     _HolographicPositioner::_TransitionViewFromHolographic_::_1_::dtor$1 @ 0x1801ED72C (_HolographicPositioner--_TransitionViewFromHolographic_--_1_--dtor$1.c)
 *     _HolographicPositioner::_UpdateViewStateDataForView_::_1_::dtor$1 @ 0x1801ED744 (_HolographicPositioner--_UpdateViewStateDataForView_--_1_--dtor$1.c)
 *     _ApplicationViewBackedViewHostItem::put_Visibility_::_1_::dtor$1 @ 0x1801ED9B6 (_ApplicationViewBackedViewHostItem--put_Visibility_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewOperation>::~ComPtr<ApplicationViewOperation>(
        volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 13, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 216LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}

/*
 * XREFs of _Microsoft::WRL::Details::Make_AgileRegistrationList::AgileCallbackArray_std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item____&___ptr64__::_1_::dtor$0 @ 0x18009C97F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F7638 (--1-$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_AgileRegistrationList::AgileCallbackArray_std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item________ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<AgileRegistrationList::AgileCallbackArray>::~ComPtr<AgileRegistrationList::AgileCallbackArray>(*(_QWORD *)(a2 + 80));
  }
  return result;
}

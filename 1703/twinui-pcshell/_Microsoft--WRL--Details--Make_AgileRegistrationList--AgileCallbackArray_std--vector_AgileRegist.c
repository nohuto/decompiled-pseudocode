/*
 * XREFs of _Microsoft::WRL::Details::Make_AgileRegistrationList::AgileCallbackArray_std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item____&___ptr64__::_1_::dtor$0 @ 0x180198DD7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@WRL@Microsoft@@QEAA@XZ @ 0x180024C54 (--1-$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@WRL@Microsoft@@QEAA@XZ.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::Details::Make_AgileRegistrationList::AgileCallbackArray_std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item________ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 *result; // rax

  result = (volatile signed __int32 *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<AgileRegistrationList::AgileCallbackArray>::~ComPtr<AgileRegistrationList::AgileCallbackArray>(*(volatile signed __int32 ***)(a2 + 80));
  }
  return result;
}

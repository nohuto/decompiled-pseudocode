/*
 * XREFs of __lambda_d4c350abf5d24183546902bae9e0768c_::operator()_::_1_::dtor$42 @ 0x180208782
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall _lambda_d4c350abf5d24183546902bae9e0768c_::operator()_::_1_::dtor_42(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 0x20;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~0x20u;
    return __abi_winrt_ptr_dtor(*(_QWORD *)(a2 + 160));
  }
  return result;
}

/*
 * XREFs of __lambda_d4c350abf5d24183546902bae9e0768c_::operator()_::_1_::dtor$8 @ 0x1802085DA
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall _lambda_d4c350abf5d24183546902bae9e0768c_::operator()_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return __abi_winrt_ptr_dtor(*(_QWORD *)(a2 + 80));
  }
  return result;
}

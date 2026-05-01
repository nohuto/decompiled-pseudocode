/*
 * XREFs of __lambda_d4c350abf5d24183546902bae9e0768c_::operator()_::_1_::dtor$43 @ 0x1802087AB
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall _lambda_d4c350abf5d24183546902bae9e0768c_::operator()_::_1_::dtor_43(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 0x40;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~0x40u;
    return __abi_winrt_ptr_dtor(*(_QWORD *)(a2 + 64));
  }
  return result;
}

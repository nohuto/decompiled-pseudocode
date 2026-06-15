/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7b5d4040f449a8cdcef3c365c74c67ab__void_::_Delete_this @ 0x1800F5120
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_7b5d4040f449a8cdcef3c365c74c67ab__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x20uLL);
}

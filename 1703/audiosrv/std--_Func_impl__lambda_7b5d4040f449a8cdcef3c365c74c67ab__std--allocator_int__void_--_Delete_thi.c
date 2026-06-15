/*
 * XREFs of std::_Func_impl__lambda_7b5d4040f449a8cdcef3c365c74c67ab__std::allocator_int__void_::_Delete_this @ 0x18004CF20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl__lambda_7b5d4040f449a8cdcef3c365c74c67ab__std::allocator_int__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<bool,ISaDeviceProxy *>::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x20uLL);
}

/*
 * XREFs of std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Delete_this @ 0x180045200
 * Callers:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180045160 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<bool,ISaDeviceProxy *>::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x18uLL);
}

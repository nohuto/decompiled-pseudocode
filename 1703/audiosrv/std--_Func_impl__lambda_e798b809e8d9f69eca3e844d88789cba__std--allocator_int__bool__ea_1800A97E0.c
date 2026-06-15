/*
 * XREFs of std::_Func_impl__lambda_e798b809e8d9f69eca3e844d88789cba__std::allocator_int__bool_ISaDeviceProxy_____ptr64_::_Delete_this @ 0x1800A97E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl__lambda_e798b809e8d9f69eca3e844d88789cba__std::allocator_int__bool_ISaDeviceProxy_____ptr64_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<bool,ISaDeviceProxy *>::`vftable';
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}

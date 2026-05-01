/*
 * XREFs of std::_Func_impl_no_alloc__lambda_df930b25f2cfeb57d32c66b706a0431a__void_bool_::_Delete_this @ 0x1801CFD80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_df930b25f2cfeb57d32c66b706a0431a__void_bool_::_Delete_this(
        char *a1,
        char a2)
{
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}

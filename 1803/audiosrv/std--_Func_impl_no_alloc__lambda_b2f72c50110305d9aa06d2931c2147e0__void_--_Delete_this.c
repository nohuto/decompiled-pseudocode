/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_::_Delete_this @ 0x1800CB340
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _lambda_b2f72c50110305d9aa06d2931c2147e0_::__lambda_b2f72c50110305d9aa06d2931c2147e0_ @ 0x1800C7E28 (_lambda_b2f72c50110305d9aa06d2931c2147e0_--__lambda_b2f72c50110305d9aa06d2931c2147e0_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_::_Delete_this(
        __int64 *a1,
        char a2)
{
  lambda_b2f72c50110305d9aa06d2931c2147e0_::__lambda_b2f72c50110305d9aa06d2931c2147e0_(a1 + 1);
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x20uLL);
}

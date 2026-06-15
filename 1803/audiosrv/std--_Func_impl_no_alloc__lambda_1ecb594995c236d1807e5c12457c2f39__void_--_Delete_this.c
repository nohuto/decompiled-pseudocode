/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1ecb594995c236d1807e5c12457c2f39__void_::_Delete_this @ 0x1800CB260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_1ecb594995c236d1807e5c12457c2f39__void_::_Delete_this(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 1);
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}

/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IProcessSubmixProxy__std::allocator_Microsoft::WRL::ComPtr_IProcessSubmixProxy_____::emplace_back_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_&___ptr64__::_1_::catch$77 @ 0x180092144
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x180036B83 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IProcessSubmixProxy__std::allocator_Microsoft::WRL::ComPtr_IProcessSubmixProxy_____::emplace_back_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_____ptr64__::_1_::catch_77(
        __int64 a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // rbx

  v3 = (_QWORD *)a2[16];
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v3[a2[17]]);
  std::_Deallocate(v3, a2[14], 8uLL);
  throw;
}

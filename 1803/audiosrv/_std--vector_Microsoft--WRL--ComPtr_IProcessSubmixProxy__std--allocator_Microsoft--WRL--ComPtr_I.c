/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IProcessSubmixProxy__std::allocator_Microsoft::WRL::ComPtr_IProcessSubmixProxy_____::emplace_back_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_&___ptr64__::_1_::catch$65 @ 0x1800C7AC3
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IProcessSubmixProxy__std::allocator_Microsoft::WRL::ComPtr_IProcessSubmixProxy_____::emplace_back_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_____ptr64__::_1_::catch_65(
        __int64 a1,
        unsigned __int64 *a2)
{
  _QWORD *v3; // rbx

  v3 = (_QWORD *)a2[16];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v3[a2[17]]);
  std::_Deallocate(v3, a2[14], 8uLL);
  throw;
}

/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IUnknown__std::allocator_Microsoft::WRL::ComPtr_IUnknown_____::emplace_back_Microsoft::WRL::ComPtr_IUnknown____::_1_::catch$65 @ 0x180190FAB
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IUnknown__std::allocator_Microsoft::WRL::ComPtr_IUnknown_____::emplace_back_Microsoft::WRL::ComPtr_IUnknown____::_1_::catch_65(
        __int64 a1,
        unsigned __int64 *a2)
{
  char *v3; // rbx

  v3 = (char *)a2[16];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&v3[8 * a2[17]]);
  std::_Deallocate(v3, a2[14], 8uLL);
  throw;
}

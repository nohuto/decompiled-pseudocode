/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_IApplicationView__std::allocator_Microsoft::WRL::ComPtr_IApplicationView_____::emplace_back_Microsoft::WRL::ComPtr_IApplicationView____::_1_::catch$65 @ 0x1801BFF23
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ??_G?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18013AEC8 (--_G-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_IApplicationView__std::allocator_Microsoft::WRL::ComPtr_IApplicationView_____::emplace_back_Microsoft::WRL::ComPtr_IApplicationView____::_1_::catch_65(
        __int64 a1,
        unsigned __int64 *a2)
{
  char *v3; // rbx

  v3 = (char *)a2[16];
  Microsoft::WRL::ComPtr<IApplicationView>::`scalar deleting destructor'((CWinRTApplicationView **)&v3[8 * a2[17]]);
  std::_Deallocate(v3, a2[14], 8uLL);
  throw;
}

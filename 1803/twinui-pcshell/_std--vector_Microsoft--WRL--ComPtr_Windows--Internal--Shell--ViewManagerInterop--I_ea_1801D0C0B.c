/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____::_Reallocate_exactly_::_1_::catch$20 @ 0x1801D0C0B
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____::_Reallocate_exactly_::_1_::catch_20(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate(*(char **)(a2 + 96), *(_QWORD *)(a2 + 104), 8uLL);
  throw;
}

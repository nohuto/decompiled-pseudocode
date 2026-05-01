/*
 * XREFs of ??$destroy@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@QEAAXPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x180070018
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_IApplicationView__std::allocator_Microsoft::WRL::ComPtr_IApplicationView_____::emplace_back_Microsoft::WRL::ComPtr_IApplicationView____::_1_::catch$102 @ 0x18019ABC7 (_std--vector_Microsoft--WRL--ComPtr_IApplicationView__std--allocator_Microsoft--WRL--ComPtr_IApp.c)
 *     _std::vector_Microsoft::WRL::ComPtr_MonitorFrame__std::allocator_Microsoft::WRL::ComPtr_MonitorFrame_____::emplace_back_Microsoft::WRL::ComPtr_MonitorFrame__const_&___ptr64__::_1_::catch$102 @ 0x18019D868 (_std--vector_Microsoft--WRL--ComPtr_MonitorFrame__std--allocator_Microsoft--WRL--ComPtr_MonitorF.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____::emplace_back_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____::_1_::catch$69 @ 0x18019EC28 (_std--vector_Microsoft--WRL--ComPtr_Windows--Internal--Shell--ViewManagerInterop--I_ea_18019EC28.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>::destroy<Microsoft::WRL::ComPtr<IApplicationView>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}

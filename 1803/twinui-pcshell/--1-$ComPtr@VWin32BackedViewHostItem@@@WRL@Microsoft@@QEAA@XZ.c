/*
 * XREFs of ??1?$ComPtr@VWin32BackedViewHostItem@@@WRL@Microsoft@@QEAA@XZ @ 0x1801ACD00
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ApplicationViewBackedViewHostItem_ApplicationViewBackedViewHostItem_IApplicationView_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x1801AB42F (_Microsoft--WRL--Details--MakeAndInitialize_ApplicationViewBackedViewHostItem_Appli_ea_1801AB42F.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Win32BackedViewHostItem_Win32BackedViewHostItem_IApplicationView_____ptr64_&___ptr64_HWND_______ptr64_&___ptr64_HolographicPositioner_____ptr64__::_1_::dtor$2 @ 0x1801AB77A (_Microsoft--WRL--Details--MakeAndInitialize_Win32BackedViewHostItem_Win32BackedView_ea_1801AB77A.c)
 *     _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$2 @ 0x1801B342F (_HolographicPositioner--_RaiseViewAdded_--_1_--dtor$2.c)
 *     _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$3 @ 0x1801B343B (_HolographicPositioner--_RaiseViewAdded_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Win32BackedViewHostItem>::~ComPtr<Win32BackedViewHostItem>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::InternalRelease(a1);
}

/*
 * XREFs of ??1?$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@QEAA@XZ @ 0x180261D34
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktop_VirtualDesktop_IVirtualDesktop_____ptr64_&___ptr64_IThumbnailDeviceSource_____ptr64_&___ptr64_IVirtualDesktopManagerInternal_____ptr64_&___ptr64_IVirtualDesktopNotificationService_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x180261A4E (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktop_VirtualDesktop_IVirtualD_ea_180261A4E.c)
 *     _VirtualDesktop_CreateInstance_::_1_::dtor$0 @ 0x180262927 (_VirtualDesktop_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktop>::~ComPtr<VirtualDesktop>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktop>::InternalRelease(a1);
}

/*
 * XREFs of ?Release@VirtualDesktopController@@UEAAKXZ @ 0x180261210
 * Callers:
 *     ?Release@VirtualDesktopController@@W7EAAKXZ @ 0x1800AD9A0 (-Release@VirtualDesktopController@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WBA@EAAKXZ @ 0x1800AD9B0 (-Release@VirtualDesktopController@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WBI@EAAKXZ @ 0x1800AD9C0 (-Release@VirtualDesktopController@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopController::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::Release(this);
}

/*
 * XREFs of ?QueryInterface@VirtualDesktopController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B75B0
 * Callers:
 *     ?QueryInterface@VirtualDesktopController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B85E0 (-QueryInterface@VirtualDesktopController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B8620 (-QueryInterface@VirtualDesktopController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopController@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B8660 (-QueryInterface@VirtualDesktopController@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopController::QueryInterface(
        VirtualDesktopController *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}

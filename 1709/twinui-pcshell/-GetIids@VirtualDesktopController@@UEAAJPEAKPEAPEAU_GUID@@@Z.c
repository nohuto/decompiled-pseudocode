/*
 * XREFs of ?GetIids@VirtualDesktopController@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801B75A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopController::GetIids(
        VirtualDesktopController *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::GetIids(
           this,
           a2,
           a3);
}

/*
 * XREFs of ?QueryInterface@VirtualDesktopDataSource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B44B0
 * Callers:
 *     ?QueryInterface@VirtualDesktopDataSource@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B7450 (-QueryInterface@VirtualDesktopDataSource@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B74A0 (-QueryInterface@VirtualDesktopDataSource@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B7500 (-QueryInterface@VirtualDesktopDataSource@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktopDataSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B7570 (-QueryInterface@VirtualDesktopDataSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopDataSource::QueryInterface(
        VirtualDesktopDataSource *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}

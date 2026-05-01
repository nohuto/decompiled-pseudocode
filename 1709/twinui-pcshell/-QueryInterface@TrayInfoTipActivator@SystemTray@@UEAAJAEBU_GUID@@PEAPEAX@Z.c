/*
 * XREFs of ?QueryInterface@TrayInfoTipActivator@SystemTray@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BB9C0
 * Callers:
 *     ?QueryInterface@TrayInfoTipActivator@SystemTray@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BBE50 (-QueryInterface@TrayInfoTipActivator@SystemTray@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@TrayInfoTipActivator@SystemTray@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BBE70 (-QueryInterface@TrayInfoTipActivator@SystemTray@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall SystemTray::TrayInfoTipActivator::QueryInterface(
        SystemTray::TrayInfoTipActivator *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}

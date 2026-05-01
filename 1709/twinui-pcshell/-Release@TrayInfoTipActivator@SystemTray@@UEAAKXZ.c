/*
 * XREFs of ?Release@TrayInfoTipActivator@SystemTray@@UEAAKXZ @ 0x1801BB9D0
 * Callers:
 *     ?Release@TrayInfoTipActivator@SystemTray@@W7EAAKXZ @ 0x1801BBE80 (-Release@TrayInfoTipActivator@SystemTray@@W7EAAKXZ.c)
 *     ?Release@TrayInfoTipActivator@SystemTray@@WBA@EAAKXZ @ 0x1801BBE90 (-Release@TrayInfoTipActivator@SystemTray@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall SystemTray::TrayInfoTipActivator::Release(SystemTray::TrayInfoTipActivator *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>::Release(this);
}

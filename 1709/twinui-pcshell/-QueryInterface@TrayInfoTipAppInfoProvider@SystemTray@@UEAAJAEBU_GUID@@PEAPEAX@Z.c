/*
 * XREFs of ?QueryInterface@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B9A80
 * Callers:
 *     ?QueryInterface@TrayInfoTipAppInfoProvider@SystemTray@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BB8B0 (-QueryInterface@TrayInfoTipAppInfoProvider@SystemTray@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@TrayInfoTipAppInfoProvider@SystemTray@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BB910 (-QueryInterface@TrayInfoTipAppInfoProvider@SystemTray@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall SystemTray::TrayInfoTipAppInfoProvider::QueryInterface(
        SystemTray::TrayInfoTipAppInfoProvider *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}

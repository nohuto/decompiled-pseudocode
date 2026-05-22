/*
 * XREFs of ?UnregisterCmNotifCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800B46D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotifCallback(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context)
{
  CM_Unregister_Notification(Context);
}

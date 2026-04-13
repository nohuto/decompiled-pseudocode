/*
 * XREFs of ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022450
 * Callers:
 *     ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025970 (-QueryInterface@ContentManagementBrokerServer@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025CE0 (-QueryInterface@ContentManagementBrokerServer@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025EF0 (-QueryInterface@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::QueryInterface(
        ContentManagement::ContentManagementBrokerServer *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::QueryInterface(
           this,
           a2,
           a3);
}

/*
 * XREFs of ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementBrokerServer::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::ContentManagementBrokerServer::QueryInterface(
           (ContentManagement::ContentManagementBrokerServer *)(a1 - 56),
           a2,
           a3);
}

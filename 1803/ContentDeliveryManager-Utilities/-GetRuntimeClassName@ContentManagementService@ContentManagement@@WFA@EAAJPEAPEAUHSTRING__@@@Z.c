/*
 * XREFs of ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WFA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180029480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ContentManagementService::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  return ContentManagement::ContentManagementService::GetRuntimeClassName(
           (ContentManagement::ContentManagementService *)(a1 - 80),
           a2);
}

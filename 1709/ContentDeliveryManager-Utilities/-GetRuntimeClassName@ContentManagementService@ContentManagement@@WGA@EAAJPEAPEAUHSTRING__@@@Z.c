/*
 * XREFs of ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WGA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800259A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ContentManagementService::GetRuntimeClassName(__int64 a1, HSTRING *a2)
{
  return ContentManagement::ContentManagementService::GetRuntimeClassName(
           (ContentManagement::ContentManagementService *)(a1 - 96),
           a2);
}

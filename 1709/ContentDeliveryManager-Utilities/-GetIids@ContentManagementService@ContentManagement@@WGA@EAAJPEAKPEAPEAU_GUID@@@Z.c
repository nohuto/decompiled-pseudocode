/*
 * XREFs of ?GetIids@ContentManagementService@ContentManagement@@WGA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180025BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementService::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return ContentManagement::ContentManagementService::GetIids(
           (ContentManagement::ContentManagementService *)(a1 - 96),
           a2,
           a3);
}

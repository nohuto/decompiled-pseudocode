/*
 * XREFs of ?GetRuntimeClassName@IdentityManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180010ED0
 * Callers:
 *     ?GetRuntimeClassName@IdentityManager@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180021CC0 (-GetRuntimeClassName@IdentityManager@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::IdentityManager::GetRuntimeClassName(
        ContentManagement::IdentityManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.IdentityManager", 0x21u, a2);
}

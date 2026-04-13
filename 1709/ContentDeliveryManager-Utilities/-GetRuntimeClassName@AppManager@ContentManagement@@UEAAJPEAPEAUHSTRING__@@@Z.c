/*
 * XREFs of ?GetRuntimeClassName@AppManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000C4A0
 * Callers:
 *     ?GetRuntimeClassName@AppManager@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180021B10 (-GetRuntimeClassName@AppManager@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::AppManager::GetRuntimeClassName(ContentManagement::AppManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.AppManager", 0x1Cu, a2);
}

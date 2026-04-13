/*
 * XREFs of ?GetRuntimeClassName@LaunchManager@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18000FB90
 * Callers:
 *     ?GetRuntimeClassName@LaunchManager@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180021E40 (-GetRuntimeClassName@LaunchManager@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::LaunchManager::GetRuntimeClassName(
        ContentManagement::LaunchManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.LaunchManager", 0x1Fu, a2);
}

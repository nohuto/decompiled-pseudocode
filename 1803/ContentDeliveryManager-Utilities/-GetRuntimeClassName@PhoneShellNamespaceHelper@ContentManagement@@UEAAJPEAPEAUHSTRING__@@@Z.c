/*
 * XREFs of ?GetRuntimeClassName@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180012420
 * Callers:
 *     ?GetRuntimeClassName@PhoneShellNamespaceHelper@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180024810 (-GetRuntimeClassName@PhoneShellNamespaceHelper@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::PhoneShellNamespaceHelper::GetRuntimeClassName(
        ContentManagement::PhoneShellNamespaceHelper *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.PhoneShellNamespaceHelper", 0x2Bu, a2);
}

/*
 * XREFs of ?GetRuntimeClassName@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180006D40
 * Callers:
 *     ?GetRuntimeClassName@AppInstallInfoRecordImpl@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180021F20 (-GetRuntimeClassName@AppInstallInfoRecordImpl@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::AppInstallInfoRecordImpl::GetRuntimeClassName(
        ContentManagement::AppInstallInfoRecordImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.AppInstallInfoRecord", 0x26u, a2);
}

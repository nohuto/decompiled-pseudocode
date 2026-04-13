/*
 * XREFs of ?GetRuntimeClassName@MobilityExperienceSettings@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800115A0
 * Callers:
 *     ?GetRuntimeClassName@MobilityExperienceSettings@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180021ED0 (-GetRuntimeClassName@MobilityExperienceSettings@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::MobilityExperienceSettings::GetRuntimeClassName(
        ContentManagement::MobilityExperienceSettings *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.MobilityExperienceSettings", 0x2Cu, a2);
}

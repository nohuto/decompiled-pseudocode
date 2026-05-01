/*
 * XREFs of ?GetRuntimeClassName@CActionCenterExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180090E10
 * Callers:
 *     ?GetRuntimeClassName@CActionCenterExperienceManager@@WEI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180097870 (-GetRuntimeClassName@CActionCenterExperienceManager@@WEI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CActionCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180097A80 (-GetRuntimeClassName@CActionCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CActionCenterExperienceManager::GetRuntimeClassName(
        CActionCenterExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.ActionCenterExperienceManager", 0x3Fu, a2);
}

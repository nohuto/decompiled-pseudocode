/*
 * XREFs of ?GetRuntimeClassName@CActionCenterExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180094F60
 * Callers:
 *     ?GetRuntimeClassName@CActionCenterExperienceManager@@WEI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18009D700 (-GetRuntimeClassName@CActionCenterExperienceManager@@WEI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CActionCenterExperienceManager@@WFA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18009D850 (-GetRuntimeClassName@CActionCenterExperienceManager@@WFA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CActionCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18009D8F0 (-GetRuntimeClassName@CActionCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
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

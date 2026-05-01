/*
 * XREFs of ?GetRuntimeClassName@CPeopleTestExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18016FE90
 * Callers:
 *     ?GetRuntimeClassName@CPeopleTestExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800A5570 (-GetRuntimeClassName@CPeopleTestExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CPeopleTestExperienceManager::GetRuntimeClassName(CPeopleTestExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.PeopleTestExperienceManager", 0x3Du, a2);
}

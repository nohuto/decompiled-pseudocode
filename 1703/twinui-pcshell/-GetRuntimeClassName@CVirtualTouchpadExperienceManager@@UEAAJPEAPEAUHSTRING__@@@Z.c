/*
 * XREFs of ?GetRuntimeClassName@CVirtualTouchpadExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800B6180
 * Callers:
 *     ?GetRuntimeClassName@CVirtualTouchpadExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800BA010 (-GetRuntimeClassName@CVirtualTouchpadExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CVirtualTouchpadExperienceManager::GetRuntimeClassName(
        CVirtualTouchpadExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.VirtualTouchpadExperienceManager", 0x42u, a2);
}

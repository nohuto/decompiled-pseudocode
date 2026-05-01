/*
 * XREFs of ?GetRuntimeClassName@CWelcomeScreenExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800B2890
 * Callers:
 *     ?GetRuntimeClassName@CWelcomeScreenExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800B51A0 (-GetRuntimeClassName@CWelcomeScreenExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CWelcomeScreenExperienceManager::GetRuntimeClassName(
        CWelcomeScreenExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.WelcomeScreenExperienceManager", 0x40u, a2);
}

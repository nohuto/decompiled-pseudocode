/*
 * XREFs of ?IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z @ 0x180076A90
 * Callers:
 *     ?IsStartWindowVisible@XamlLauncherState@@UEAA_NXZ @ 0x1800788E0 (-IsStartWindowVisible@XamlLauncherState@@UEAA_NXZ.c)
 * Callees:
 *     ?IsViewCloaked@CSingleViewShellExperience@@QEAA_NXZ @ 0x18006C450 (-IsViewCloaked@CSingleViewShellExperience@@QEAA_NXZ.c)
 */

__int64 __fastcall CStartExperienceManager::IsWindowFullyVisible(CStartExperienceManager *this, bool *a2)
{
  bool v2; // bl

  v2 = 0;
  if ( *((_DWORD *)this + 76) == 2 )
    v2 = CSingleViewShellExperience::IsViewCloaked((CStartExperienceManager *)((char *)this + 264)) == 0;
  *a2 = v2;
  return 0LL;
}

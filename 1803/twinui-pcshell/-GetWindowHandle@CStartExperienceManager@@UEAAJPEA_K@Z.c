/*
 * XREFs of ?GetWindowHandle@CStartExperienceManager@@UEAAJPEA_K@Z @ 0x180076700
 * Callers:
 *     ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x1800779B8 (-LinkUIATrees@XamlLauncher@@AEAAX_N@Z.c)
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180078EB8 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall CStartExperienceManager::GetWindowHandle(
        CStartExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v2; // rcx

  v2 = (ExperienceManagerUtils *)*((_QWORD *)this + 36);
  if ( !v2 )
    return 2147947423LL;
  *(_QWORD *)a2 = ExperienceManagerUtils::WindowFromViewWrapper(v2, a2);
  return 0LL;
}

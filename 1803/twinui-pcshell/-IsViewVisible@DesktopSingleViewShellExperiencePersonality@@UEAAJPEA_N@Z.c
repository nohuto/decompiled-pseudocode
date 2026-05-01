/*
 * XREFs of ?IsViewVisible@DesktopSingleViewShellExperiencePersonality@@UEAAJPEA_N@Z @ 0x18006E180
 * Callers:
 *     ?RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C300 (-RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?IsViewCloaked@CSingleViewShellExperience@@QEAA_NXZ @ 0x18006C450 (-IsViewCloaked@CSingleViewShellExperience@@QEAA_NXZ.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::IsViewVisible(
        DesktopSingleViewShellExperiencePersonality *this,
        bool *a2)
{
  HWND v3; // rax
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = ExperienceManagerUtils::WindowFromViewWrapper(
         *(ExperienceManagerUtils **)(*((_QWORD *)this + 1) + 24LL),
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( v3 )
  {
    pvAttribute = 0;
    if ( DwmGetWindowAttribute(v3, 0xEu, &pvAttribute, 4u) >= 0 )
      *a2 = pvAttribute == 0;
  }
  return 0LL;
}

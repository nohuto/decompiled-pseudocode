/*
 * XREFs of ?_GetHwnd@CortanaSharedExperienceManager@@AEAAPEAUHWND__@@XZ @ 0x1800A2EAC
 * Callers:
 *     ?GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z @ 0x1800A0940 (-GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?_GetViewWrapper@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1800A2F04 (-_GetViewWrapper@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerIntero.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HWND __fastcall CortanaSharedExperienceManager::_GetHwnd(CortanaSharedExperienceManager *this)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v1; // rdx
  ExperienceManagerUtils *v2; // rcx
  HWND v3; // rbx
  ExperienceManagerUtils *v5; // [rsp+48h] [rbp+10h] BYREF

  CortanaSharedExperienceManager::_GetViewWrapper(this, &v5);
  v2 = v5;
  if ( v5 )
  {
    v3 = ExperienceManagerUtils::WindowFromViewWrapper(v5, v1);
    v2 = v5;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(ExperienceManagerUtils *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v3;
}

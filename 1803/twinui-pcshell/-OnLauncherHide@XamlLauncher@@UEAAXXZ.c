/*
 * XREFs of ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x180077D40
 * Callers:
 *     ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180079750 (-OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Win.c)
 * Callees:
 *     ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x1800779B8 (-LinkUIATrees@XamlLauncher@@AEAAX_N@Z.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180077C4C (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?Dismiss@CJumpViewExperienceManager@@UEAAJXZ @ 0x18007B1C0 (-Dismiss@CJumpViewExperienceManager@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncher::OnLauncherHide(XamlLauncher *this)
{
  CJumpViewExperienceManager *v2; // rcx
  void (*v3)(void); // rax

  XamlLauncher::LinkUIATrees((XamlLauncher *)((char *)this - 72), 0);
  XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)((char *)this - 72), 0);
  v2 = (CJumpViewExperienceManager *)*((_QWORD *)this + 6);
  v3 = *(void (**)(void))(*(_QWORD *)v2 + 56LL);
  if ( (char *)v3 == (char *)CJumpViewExperienceManager::Dismiss )
    CJumpViewExperienceManager::Dismiss(v2);
  else
    v3();
}

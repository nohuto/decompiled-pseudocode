/*
 * XREFs of ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x180061B68
 * Callers:
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064B10 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180065EE0 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180185700 (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?InputHostHiding@CortanaDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x180185DC0 (-InputHostHiding@CortanaDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CortanaDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x180185E20 (-InputHostShowing@CortanaDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE.c)
 *     ?OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180186D50 (-OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?get_Visible@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAE@Z @ 0x180068130 (-get_Visible@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CortanaDesktopExperienceView::IsViewVisible(CortanaDesktopExperienceView *this)
{
  TwinUI::Cortana::ShellExperienceView *v1; // rcx
  char v2; // bl
  __int64 (__fastcall *v3)(TwinUI::Cortana::ShellExperienceView *__hidden, unsigned __int8 *); // rax
  int Visible; // eax
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (TwinUI::Cortana::ShellExperienceView *)*((_QWORD *)this + 18);
  v2 = 0;
  v6 = 0;
  if ( v1 )
  {
    v3 = *(__int64 (__fastcall **)(TwinUI::Cortana::ShellExperienceView *__hidden, unsigned __int8 *))(*(_QWORD *)v1 + 80LL);
    if ( v3 == TwinUI::Cortana::ShellExperienceView::get_Visible )
      Visible = TwinUI::Cortana::ShellExperienceView::get_Visible(v1, &v6);
    else
      Visible = v3(v1, &v6);
    if ( Visible >= 0 && v6 )
      return 1;
  }
  return v2;
}

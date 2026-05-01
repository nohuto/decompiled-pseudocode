/*
 * XREFs of ?_IsViewVisible@CortanaSharedExperienceManager@@AEAA_NXZ @ 0x1800673F0
 * Callers:
 *     ?_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180066774 (-_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180066C30 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 * Callees:
 *     ?get_Visible@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAE@Z @ 0x180068130 (-get_Visible@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CortanaSharedExperienceManager::_IsViewVisible(CortanaSharedExperienceManager *this)
{
  TwinUI::Cortana::ShellExperienceView *v1; // rcx
  char v2; // bl
  __int64 (__fastcall *v3)(TwinUI::Cortana::ShellExperienceView *__hidden, unsigned __int8 *); // rax
  int Visible; // eax
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (TwinUI::Cortana::ShellExperienceView *)*((_QWORD *)this + 60);
  v2 = 0;
  v6 = 0;
  v3 = *(__int64 (__fastcall **)(TwinUI::Cortana::ShellExperienceView *__hidden, unsigned __int8 *))(*(_QWORD *)v1 + 80LL);
  if ( v3 == TwinUI::Cortana::ShellExperienceView::get_Visible )
    Visible = TwinUI::Cortana::ShellExperienceView::get_Visible(v1, &v6);
  else
    Visible = v3(v1, &v6);
  if ( Visible >= 0 && v6 )
    return 1;
  return v2;
}

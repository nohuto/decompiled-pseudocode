/*
 * XREFs of _TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_ValueSet @ 0x180068E70
 * Callers:
 *     ?OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x180065D90 (-OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 *     ?_OnViewEventHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x180067290 (-_OnViewEventHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Sh.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_ValueSet(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = *(_QWORD *)(a1 + 40);
  }
  *a2 = v4;
  return 0LL;
}

/*
 * XREFs of ?Uncloak@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180065EB0
 * Callers:
 *     ?Uncloak@CortanaSharedExperienceManager@@UEAAJXZ @ 0x1800679C0 (-Uncloak@CortanaSharedExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaDesktopExperienceView::Uncloak(CortanaDesktopExperienceView *this)
{
  TwinUI::Cortana::ShellExperienceView *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = (TwinUI::Cortana::ShellExperienceView *)*((_QWORD *)this + 15);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 104LL);
  if ( (char *)v2 == (char *)TwinUI::Cortana::ShellExperienceView::Uncloak )
    return TwinUI::Cortana::ShellExperienceView::Uncloak(v1);
  else
    return v2();
}

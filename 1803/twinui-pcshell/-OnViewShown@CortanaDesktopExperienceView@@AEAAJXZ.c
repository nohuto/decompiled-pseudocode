/*
 * XREFs of ?OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064920
 * Callers:
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800618D0 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800646A0 (-RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x180076654 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x180085480 (-OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180186DC8 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnViewShown(CortanaDesktopExperienceView *this)
{
  __int64 v2; // rcx
  void (__fastcall *v3)(__int64, int *); // rax
  int v5; // eax
  int v6; // eax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_QWORD *)this + 12);
  *(_OWORD *)v7 = *(_OWORD *)((char *)this + 172);
  v3 = *(void (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 96LL);
  if ( (char *)v3 == (char *)CortanaExperienceManagerNotification::OnShown )
    CortanaExperienceManagerNotification::OnShown(v2, v7);
  else
    v3(v2, v7);
  if ( *((_BYTE *)this + 240) )
  {
    v5 = CExperienceManagerAnimationHelper::End((CortanaDesktopExperienceView *)((char *)this + 264));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4AF,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v5,
        v7[0]);
    v6 = CortanaDesktopExperienceView::PostTargetedMessage(this, 2LL, 1LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4B0,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v6,
        v7[0]);
  }
  if ( !*((_BYTE *)this + 199) )
    CortanaDesktopExperienceView::RegisterGlobalBackButton(this);
  return 0LL;
}

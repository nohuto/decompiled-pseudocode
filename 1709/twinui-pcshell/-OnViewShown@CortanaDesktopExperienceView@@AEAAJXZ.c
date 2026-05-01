/*
 * XREFs of ?OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D69C8
 * Callers:
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800D5C40 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800D6FFC (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D7488 (-RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1801DB408 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnViewShown(CortanaDesktopExperienceView *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (__int64 *)*((_QWORD *)this + 12);
  v3 = *v2;
  *(_OWORD *)v7 = *(_OWORD *)((char *)this + 172);
  (*(void (__fastcall **)(__int64 *, int *))(v3 + 96))(v2, v7);
  if ( *((_BYTE *)this + 240) )
  {
    v4 = CExperienceManagerAnimationHelper::End((CortanaDesktopExperienceView *)((char *)this + 264));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x482,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v4);
    v5 = CortanaDesktopExperienceView::PostTargetedMessage(this, 2LL);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x483,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v5);
  }
  if ( !*((_BYTE *)this + 199) )
    CortanaDesktopExperienceView::RegisterGlobalBackButton(this);
  return 0LL;
}

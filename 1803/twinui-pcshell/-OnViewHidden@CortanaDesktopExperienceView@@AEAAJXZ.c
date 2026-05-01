/*
 * XREFs of ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180065BE0
 * Callers:
 *     ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1800618D0 (-OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800619A8 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x1800634C4 (-SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x180076654 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnHidden@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180085520 (-OnHidden@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180186DC8 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnViewHidden(CortanaDesktopExperienceView *this)
{
  int v2; // eax
  CortanaExperienceManagerNotification *v3; // rcx
  void (*v4)(void); // rax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_WORD *)this + 99) = 0;
  *((_BYTE *)this + 197) = 0;
  *((_BYTE *)this + 202) = 0;
  v2 = CortanaDesktopExperienceView::SetZBand((__int64)this, 13);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x43B,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v2,
      v11);
  if ( *((_BYTE *)this + 240) )
  {
    v6 = CortanaDesktopExperienceView::PostTargetedMessage(this, 2LL, 0LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x43F,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v6,
        v11);
  }
  if ( *((_BYTE *)this + 128) )
  {
    v7 = *((_QWORD *)this + 12);
    *((_BYTE *)this + 128) = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 128LL))(v7);
  }
  if ( *((_BYTE *)this + 196)
    && (*((_BYTE *)this + 196) = 0,
        v8 = CortanaDesktopExperienceView::NotifyView(this, L"NotifyAppTransitionCanceled", 0LL),
        v9 = v8,
        v8 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44A,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v8,
      v11);
    return v9;
  }
  else
  {
    v3 = (CortanaExperienceManagerNotification *)*((_QWORD *)this + 12);
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 88LL);
    if ( (char *)v4 == (char *)CortanaExperienceManagerNotification::OnHidden )
      CortanaExperienceManagerNotification::OnHidden(v3);
    else
      v4();
    if ( *((_BYTE *)this + 240) )
    {
      v10 = CExperienceManagerAnimationHelper::End((CortanaDesktopExperienceView *)((char *)this + 296));
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x451,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v10,
          v11);
    }
    return 0LL;
  }
}

/*
 * XREFs of ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1801854A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800643E4 (-UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180185700 (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180186DC8 (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?ResetCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180186E74 (-ResetCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ControlLost(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a4 = 0LL;
  CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
  *(_BYTE *)(a1 + 199) = 0;
  if ( *(_DWORD *)(a1 + 224) )
  {
    v5 = *(_QWORD *)(a1 + 120);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      *(_DWORD *)(a1 + 224) = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 240) )
  {
    v6 = CortanaDesktopExperienceView::PostTargetedMessage(a1, 2LL, 0LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        428LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v6);
  }
  CortanaDesktopExperienceView::UnregisterGlobalBackButton((CortanaDesktopExperienceView *)a1);
  if ( *(_BYTE *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 128) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 128LL))(*(_QWORD *)(a1 + 96));
  }
  CortanaDesktopExperienceView::ResetCortanaWindowRegion((CortanaDesktopExperienceView *)a1);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 160LL))(
    *(_QWORD *)(a1 + 144),
    *(_QWORD *)(a1 + 152));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 176LL))(
    *(_QWORD *)(a1 + 144),
    *(_QWORD *)(a1 + 160));
  v7 = *(_QWORD *)(a1 + 144);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 144) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}

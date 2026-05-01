/*
 * XREFs of ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1800C2800
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800C517C (-PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C5730 (-UnregisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C82DC (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ControlLost(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rcx
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
    v6 = CortanaDesktopExperienceView::PostTargetedMessage(a1, 2LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x199,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v6);
  }
  CortanaDesktopExperienceView::UnregisterGlobalBackButton((CortanaDesktopExperienceView *)a1);
  if ( *(_BYTE *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 128) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 128LL))(*(_QWORD *)(a1 + 96));
  }
  LOBYTE(v7) = 1;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 144) + 144LL))(
         *(_QWORD *)(a1 + 144),
         0LL,
         v7);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x941,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v8);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 160LL))(
    *(_QWORD *)(a1 + 144),
    *(_QWORD *)(a1 + 152));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 176LL))(
    *(_QWORD *)(a1 + 144),
    *(_QWORD *)(a1 + 160));
  v9 = *(_QWORD *)(a1 + 144);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 144) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}

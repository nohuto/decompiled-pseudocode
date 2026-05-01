/*
 * XREFs of ?ResetCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180186E74
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1801854A0 (-ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ResetCortanaWindowRegion(
        CortanaDesktopExperienceView *this,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(a3) = 1;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 18) + 144LL))(
         *((_QWORD *)this + 18),
         0LL,
         a3);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2617LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
  return 0LL;
}

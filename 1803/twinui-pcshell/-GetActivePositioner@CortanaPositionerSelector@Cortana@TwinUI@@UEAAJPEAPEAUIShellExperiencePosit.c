/*
 * XREFs of ?GetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x180085170
 * Callers:
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x1800674D4 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180067BE0 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x180084E50 (-GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::GetActivePositioner(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **a2)
{
  unsigned int v2; // r9d
  __int64 (__fastcall *v3)(__int64 *, int, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **); // rax
  int PositionerByType; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = *((_DWORD *)this + 6);
  if ( !v2 )
    return 2147943568LL;
  v3 = *(__int64 (__fastcall **)(__int64 *, int, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **))(*(_QWORD *)this + 16LL);
  if ( v3 == TwinUI::Cortana::CortanaPositionerSelector::GetPositionerByType )
    PositionerByType = TwinUI::Cortana::CortanaPositionerSelector::GetPositionerByType((__int64 *)this, v2, a2);
  else
    PositionerByType = v3((__int64 *)this, v2, a2);
  v5 = PositionerByType;
  if ( PositionerByType >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
    (const char *)(unsigned int)PositionerByType);
  return v5;
}

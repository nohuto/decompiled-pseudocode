/*
 * XREFs of ?PrepareForAppTransition@CortanaSharedExperienceManager@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800678F0
 * Callers:
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x180079178 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PrepareForAppTransition@CortanaDesktopExperienceView@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800660F0 (-PrepareForAppTransition@CortanaDesktopExperienceView@@UEAAJW4CortanaAppTransitionType@Experienc.c)
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x1800674D4 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x180085020 (-SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::PrepareForAppTransition(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rax
  int active; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall *v9)(__int64, unsigned int); // rax
  int v10; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 400);
  v5 = *(_QWORD *)(a1 + 480);
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 32LL);
  if ( v6 == TwinUI::Cortana::CortanaPositionerSelector::SetActivePositioner )
    active = TwinUI::Cortana::CortanaPositionerSelector::SetActivePositioner(v4, 1LL, v5);
  else
    active = v6(v4, 1LL, v5);
  v8 = active;
  if ( active < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F7,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)active,
      -2);
    return v8;
  }
  CortanaSharedExperienceManager::TryGetDesktopViewIfActive(a1, &v14);
  if ( !v14 )
  {
    v8 = -2147467259;
    v12 = 506LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)v8,
      -2);
    goto LABEL_9;
  }
  v9 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v14 + 72LL);
  if ( v9 == CortanaDesktopExperienceView::PrepareForAppTransition )
    v10 = CortanaDesktopExperienceView::PrepareForAppTransition(v14, a2);
  else
    v10 = v9(v14, a2);
  v8 = v10;
  if ( v10 < 0 )
  {
    v12 = 507LL;
    goto LABEL_16;
  }
  v8 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v8;
}

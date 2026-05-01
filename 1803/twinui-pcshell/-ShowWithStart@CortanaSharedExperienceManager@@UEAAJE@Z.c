/*
 * XREFs of ?ShowWithStart@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x180067B10
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180078B50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180065F90 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 *     ?TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x1800674D4 (-TryGetDesktopViewIfActive@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceVi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x180085020 (-SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::ShowWithStart(CortanaSharedExperienceManager *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rax
  int active; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall *v9)(CortanaDesktopExperienceView *, char); // rax
  __int64 (__fastcall *v10)(CortanaDesktopExperienceView *, char); // rdx
  int v11; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CortanaDesktopExperienceView *v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 50);
  v5 = *((_QWORD *)this + 60);
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
      (void *)0x1BD,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)active,
      -2);
    return v8;
  }
  CortanaSharedExperienceManager::TryGetDesktopViewIfActive((__int64)this, &v15);
  if ( !v15 )
  {
    v8 = -2147467259;
    v13 = 448LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)v8,
      -2);
    goto LABEL_9;
  }
  v9 = *(__int64 (__fastcall **)(CortanaDesktopExperienceView *, char))(*(_QWORD *)v15 + 88LL);
  v10 = CortanaDesktopExperienceView::ShowWithStart;
  LOBYTE(v10) = a2;
  if ( v9 == CortanaDesktopExperienceView::ShowWithStart )
    v11 = CortanaDesktopExperienceView::ShowWithStart(v15, a2);
  else
    v11 = v9(v15, (char)v10);
  v8 = v11;
  if ( v11 < 0 )
  {
    v13 = 449LL;
    goto LABEL_16;
  }
  v8 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v8;
}

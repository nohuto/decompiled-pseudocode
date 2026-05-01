/*
 * XREFs of ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x18006C090
 * Callers:
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18006B6A0 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     ?SetZBand@CActionCenterExperienceManager@@AEAAJXZ @ 0x18007B6C4 (-SetZBand@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?SetZBand@CToastCenterExperienceManager@@AEAAJXZ @ 0x18016674C (-SetZBand@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180177A90 (-OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?SetWindowBand@DesktopSingleViewShellExperiencePersonality@@UEAAJW4ZBID@@@Z @ 0x18006DFB0 (-SetWindowBand@DesktopSingleViewShellExperiencePersonality@@UEAAJW4ZBID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::SetWindowBand(__int64 a1)
{
  __int64 (*v1)(void); // rax
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 80) + 64LL);
  if ( v1 == DesktopSingleViewShellExperiencePersonality::SetWindowBand )
    v2 = DesktopSingleViewShellExperiencePersonality::SetWindowBand();
  else
    v2 = v1();
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F0,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v2,
      v5);
  return v3;
}

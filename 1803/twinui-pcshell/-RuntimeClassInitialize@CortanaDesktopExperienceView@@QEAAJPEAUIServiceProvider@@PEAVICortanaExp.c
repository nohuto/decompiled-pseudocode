/*
 * XREFs of ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180186EB8
 * Callers:
 *     ??$MakeAndInitialize@VCortanaDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x18018495C (--$MakeAndInitialize@VCortanaDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x180186F7C (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PE_ea_180186F7C.c)
 *     ??0CCortanaWNFService@Cortana@TwinUI@@QEAA@XZ @ 0x18018844C (--0CCortanaWNFService@Cortana@TwinUI@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::RuntimeClassInitialize(
        CortanaDesktopExperienceView *this,
        struct IServiceProvider *a2,
        struct TwinUI::Cortana::ICortanaExperienceManagerNotification *a3)
{
  TwinUI::Cortana::CCortanaWNFService *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  TwinUI::Cortana::CCortanaWNFService *v11; // [rsp+58h] [rbp+20h] BYREF

  v6 = (TwinUI::Cortana::CCortanaWNFService *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  if ( v6 )
    v6 = (TwinUI::Cortana::CCortanaWNFService *)TwinUI::Cortana::CCortanaWNFService::CCortanaWNFService(v6);
  v11 = v6;
  v7 = CortanaDesktopExperienceView::RuntimeClassInitialize(this, a2, a3, &v11, -2LL, 0LL);
  v8 = v7;
  if ( v7 >= 0 )
    return 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x156,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}

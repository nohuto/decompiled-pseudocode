/*
 * XREFs of ?_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x1800C0CBC
 * Callers:
 *     ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x1800C08C0 (-GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1800C2444 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 *     ??1?$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U?$default_delete@VCCortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1800C8954 (--1-$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U-$default_delete@VCCortanaWNFService@Cortan.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@U?$InterfaceList@VICortanaDesktopNotifications@Cortana@TwinUI@@U?$InterfaceList@VICortanaExperienceView@Cortana@TwinUI@@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIInputHostLayoutChanges@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@VICortanaWNFNotification@Cortana@TwinUI@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C8C30 (-Release@-$RuntimeClass@U-$InterfaceList@UIShellExperiencePositioner@Experience@Shell@Internal@W.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@U?$InterfaceList@VICortanaDesktopNotifications@Cortana@TwinUI@@U?$InterfaceList@VICortanaExperienceView@Cortana@TwinUI@@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIInputHostLayoutChanges@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@VICortanaWNFNotification@Cortana@TwinUI@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C8CD0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIShellExperiencePositioner@Experience@Shell@Int.c)
 *     ??$make_unique_nothrow@VCCortanaWNFService@Cortana@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U?$default_delete@VCCortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@XZ @ 0x1800C8D74 (--$make_unique_nothrow@VCCortanaWNFService@Cortana@TwinUI@@$$V@wil@@YA-AV-$unique_ptr@VCCortanaW.c)
 *     ??0CortanaDesktopExperienceView@@QEAA@XZ @ 0x1800C8E24 (--0CortanaDesktopExperienceView@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::_GetDesktopExperiencePositioner(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rax
  CortanaDesktopExperienceView *v7; // rax
  int Interface; // ebx
  CortanaDesktopExperienceView *v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  char v16; // [rsp+80h] [rbp+18h] BYREF
  CortanaDesktopExperienceView *v17; // [rsp+88h] [rbp+20h]

  v3 = (_QWORD *)((char *)this + 16);
  if ( !*((_QWORD *)this + 2) )
  {
    v4 = *((_QWORD *)this + 5);
    v5 = *((_QWORD *)this + 4);
    v6 = 2LL;
    do
    {
      *v3 = 0LL;
      --v6;
    }
    while ( v6 );
    v7 = (CortanaDesktopExperienceView *)operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v7 )
    {
      Interface = -2147024882;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xADF,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)Interface);
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x94,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
        (const char *)(unsigned int)Interface);
      return (unsigned int)Interface;
    }
    v9 = CortanaDesktopExperienceView::CortanaDesktopExperienceView(v7);
    v17 = v9;
    v10 = (__int64 *)wil::make_unique_nothrow<TwinUI::Cortana::CCortanaWNFService,>(&v16);
    v11 = *v10;
    *v10 = 0LL;
    wistd::unique_ptr<TwinUI::Cortana::CCortanaWNFService,wistd::default_delete<TwinUI::Cortana::CCortanaWNFService>>::~unique_ptr<TwinUI::Cortana::CCortanaWNFService,wistd::default_delete<TwinUI::Cortana::CCortanaWNFService>>(&v16);
    v15 = v11;
    v12 = CortanaDesktopExperienceView::RuntimeClassInitialize(v9, v5, v4, &v15, -2LL);
    Interface = v12;
    if ( v12 >= 0 )
      Interface = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x143,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v12);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IShellExperiencePositioner,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaDesktopNotifications,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaExperienceView,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IInputHostLayoutChanges,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaWNFNotification,Microsoft::WRL::Details::Nil>>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                    v9,
                    &GUID_c6ff146a_7f1d_492e_8981_e95cda605ef7,
                    v3);
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IShellExperiencePositioner,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaDesktopNotifications,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaExperienceView,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IInputHostLayoutChanges,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaWNFNotification,Microsoft::WRL::Details::Nil>>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v9);
    if ( Interface < 0 )
      goto LABEL_14;
  }
  if ( *v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
  *a2 = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)*v3;
  return 0LL;
}

/*
 * XREFs of ?_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x1800CE88C
 * Callers:
 *     ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x1800CE480 (-GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1800D3F80 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 *     ??1?$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U?$default_delete@VCCortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1800DAE14 (--1-$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U-$default_delete@VCCortanaWNFService@Cortan.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VICortanaDesktopNotifications@Cortana@TwinUI@@VICortanaExperienceView@Cortana@TwinUI@@UILightDismissNotification@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@UIImmersiveSessionIdleNotification@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DB090 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceP.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VICortanaDesktopNotifications@Cortana@TwinUI@@VICortanaExperienceView@Cortana@TwinUI@@UILightDismissNotification@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@UIImmersiveSessionIdleNotification@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DB100 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800DB100.c)
 *     ??0CortanaDesktopExperienceView@@QEAA@XZ @ 0x1800DB7B4 (--0CortanaDesktopExperienceView@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::_GetDesktopExperiencePositioner(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rax
  CortanaDesktopExperienceView *v7; // rax
  int Interface; // ebx
  CortanaDesktopExperienceView *v9; // rsi
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  _QWORD *v15; // [rsp+70h] [rbp+8h] BYREF
  CortanaDesktopExperienceView *v16; // [rsp+80h] [rbp+18h]
  __int64 v17; // [rsp+88h] [rbp+20h]

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
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB59,
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
    v16 = v9;
    v17 = 0LL;
    v10 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v10;
    if ( v10 )
    {
      *v10 = &TwinUI::Cortana::CCortanaWNFService::`vftable';
      v10[1] = 0LL;
      v10[2] = 0LL;
      v10[3] = 0LL;
      v10[4] = 0LL;
      v10[5] = 0LL;
      v10[6] = 0LL;
      v10[7] = 0LL;
      v11 = operator new(0x38uLL);
      v15 = v11;
      *v11 = 0LL;
      v11[1] = 0LL;
      *((_BYTE *)v11 + 16) = 0;
      v11[5] = 0LL;
      v11[6] = 7LL;
      *((_WORD *)v11 + 12) = 0;
      v10[8] = v11;
    }
    else
    {
      v10 = 0LL;
    }
    v15 = 0LL;
    wistd::unique_ptr<TwinUI::Cortana::CCortanaWNFService,wistd::default_delete<TwinUI::Cortana::CCortanaWNFService>>::~unique_ptr<TwinUI::Cortana::CCortanaWNFService,wistd::default_delete<TwinUI::Cortana::CCortanaWNFService>>(&v15);
    v15 = v10;
    v12 = CortanaDesktopExperienceView::RuntimeClassInitialize(v9, v5, v4, &v15, -2LL, 0LL);
    Interface = v12;
    if ( v12 >= 0 )
      Interface = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x151,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v12);
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>::QueryInterface(
                    v9,
                    &GUID_c6ff146a_7f1d_492e_8981_e95cda605ef7,
                    v3);
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>::Release(v9);
    if ( Interface < 0 )
      goto LABEL_17;
  }
  if ( *v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
  *a2 = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)*v3;
  return 0LL;
}

/*
 * XREFs of ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x1800BFE40
 * Callers:
 *     ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BBBAC (-_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIShellExperienceView@Experience@Shell@Internal@Windows@@U?$InterfaceList@VIShellExperienceViewLifetime@Cortana@TwinUI@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800BEBE0 (-Release@-$RuntimeClass@U-$InterfaceList@UIShellExperienceView@Experience@Shell@Internal@Windows.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIShellExperienceView@Experience@Shell@Internal@Windows@@U?$InterfaceList@VIShellExperienceViewLifetime@Cortana@TwinUI@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BEC90 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIShellExperienceView@Experience@Shell@Internal@.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x18017FFEC (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18018023C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180180944 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TwinUI::Cortana::ShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
        _QWORD *a1,
        struct IServiceProvider **a2,
        HSTRING *a3,
        HSTRING *a4,
        HSTRING *a5,
        int *a6)
{
  __int64 v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  int Interface; // ebx
  int v14; // r14d
  HSTRING v15; // r15
  int v16; // eax
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a1 = 0LL;
  v10 = 0LL;
  v11 = operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( !v11 )
  {
    Interface = -2147024882;
    goto LABEL_13;
  }
  v11[4] = 1LL;
  *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  v11[1] = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `IWeakReferenceSource'};
  v11[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::IShellExperienceViewLifetime,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v12 = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  v12[1] = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `IWeakReferenceSource'};
  v12[2] = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::IShellExperienceViewLifetime,Microsoft::WRL::Details::Nil>,1,0>'};
  v12[5] = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `SingleViewShellExperienceEventHandler'};
  CSingleViewShellExperience::CSingleViewShellExperience(v12 + 6, v12 + 5, 4LL);
  v12[31] = 0LL;
  InitializeSRWLock((PSRWLOCK)v12 + 32);
  InitializeSRWLock((PSRWLOCK)v12 + 33);
  v12[34] = 0LL;
  InitializeSRWLock((PSRWLOCK)v12 + 35);
  InitializeSRWLock((PSRWLOCK)v12 + 36);
  v10 = (__int64)v12;
  v14 = *a6;
  v15 = *a4;
  v16 = CSingleViewShellExperience::RuntimeClassInitialize(
          (HSTRING *)v12 + 6,
          (struct IWeakReferenceSource *)((unsigned __int64)(v12 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64)),
          *a2,
          *a3,
          *a5);
  Interface = v16;
  if ( v16 < 0 )
  {
    v17 = 20LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_11;
  }
  v16 = CSingleViewShellExperience::AddTestAumid((CSingleViewShellExperience *)(v10 + 48), v15);
  Interface = v16;
  if ( v16 < 0 )
  {
    v17 = 21LL;
    goto LABEL_7;
  }
  *(_DWORD *)(v10 + 108) = v14;
  Interface = 0;
LABEL_11:
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IShellExperienceView,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::IShellExperienceViewLifetime,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                  v10,
                  &GUID_9f8649aa_a188_4bda_a412_ecb6807c94d8,
                  a1);
LABEL_13:
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IShellExperienceView,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::IShellExperienceViewLifetime,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v10);
  return (unsigned int)Interface;
}

/*
 * XREFs of ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x1800A9000
 * Callers:
 *     ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800A202C (-_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@VIShellExperienceViewLifetime@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A74E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@VIShellExperienceViewLifetime@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A7550 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExpe.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x1801CF4FC (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1801CF740 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801CFEC4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  _QWORD *v10; // rax
  __int64 v11; // rbx
  int Interface; // edi
  unsigned __int64 v13; // rdi
  int v14; // r14d
  HSTRING v15; // r15
  int v16; // eax
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a1 = 0LL;
  v10 = operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = (__int64)v10;
  if ( !v10 )
    return (unsigned int)-2147024882;
  v10[4] = 1LL;
  *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>::`vftable';
  v13 = (unsigned __int64)(v10 + 1);
  v10[1] = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `IWeakReferenceSource'};
  v10[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::IShellExperienceViewLifetime>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v11 = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>'};
  *(_QWORD *)v13 = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(v11 + 16) = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::IShellExperienceViewLifetime>'};
  *(_QWORD *)(v11 + 40) = &TwinUI::Cortana::ShellExperienceView::`vftable'{for `SingleViewShellExperienceEventHandler'};
  CSingleViewShellExperience::CSingleViewShellExperience(v11 + 48, v11 + 40, 4LL);
  *(_QWORD *)(v11 + 248) = 0LL;
  InitializeSRWLock((PSRWLOCK)(v11 + 256));
  InitializeSRWLock((PSRWLOCK)(v11 + 264));
  *(_QWORD *)(v11 + 272) = 0LL;
  InitializeSRWLock((PSRWLOCK)(v11 + 280));
  InitializeSRWLock((PSRWLOCK)(v11 + 288));
  v14 = *a6;
  v15 = *a4;
  v16 = CSingleViewShellExperience::RuntimeClassInitialize(
          (HSTRING *)(v11 + 48),
          (struct IWeakReferenceSource *)(v13 & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64)),
          *a2,
          *a3,
          *a5);
  Interface = v16;
  if ( v16 >= 0 )
  {
    v16 = CSingleViewShellExperience::AddTestAumid((CSingleViewShellExperience *)(v11 + 48), v15);
    Interface = v16;
    if ( v16 >= 0 )
    {
      *(_DWORD *)(v11 + 108) = v14;
      *(_DWORD *)(v11 + 296) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
      Interface = 0;
      goto LABEL_11;
    }
    v17 = 22LL;
  }
  else
  {
    v17 = 21LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v17,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
    (const char *)(unsigned int)v16);
LABEL_11:
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>::QueryInterface(
                  v11,
                  &GUID_9f8649aa_a188_4bda_a412_ecb6807c94d8,
                  a1);
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>::Release((volatile signed __int64 *)v11);
  return (unsigned int)Interface;
}

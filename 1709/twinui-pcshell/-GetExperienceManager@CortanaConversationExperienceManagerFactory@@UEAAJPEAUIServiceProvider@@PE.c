/*
 * XREFs of ?GetExperienceManager@CortanaConversationExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18009DB60
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaConversationExperienceManager@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009DDD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaConversat.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaConversationExperienceManager@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009DE40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaCo.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x1801CF4FC (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1801CF740 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801CFEC4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaConversationExperienceManagerFactory::GetExperienceManager(
        CortanaConversationExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  __int64 v5; // rax
  char *v6; // rax
  char *v7; // rbx
  int Interface; // edi
  unsigned __int64 v9; // rdi
  HRESULT v10; // eax
  HRESULT v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  HRESULT v14; // eax
  HSTRING_HEADER v16; // [rsp+50h] [rbp-31h] BYREF
  HSTRING v17; // [rsp+68h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-11h] BYREF
  HSTRING string; // [rsp+88h] [rbp+7h] BYREF
  HSTRING_HEADER v20; // [rsp+90h] [rbp+Fh] BYREF
  HSTRING v21; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v5 = 2LL;
  do
  {
    *a3 = 0LL;
    --v5;
  }
  while ( v5 );
  v6 = (char *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    Interface = -2147024882;
LABEL_24:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x53,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaconversationexperiencemanager.cpp",
      (const char *)(unsigned int)Interface);
    return (unsigned int)Interface;
  }
  v9 = (unsigned __int64)(v6 + 8);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 16));
  *((_QWORD *)v7 + 8) = 1LL;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaConversationExperienceManager,Microsoft::WRL::FtmBase>::`vftable';
  *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaConversationExperienceManager,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v7 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaConversationExperienceManager,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v7 = &CCortanaConversationExperienceManager::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Experience::ICortanaConversationExperienceManager,Microsoft::WRL::FtmBase>'};
  *(_QWORD *)v9 = &CCortanaConversationExperienceManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v7 + 2) = &CCortanaConversationExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v7 + 9) = &CCortanaConversationExperienceManager::`vftable'{for `SingleViewShellExperienceEventHandler'};
  CSingleViewShellExperience::CSingleViewShellExperience(v7 + 80, v7 + 72, 1LL);
  string = 0LL;
  v10 = WindowsCreateStringReference(
          L"Windows.Internal.ShellExperience.Cortana.Conversation",
          0x35u,
          &hstringHeader,
          &string);
  if ( v10 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
  v17 = 0LL;
  v11 = WindowsCreateStringReference(L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI", 0x31u, &v16, &v17);
  if ( v11 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
  v12 = CSingleViewShellExperience::RuntimeClassInitialize(
          (HSTRING *)v7 + 10,
          (struct IWeakReferenceSource *)(v9 & -(__int64)(v7 != 0LL)),
          a2,
          v17,
          string);
  Interface = v12;
  v17 = 0LL;
  string = 0LL;
  if ( v12 < 0 )
  {
    v13 = 42LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaconversationexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_19;
  }
  v21 = 0LL;
  v14 = WindowsCreateStringReference(L"Microsoft.Cortana_8wekyb3d8bbwe!CortanaUI", 0x29u, &v20, &v21);
  if ( v14 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
  v12 = CSingleViewShellExperience::AddTestAumid((CSingleViewShellExperience *)(v7 + 80), v21);
  Interface = v12;
  v21 = 0LL;
  if ( v12 < 0 )
  {
    v13 = 45LL;
    goto LABEL_13;
  }
  Interface = 0;
LABEL_19:
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaConversationExperienceManager,Microsoft::WRL::FtmBase>::QueryInterface(
                  (CCortanaConversationExperienceManager *)v7,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  (void **)a3);
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaConversationExperienceManager,Microsoft::WRL::FtmBase>::Release((CCortanaConversationExperienceManager *)v7);
  if ( Interface < 0 )
    goto LABEL_24;
  return 0LL;
}

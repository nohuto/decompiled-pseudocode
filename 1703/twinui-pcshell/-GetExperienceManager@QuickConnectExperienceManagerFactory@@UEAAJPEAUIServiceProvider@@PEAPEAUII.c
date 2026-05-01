/*
 * XREFs of ?GetExperienceManager@QuickConnectExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800AE190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800AC488 (-RuntimeClassInitialize@CQuickConnectExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VICortanaExperienceManagerNotification@Cortana@TwinUI@@U?$InterfaceList@UIClosable@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800AE530 (-Release@-$RuntimeClass@U-$InterfaceList@VICortanaExperienceManagerNotification@Cortana@TwinUI@@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIQuickConnectExperienceManager@Experience@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE5D0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UILightDismissNotification@@U-$InterfaceList@UIQ.c)
 *     ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x18017FFEC (--0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall QuickConnectExperienceManagerFactory::GetExperienceManager(
        QuickConnectExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int Interface; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 2LL;
  do
  {
    *a3 = 0LL;
    --v5;
  }
  while ( v5 );
  v6 = operator new(0x1A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    Interface = -2147024882;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4BD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)Interface);
    return (unsigned int)Interface;
  }
  v6[5] = 1LL;
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IInspectable'};
  v6[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IQuickConnectExperienceManager,Microsoft::WRL::Details::Nil>>>,1,0>'};
  v6[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  v6[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IQuickConnectExperienceManager,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v7 = &CQuickConnectExperienceManager::`vftable'{for `IInspectable'};
  v7[1] = &CQuickConnectExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IQuickConnectExperienceManager,Microsoft::WRL::Details::Nil>>>,1,0>'};
  v7[2] = &CQuickConnectExperienceManager::`vftable'{for `IWeakReferenceSource'};
  v7[3] = &CQuickConnectExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IQuickConnectExperienceManager,Microsoft::WRL::Details::Nil>,1,0>'};
  v7[6] = &CQuickConnectExperienceManager::`vftable';
  v7[7] = 0LL;
  v7[8] = 0LL;
  CSingleViewShellExperience::CSingleViewShellExperience(v7 + 9, v7 + 6, 1LL);
  v7[34] = 0LL;
  *((_DWORD *)v7 + 70) = 0;
  v7[36] = 0LL;
  *(GUID *)(v7 + 37) = GUID_NULL;
  v7[39] = 0LL;
  v7[40] = 0LL;
  v7[41] = 0LL;
  v7[42] = 0LL;
  v7[43] = 0LL;
  *((_DWORD *)v7 + 88) = 0;
  *((_BYTE *)v7 + 356) = 0;
  v7[45] = 0LL;
  v7[46] = 0LL;
  *((_DWORD *)v7 + 94) = 0;
  *((_WORD *)v7 + 190) = 0;
  v7[48] = 0LL;
  v7[49] = 0LL;
  v7[50] = 0LL;
  *((_BYTE *)v7 + 408) = 0;
  Interface = CQuickConnectExperienceManager::RuntimeClassInitialize((HSTRING *)v7, a2);
  if ( Interface >= 0 )
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IQuickConnectExperienceManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                  (CQuickConnectExperienceManager *)v7,
                  &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                  (void **)a3);
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaExperienceManagerNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v7);
  if ( Interface < 0 )
    goto LABEL_12;
  return 0LL;
}

/*
 * XREFs of ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800A02DC
 * Callers:
 *     ?GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1800A4E60 (-GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspec.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1800A0490 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 *     ??1?$unique_ptr@VCortanaPositionerSelector@Cortana@TwinUI@@U?$default_delete@VCortanaPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x1800A5598 (--1-$unique_ptr@VCortanaPositionerSelector@Cortana@TwinUI@@U-$default_delete@VCortanaPositionerS.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIQuickConnectExperienceManager@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A5B00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_1800A5B00.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaSharedExperienceManager::RuntimeClassInitialize(
        CortanaSharedExperienceManager *this,
        struct IServiceProvider *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v13; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+70h] [rbp+18h]
  __int64 v15; // [rsp+78h] [rbp+20h]

  v4 = 0LL;
  v14 = 0LL;
  v5 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v5[5] = 1LL;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ICortanaExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `IInspectable'};
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ICortanaExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ICortanaExperienceManagerNotification,IWeakReferenceSource,Windows::Foundation::IClosable>'};
    v5[2] = &CortanaExperienceManagerNotification::`vftable'{for `IWeakReferenceSource'};
    v5[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ICortanaExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v6 = &CortanaExperienceManagerNotification::`vftable'{for `IInspectable'};
    v6[1] = &CortanaExperienceManagerNotification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ICortanaExperienceManagerNotification,IWeakReferenceSource,Windows::Foundation::IClosable>'};
    v6[2] = &CortanaExperienceManagerNotification::`vftable'{for `IWeakReferenceSource'};
    v6[3] = &CortanaExperienceManagerNotification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
    *((_BYTE *)v6 + 48) = 0;
    v6[7] = this;
    v4 = v6;
    v14 = v6;
  }
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = (unsigned __int64)(v4 + 1) & -(__int64)(v4 != 0LL);
    *v7 = &TwinUI::Cortana::CortanaPositionerSelector::`vftable';
    v7[1] = 0LL;
    v7[2] = 0LL;
    *((_DWORD *)v7 + 6) = 0;
    v7[4] = a2;
    if ( a2 )
      ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
    v7[5] = v8;
    if ( v8 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 8LL))((unsigned __int64)(v4 + 1) & -(__int64)(v4 != 0LL));
  }
  else
  {
    v7 = 0LL;
  }
  v13 = 0LL;
  wistd::unique_ptr<TwinUI::Cortana::CortanaPositionerSelector,wistd::default_delete<TwinUI::Cortana::CortanaPositionerSelector>>::~unique_ptr<TwinUI::Cortana::CortanaPositionerSelector,wistd::default_delete<TwinUI::Cortana::CortanaPositionerSelector>>(&v13);
  v15 = 0LL;
  v13 = v7;
  v9 = CortanaSharedExperienceManager::RuntimeClassInitialize(this);
  v10 = v9;
  if ( v9 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x129,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>::Release(v4);
  return v10;
}

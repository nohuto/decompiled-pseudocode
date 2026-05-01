/*
 * XREFs of ?_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z @ 0x1800CF420
 * Callers:
 *     ?OnViewCreated@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800CF360 (-OnViewCreated@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800CF370 (-OnViewShown@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800CF380 (-OnViewHidden@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800CF390 (-OnViewDestroyed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800CF3A0 (-OnViewUncloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800CF3B0 (-OnViewCloaking@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800CF3D0 (-OnViewPropertiesChanging@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperienc.c)
 *     ?OnApplicationActivatedForLaunch@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x1800CF3E0 (-OnApplicationActivatedForLaunch@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellEx.c)
 *     ?OnSetForegroundFailed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800CF3F0 (-OnSetForegroundFailed@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@.c)
 *     ?OnPriorityBoostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800CF400 (-OnPriorityBoostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperienc.c)
 *     ?OnPriorityUnboostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800CF410 (-OnPriorityUnboostRequested@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperie.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180061578 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B5300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFCB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800CFCB0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::_FireViewChanged(RTL_SRWLOCK *a1, int a2, int a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  PVOID Ptr; // rbx
  struct IUnknown **i; // rdi
  int v11; // eax
  int v12; // esi
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  RTL_SRWLOCK *v17; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v15 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
LABEL_6:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x14A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_27;
  }
  v6[3] = 1LL;
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg>::`vftable'{for `Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg'};
  v6[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v7 = off_180204FD8;
  v7[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  *((_DWORD *)v7 + 8) = a2;
  *((_DWORD *)v7 + 9) = a3;
  v8 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg>::QueryInterface(
         v7,
         &GUID_1b7d8b95_d5cb_4cff_874f_11fdf16217ac,
         &v15);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v7);
  if ( v8 < 0 )
    goto LABEL_6;
  v16 = v15;
  v17 = a1;
  Ptr = 0LL;
  AcquireSRWLockExclusive(a1 + 32);
  if ( a1[31].Ptr )
  {
    Ptr = a1[31].Ptr;
    _InterlockedIncrement((volatile signed __int32 *)Ptr + 3);
  }
  if ( a1 != (RTL_SRWLOCK *)-256LL )
    ReleaseSRWLockExclusive(a1 + 32);
  if ( Ptr )
  {
    _InterlockedIncrement((volatile signed __int32 *)Ptr + 3);
    for ( i = (struct IUnknown **)*((_QWORD *)Ptr + 2); i != *((struct IUnknown ***)Ptr + 3); ++i )
    {
      v11 = ((__int64 (__fastcall *)(struct IUnknown *, RTL_SRWLOCK *, __int64))(*i)->lpVtbl[1].QueryInterface)(
              *i,
              v17,
              v16);
      v12 = v11;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 0LL, 0LL);
        if ( v12 == -2147417848 || v12 == -2147023174 || v12 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            (__int64)&a1[31],
            *i);
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Ptr + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Ptr + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v8 = 0;
LABEL_27:
  v13 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)v8;
}

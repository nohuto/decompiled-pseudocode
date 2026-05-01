/*
 * XREFs of ?_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800CF668
 * Callers:
 *     ?OnEventQueued@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800CF3C0 (-OnEventQueued@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTR.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180061578 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800B5300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CFB40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExpe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::_FireViewEvent(
        RTL_SRWLOCK *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  HSTRING *v6; // rax
  HSTRING *v7; // rbx
  int v8; // edi
  HSTRING *v9; // rdi
  HRESULT v10; // eax
  HSTRING v11; // rcx
  volatile signed __int64 *v12; // rcx
  PVOID Ptr; // rbx
  struct IUnknown **i; // rdi
  int v15; // eax
  int v16; // esi
  __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+28h] [rbp-30h]
  RTL_SRWLOCK *v21; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v19 = 0LL;
  v6 = (HSTRING *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
LABEL_18:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x16F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_39;
  }
  v6[3] = (HSTRING)1;
  *v6 = (HSTRING)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::`vftable'{for `Windows::Internal::Shell::Experience::IShellExperienceViewEventArg'};
  v6[1] = (HSTRING)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v7 = (HSTRING)off_180204F70;
  v9 = v7 + 4;
  v7[1] = (HSTRING)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
  v7[4] = 0LL;
  v7[5] = 0LL;
  if ( a2 && a2 == *v9
    || (WindowsDeleteString(*v9), *v9 = 0LL, v10 = WindowsDuplicateString(a2, v7 + 4), v8 = v10, v10 >= 0) )
  {
    if ( v7[5] != (HSTRING)a3 )
    {
      if ( a3 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a3 + 8LL))(a3);
      v11 = v7[5];
      v7[5] = (HSTRING)a3;
      if ( v11 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x15A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v10);
  }
  v12 = (volatile signed __int64 *)v7;
  if ( v8 >= 0 )
  {
    v8 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::QueryInterface(
           v7,
           &GUID_945f341f_df0f_41d1_adae_5b9dabbb2139,
           &v19);
    v12 = (volatile signed __int64 *)v7;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v12);
  if ( v8 < 0 )
    goto LABEL_18;
  v20 = v19;
  v21 = this;
  Ptr = 0LL;
  AcquireSRWLockExclusive(this + 35);
  if ( this[34].Ptr )
  {
    Ptr = this[34].Ptr;
    _InterlockedIncrement((volatile signed __int32 *)Ptr + 3);
  }
  if ( this != (RTL_SRWLOCK *)-280LL )
    ReleaseSRWLockExclusive(this + 35);
  if ( Ptr )
  {
    _InterlockedIncrement((volatile signed __int32 *)Ptr + 3);
    for ( i = (struct IUnknown **)*((_QWORD *)Ptr + 2); i != *((struct IUnknown ***)Ptr + 3); ++i )
    {
      v15 = ((__int64 (__fastcall *)(struct IUnknown *, RTL_SRWLOCK *, __int64))(*i)->lpVtbl[1].QueryInterface)(
              *i,
              v21,
              v20);
      v16 = v15;
      if ( v15 < 0 )
      {
        RoTransformError((unsigned int)v15, 0LL, 0LL);
        if ( v16 == -2147417848 || v16 == -2147023174 || v16 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            (__int64)&this[34],
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
LABEL_39:
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v8;
}

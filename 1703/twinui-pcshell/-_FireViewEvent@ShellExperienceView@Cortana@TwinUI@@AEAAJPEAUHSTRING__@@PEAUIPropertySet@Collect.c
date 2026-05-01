/*
 * XREFs of ?_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C1A38
 * Callers:
 *     ?OnEventQueued@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C17F0 (-OnEventQueued@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTR.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18005F9D4 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C1DB0 (-Release@-$RuntimeClass@U-$InterfaceList@UIShellExperienceViewEventArg@Experience@Shell@Internal.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1E50 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIShellExperienceViewEventArg@Experience@Shell@I.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  HSTRING *v12; // rcx
  __int64 v13; // rbp
  PVOID Ptr; // rbx
  signed __int32 v15; // eax
  signed __int32 v16; // eax
  struct IUnknown **i; // rdi
  int v18; // eax
  int v19; // esi
  __int64 v20; // rcx
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v24; // [rsp+68h] [rbp+20h] BYREF

  v24 = 0LL;
  v6 = (HSTRING *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
LABEL_18:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x16D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_39;
  }
  v6[3] = (HSTRING)1;
  *v6 = (HSTRING)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Windows::Internal::Shell::Experience::IShellExperienceViewEventArg'};
  v6[1] = (HSTRING)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v7 = (HSTRING)off_1801B1048;
  v9 = v7 + 4;
  v7[1] = (HSTRING)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
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
      (void *)0x158,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v10);
  }
  v12 = v7;
  if ( v8 >= 0 )
  {
    v8 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IShellExperienceViewEventArg,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
           v7,
           &GUID_945f341f_df0f_41d1_adae_5b9dabbb2139,
           &v24);
    v12 = v7;
  }
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IShellExperienceViewEventArg,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v12);
  if ( v8 < 0 )
    goto LABEL_18;
  v13 = v24;
  Ptr = 0LL;
  wil::srwlock::lock_exclusive(this + 35, &SRWLock);
  if ( this[34].Ptr )
  {
    Ptr = this[34].Ptr;
    do
      v15 = *((_DWORD *)Ptr + 3);
    while ( v15 != 0x7FFFFFFF && v15 != _InterlockedCompareExchange((volatile signed __int32 *)Ptr + 3, v15 + 1, v15) );
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( Ptr )
  {
    do
      v16 = *((_DWORD *)Ptr + 3);
    while ( v16 != 0x7FFFFFFF && v16 != _InterlockedCompareExchange((volatile signed __int32 *)Ptr + 3, v16 + 1, v16) );
    for ( i = (struct IUnknown **)*((_QWORD *)Ptr + 2); i != *((struct IUnknown ***)Ptr + 3); ++i )
    {
      v18 = ((__int64 (__fastcall *)(struct IUnknown *, RTL_SRWLOCK *, __int64))(*i)->lpVtbl[1].QueryInterface)(
              *i,
              this,
              v13);
      v19 = v18;
      if ( v18 < 0 )
      {
        RoTransformError((unsigned int)v18, 0LL, 0LL);
        if ( v19 == -2147417848 || v19 == -2147023174 || v19 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            this + 34,
            *i);
      }
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)Ptr);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)Ptr);
  }
  v8 = 0;
LABEL_39:
  v20 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v8;
}

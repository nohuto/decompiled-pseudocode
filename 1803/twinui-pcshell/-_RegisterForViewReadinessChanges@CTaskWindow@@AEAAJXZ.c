/*
 * XREFs of ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x1800472EC
 * Callers:
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180047EFC (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x180134944 (-RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?add_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180053F60 (-add_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJPEAU-$ITypedEventHandler@PEAU.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006D780 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??$AsWeak@VCTaskWindow@@@WRL@Microsoft@@YAJPEAVCTaskWindow@@PEAVWeakRef@01@@Z @ 0x18006F300 (--$AsWeak@VCTaskWindow@@@WRL@Microsoft@@YAJPEAVCTaskWindow@@PEAVWeakRef@01@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskWindow::_RegisterForViewReadinessChanges(CTaskWindow *this)
{
  int v2; // r12d
  __int64 v3; // rbx
  __int64 v4; // r15
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  void (__fastcall *v8)(struct Microsoft::WRL::Details::ModuleBase *); // rax
  void (__fastcall *v9)(__int64, _QWORD *, char *); // rax
  __int64 v10; // rcx
  void (__fastcall *v11)(_QWORD *); // rax
  void (__fastcall *v12)(__int64); // rax
  __int64 v14; // [rsp+48h] [rbp-10h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+50h] BYREF
  char v17; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+60h]

  v2 = 0;
  if ( *((_QWORD *)this + 7) )
  {
    v18 = 0LL;
    v16 = 0LL;
    v2 = Microsoft::WRL::AsWeak<CTaskWindow>(this, &v16);
    v3 = v16;
    if ( v2 >= 0 )
    {
      v4 = v16;
      v14 = v16;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v6 = v5;
      v7 = 0LL;
      if ( v5 )
      {
        *v5 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
        *((_DWORD *)v5 + 3) = 1;
        *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
        {
          v8 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL);
          if ( (char *)v8 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
            Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
          else
            v8(Microsoft::WRL::Details::ModuleBase::module_);
        }
        v6[2] = this;
        v6[3] = 0LL;
        if ( v6 + 3 != &v14 )
        {
          v6[3] = v3;
          v4 = 0LL;
        }
        *v6 = off_18031D410;
        v7 = v6;
      }
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      v15 = 0LL;
      (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 7))(
        *((_QWORD *)this + 7),
        &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
        &v15);
      v9 = *(void (__fastcall **)(__int64, _QWORD *, char *))(*(_QWORD *)v15 + 80LL);
      if ( (char *)v9 == (char *)ViewWrapperBase::add_ClientWindowReadyForPresentationChanged )
        ViewWrapperBase::add_ClientWindowReadyForPresentationChanged(v15, v7, &v17);
      else
        v9(v15, v7, &v17);
      v10 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( v7 )
      {
        v11 = *(void (__fastcall **)(_QWORD *))(*v7 + 16LL);
        if ( (char *)v11 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::Release(v7);
        else
          v11(v7);
      }
    }
    if ( v3 )
    {
      v12 = *(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL);
      if ( (char *)v12 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v3);
      else
        v12(v3);
    }
  }
  return (unsigned int)v2;
}

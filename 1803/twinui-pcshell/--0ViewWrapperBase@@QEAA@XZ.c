/*
 * XREFs of ??0ViewWrapperBase@@QEAA@XZ @ 0x18004F758
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180095360 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VViewWrapperBase@@UIUAPViewWrapper@@UI.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VViewWrapperBase@@UILegacyViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1801C7B04 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VViewWrapperBase@@UILegacyViewWrapper@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002BE80 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18003A91C (--0-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Wi.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

ViewWrapperBase *__fastcall ViewWrapperBase::ViewWrapperBase(ViewWrapperBase *this)
{
  *((_QWORD *)this + 1) = &Microsoft::WRL::ChainInterfaces<IViewWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((ViewWrapperBase *)((char *)this + 56));
  *(_QWORD *)this = &ViewWrapperBase::`vftable'{for `INtUserViewWrapper'};
  *((_QWORD *)this + 1) = &ViewWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IViewWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &ViewWrapperBase::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride'};
  *((_QWORD *)this + 3) = &ViewWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 4) = &ViewWrapperBase::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IClientWindowState'};
  *((_QWORD *)this + 5) = &ViewWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 6) = &ViewWrapperBase::`vftable'{for `IFramedViewWrapper'};
  *((_QWORD *)this + 7) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = -1LL;
  *((_DWORD *)this + 46) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  memset_0((char *)this + 220, 0, 0x24uLL);
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 1;
  *((_DWORD *)this + 71) = 1;
  *((_DWORD *)this + 72) = 4;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 40);
  InitializeSRWLock((PSRWLOCK)this + 41);
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 0;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 90) = 1;
  *((_QWORD *)this + 46) = 0LL;
  *((_BYTE *)this + 376) = 0;
  *(_QWORD *)((char *)this + 380) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_DWORD *)this + 114) = 0;
  *((_BYTE *)this + 460) = 0;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>((RTL_SRWLOCK *)this + 60);
  *((_DWORD *)this + 126) = 0;
  *((_WORD *)this + 254) = 0;
  RmActivityImportanceInitialize((char *)this + 348);
  return this;
}

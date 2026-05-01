/*
 * XREFs of ??0ViewWrapperBase@@QEAA@XZ @ 0x180112D68
 * Callers:
 *     ??0LegacyViewWrapper@@QEAA@XZ @ 0x180100048 (--0LegacyViewWrapper@@QEAA@XZ.c)
 *     ??0UAPViewWrapper@@QEAA@XZ @ 0x1801001B0 (--0UAPViewWrapper@@QEAA@XZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     memset @ 0x180194E50 (memset.c)
 */

ViewWrapperBase *__fastcall ViewWrapperBase::ViewWrapperBase(ViewWrapperBase *this)
{
  *((_QWORD *)this + 1) = &Microsoft::WRL::ChainInterfaces<IViewWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((ViewWrapperBase *)((char *)this + 56));
  *(_QWORD *)this = &ViewWrapperBase::`vftable'{for `INtUserViewWrapper'};
  *((_QWORD *)this + 1) = &ViewWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IViewWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,Microsoft::WRL::Details::InterfaceList<IFramedViewWrapper,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>>,1,0>'};
  *((_QWORD *)this + 2) = &ViewWrapperBase::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride'};
  *((_QWORD *)this + 3) = &ViewWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,Microsoft::WRL::Details::InterfaceList<IFramedViewWrapper,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 4) = &ViewWrapperBase::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IClientWindowState'};
  *((_QWORD *)this + 5) = &ViewWrapperBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,Microsoft::WRL::Details::InterfaceList<IFramedViewWrapper,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 6) = &ViewWrapperBase::`vftable'{for `IFramedViewWrapper'};
  *((_QWORD *)this + 7) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  memset((char *)this + 196, 0, 0x24uLL);
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 1;
  *((_DWORD *)this + 65) = 1;
  *((_DWORD *)this + 66) = 4;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 37);
  InitializeSRWLock((PSRWLOCK)this + 38);
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 81) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 1;
  *((_QWORD *)this + 43) = 0LL;
  *((_BYTE *)this + 352) = 0;
  *(_QWORD *)((char *)this + 356) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_BYTE *)this + 436) = 0;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 58);
  InitializeSRWLock((PSRWLOCK)this + 59);
  *((_DWORD *)this + 120) = 0;
  *((_BYTE *)this + 484) = 0;
  RmActivityImportanceInitialize((char *)this + 324);
  return this;
}

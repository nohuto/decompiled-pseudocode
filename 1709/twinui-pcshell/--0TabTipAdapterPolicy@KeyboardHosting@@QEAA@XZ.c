/*
 * XREFs of ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x1801A15D4
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801A1B48 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

KeyboardHosting::TabTipAdapterPolicy *__fastcall KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::FtmBase::FtmBase((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 24));
  *((_QWORD *)this + 9) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `KeyboardHosting::IDesktopKeyboardHostingPolicy'};
  *v1 = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_DWORD *)this + 26) = 1000;
  *(_QWORD *)this = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy'};
  *((_DWORD *)this + 27) = 100000;
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `KeyboardHosting::IDesktopKeyboardHostingPolicy'};
  *v1 = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 10) = L"SOFTWARE\\Microsoft\\TabletTip\\1.7";
  *((_QWORD *)this + 11) = L"OptimizedKeyboardRelativeXPositionOnScreen";
  *((_QWORD *)this + 12) = L"OptimizedKeyboardRelativeYPositionOnScreen";
  memset((char *)this + 112, 0, 0x30uLL);
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  memset((char *)this + 200, 0, 0x20uLL);
  *((_DWORD *)this + 58) = 96;
  *((_DWORD *)this + 59) = 96;
  *((_DWORD *)this + 60) = 100;
  *((_QWORD *)this + 31) = 0LL;
  memset((char *)this + 256, 0, 0x20uLL);
  *((_DWORD *)this + 72) = 96;
  *((_DWORD *)this + 73) = 96;
  *((_DWORD *)this + 74) = 100;
  *((_QWORD *)this + 38) = 0LL;
  memset((char *)this + 312, 0, 0x20uLL);
  *((_DWORD *)this + 86) = 96;
  *((_DWORD *)this + 87) = 96;
  *((_DWORD *)this + 88) = 100;
  *((_WORD *)this + 180) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_BYTE *)this + 376) = 0;
  *(_QWORD *)((char *)this + 380) = 0LL;
  *((_BYTE *)this + 388) = 0;
  *((_QWORD *)this + 49) = 0LL;
  *((_BYTE *)this + 400) = 0;
  memset((char *)this + 404, 0, 0x2CuLL);
  *((_DWORD *)this + 112) = -1;
  return this;
}

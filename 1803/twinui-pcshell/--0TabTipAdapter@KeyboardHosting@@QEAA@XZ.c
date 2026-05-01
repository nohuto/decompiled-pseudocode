/*
 * XREFs of ??0TabTipAdapter@KeyboardHosting@@QEAA@XZ @ 0x180247134
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapter@KeyboardHosting@@$$QEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x18023B0D8 (--$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@De.c)
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

KeyboardHosting::TabTipAdapter *__fastcall KeyboardHosting::TabTipAdapter::TabTipAdapter(
        KeyboardHosting::TabTipAdapter *this)
{
  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRemoteTabTipAdapter>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &KeyboardHosting::TabTipAdapter::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRemoteTabTipAdapter>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  memset_0((char *)this + 112, 0, 0x98uLL);
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 7LL;
  *((_WORD *)this + 132) = 0;
  *((_BYTE *)this + 296) = 0;
  *((_WORD *)this + 150) = 0;
  *((_DWORD *)this + 76) = 0;
  *(_QWORD *)((char *)this + 308) = 6LL;
  *((_WORD *)this + 158) = 0;
  *((_DWORD *)this + 80) = 0;
  *(_QWORD *)((char *)this + 324) = 6LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  return this;
}

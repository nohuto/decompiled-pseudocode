/*
 * XREFs of ??0ViewRectProvider@KeyboardHosting@@QEAA@XZ @ 0x180251738
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x180252930 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

KeyboardHosting::ViewRectProvider *__fastcall KeyboardHosting::ViewRectProvider::ViewRectProvider(
        KeyboardHosting::ViewRectProvider *this)
{
  KeyboardHosting::ViewRectProvider *result; // rax

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IViewRectProvider>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &KeyboardHosting::ViewRectProvider::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  memset_0((char *)this + 24, 0, 0x20uLL);
  *((_DWORD *)this + 16) = 100;
  *((_DWORD *)this + 14) = 96;
  *((_DWORD *)this + 15) = 96;
  *((_QWORD *)this + 9) = 0LL;
  memset_0((char *)this + 80, 0, 0x20uLL);
  *((_DWORD *)this + 28) = 96;
  *((_DWORD *)this + 29) = 96;
  *((_DWORD *)this + 30) = 100;
  *((_QWORD *)this + 16) = 0LL;
  memset_0((char *)this + 136, 0, 0x20uLL);
  *((_DWORD *)this + 42) = 96;
  result = this;
  *((_DWORD *)this + 43) = 96;
  *((_DWORD *)this + 44) = 100;
  return result;
}

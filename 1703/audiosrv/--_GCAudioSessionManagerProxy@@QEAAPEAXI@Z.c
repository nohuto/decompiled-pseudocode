/*
 * XREFs of ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x180032A70
 * Callers:
 *     AudioSessionManagerDestroy @ 0x1800329E0 (AudioSessionManagerDestroy.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

CAudioSessionManagerProxy *__fastcall CAudioSessionManagerProxy::`scalar deleting destructor'(
        CAudioSessionManagerProxy *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
  operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}

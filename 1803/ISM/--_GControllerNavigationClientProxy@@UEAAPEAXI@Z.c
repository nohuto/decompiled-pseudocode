/*
 * XREFs of ??_GControllerNavigationClientProxy@@UEAAPEAXI@Z @ 0x180030B20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

ControllerNavigationClientProxy *__fastcall ControllerNavigationClientProxy::`scalar deleting destructor'(
        ControllerNavigationClientProxy *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD); // rcx

  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  if ( v4 )
    (**v4)(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

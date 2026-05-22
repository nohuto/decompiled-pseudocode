/*
 * XREFs of ??_GBamoControllerNavigationClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180030B80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

BamoImpl::BamoControllerNavigationClientProxyImpl *__fastcall BamoImpl::BamoControllerNavigationClientProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoControllerNavigationClientProxyImpl *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD); // rcx

  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 2);
  if ( v4 )
    (**v4)(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

/*
 * XREFs of ??1?$unique_ptr@UDeviceRemovalEventArgs@WGIController@@U?$default_delete@UDeviceRemovalEventArgs@WGIController@@@std@@@std@@QEAA@XZ @ 0x18007A454
 * Callers:
 *     _WGIController::NotifyRemovedAndStop_::_1_::dtor$1 @ 0x1800E777D (_WGIController--NotifyRemovedAndStop_--_1_--dtor$1.c)
 *     _WGIController::NotifyDeviceRemovalCallback_::_1_::dtor$0 @ 0x1800E77E9 (_WGIController--NotifyDeviceRemovalCallback_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::unique_ptr<WGIController::DeviceRemovalEventArgs>::~unique_ptr<WGIController::DeviceRemovalEventArgs>(
        __int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    operator delete(v1);
  }
}

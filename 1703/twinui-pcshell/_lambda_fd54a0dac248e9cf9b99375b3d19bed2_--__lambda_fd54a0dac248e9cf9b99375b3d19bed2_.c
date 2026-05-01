/*
 * XREFs of _lambda_fd54a0dac248e9cf9b99375b3d19bed2_::__lambda_fd54a0dac248e9cf9b99375b3d19bed2_ @ 0x1800739C0
 * Callers:
 *     _NotificationDispatcher::RunAsync__lambda_fd54a0dac248e9cf9b99375b3d19bed2____::_1_::dtor$0 @ 0x18019AF3C (_NotificationDispatcher--RunAsync__lambda_fd54a0dac248e9cf9b99375b3d19bed2____--_1_--dtor$0.c)
 * Callees:
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x1800777AC (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_fd54a0dac248e9cf9b99375b3d19bed2_::__lambda_fd54a0dac248e9cf9b99375b3d19bed2_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)(a1 + 4));
  v2 = a1[3];
  if ( v2 )
  {
    a1[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = a1[2];
  if ( v3 )
  {
    a1[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}

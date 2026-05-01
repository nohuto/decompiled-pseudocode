/*
 * XREFs of _lambda_794533bae2653f5a8c11b3eb7b48e533_::__lambda_794533bae2653f5a8c11b3eb7b48e533_ @ 0x1800767D8
 * Callers:
 *     _NotificationDispatcher::RunAsync__lambda_794533bae2653f5a8c11b3eb7b48e533____::_1_::dtor$0 @ 0x1801E98FF (_NotificationDispatcher--RunAsync__lambda_794533bae2653f5a8c11b3eb7b48e533____--_1_--dtor$0.c)
 * Callees:
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x18007A370 (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_794533bae2653f5a8c11b3eb7b48e533_::__lambda_794533bae2653f5a8c11b3eb7b48e533_(__int64 *a1)
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

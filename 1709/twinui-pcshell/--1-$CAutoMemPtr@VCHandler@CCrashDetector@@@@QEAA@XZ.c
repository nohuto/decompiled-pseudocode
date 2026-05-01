/*
 * XREFs of ??1?$CAutoMemPtr@VCHandler@CCrashDetector@@@@QEAA@XZ @ 0x18005205C
 * Callers:
 *     _CCrashDetector::_TakeOwnershipOfHandleAndStartMonitoring_::_1_::dtor$1 @ 0x1801E8C16 (_CCrashDetector--_TakeOwnershipOfHandleAndStartMonitoring_--_1_--dtor$1.c)
 *     _CCrashDetector::StartMonitoringThreadOfWindow__lambda_ec4fde8b812195c38639938f317e8c2b____::_1_::dtor$1 @ 0x1801EF388 (_CCrashDetector--StartMonitoringThreadOfWindow__lambda_ec4fde8b812195c38639938f317e8c2b____--_1_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAutoMemPtr<CCrashDetector::CHandler>::~CAutoMemPtr<CCrashDetector::CHandler>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // r8
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}

/*
 * XREFs of PopUserShutdownCancelled @ 0x1405EACD0
 * Callers:
 *     PoUserShutdownCancelled @ 0x1405EACA0 (PoUserShutdownCancelled.c)
 *     PopUserShutdownDelayWorkerCallback @ 0x140762E90 (PopUserShutdownDelayWorkerCallback.c)
 * Callees:
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     PpmEndHighPerfRequest @ 0x14016DFB4 (PpmEndHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 */

__int64 (__fastcall *__fastcall PopUserShutdownCancelled(char a1))(_QWORD)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 (__fastcall *result)(_QWORD); // rax

  v2 = 0;
  PopAcquirePolicyLock();
  if ( PopUserShutdownInProgress )
  {
    KeCancelTimer(&PopUserShutdownDelayTimer);
    PopBsdShutdownInProgress = 0;
    PopUserShutdownInProgress = 0;
    v2 = 1;
  }
  PopReleasePolicyLock();
  result = qword_1403D1410;
  if ( qword_1403D1410 )
  {
    LOBYTE(v3) = a1;
    result = (__int64 (__fastcall *)(_QWORD))qword_1403D1410(v3);
    v2 = (char)result;
  }
  if ( v2 )
    return (__int64 (__fastcall *)(_QWORD))PpmEndHighPerfRequest(3);
  return result;
}

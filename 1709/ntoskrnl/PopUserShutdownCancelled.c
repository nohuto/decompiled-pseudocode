/*
 * XREFs of PopUserShutdownCancelled @ 0x1406FDB68
 * Callers:
 *     PoUserShutdownCancelled @ 0x1406FDA30 (PoUserShutdownCancelled.c)
 *     PopUserShutdownDelayWorkerCallback @ 0x1406FDBE0 (PopUserShutdownDelayWorkerCallback.c)
 * Callees:
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     PpmEndHighPerfRequest @ 0x14015B7B4 (PpmEndHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
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
  result = xmmword_14038D4C0;
  if ( xmmword_14038D4C0 )
  {
    LOBYTE(v3) = a1;
    result = (__int64 (__fastcall *)(_QWORD))xmmword_14038D4C0(v3);
    v2 = (char)result;
  }
  if ( v2 )
    return (__int64 (__fastcall *)(_QWORD))PpmEndHighPerfRequest(3);
  return result;
}

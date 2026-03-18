/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x140707C54
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1405EAC60 (PopNetEvaluationWorkerCallback.c)
 *     PopNetRefreshWorkerCallback @ 0x140707BB0 (PopNetRefreshWorkerCallback.c)
 *     PopNetUpdateConnectivityRefreshTime @ 0x140707C88 (PopNetUpdateConnectivityRefreshTime.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 */

struct _KTHREAD *__fastcall PopNetSetResiliencyPhaseBias(char a1)
{
  __int64 v2; // rcx

  PopReleasePolicyLock();
  if ( *((_QWORD *)&xmmword_14038D500 + 1) )
  {
    LOBYTE(v2) = a1;
    (*((void (__fastcall **)(__int64))&xmmword_14038D500 + 1))(v2);
  }
  return PopAcquirePolicyLock();
}

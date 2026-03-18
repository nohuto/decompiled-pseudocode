/*
 * XREFs of PopNetSetResiliencyPhaseBias @ 0x14076BAD4
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x14064FB20 (PopNetEvaluationWorkerCallback.c)
 *     PopNetRefreshWorkerCallback @ 0x14076B9E0 (PopNetRefreshWorkerCallback.c)
 *     PopNetUpdateConnectivityRefreshTime @ 0x14076BB08 (PopNetUpdateConnectivityRefreshTime.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 */

struct _KTHREAD *__fastcall PopNetSetResiliencyPhaseBias(char a1)
{
  __int64 v2; // rcx

  PopReleasePolicyLock();
  if ( qword_1403D1458 )
  {
    LOBYTE(v2) = a1;
    qword_1403D1458(v2);
  }
  return PopAcquirePolicyLock();
}

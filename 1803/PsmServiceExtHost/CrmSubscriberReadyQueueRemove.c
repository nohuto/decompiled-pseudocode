/*
 * XREFs of CrmSubscriberReadyQueueRemove @ 0x180034A18
 * Callers:
 *     CrmRegistrationUpdate @ 0x180005820 (CrmRegistrationUpdate.c)
 *     CrmGlobalsSubscribersDeleteRoutine @ 0x180069F74 (CrmGlobalsSubscribersDeleteRoutine.c)
 *     CrmSubscriberCleanup @ 0x18006A2CC (CrmSubscriberCleanup.c)
 * Callees:
 *     CrmLogSubscriberReadyQueueRemove @ 0x180034ADC (CrmLogSubscriberReadyQueueRemove.c)
 *     CrmSubscriberNotify @ 0x180034B54 (CrmSubscriberNotify.c)
 */

__int64 __fastcall CrmSubscriberReadyQueueRemove(_QWORD *a1, int a2)
{
  __int64 v2; // rsi
  int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  __int64 result; // rax

  v2 = a1[4];
  v5 = 0;
  RtlAcquireSRWLockExclusive(&qword_180092A38);
  LODWORD(qword_180092A40) = GetCurrentThreadId();
  v6 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    v5 = 1;
    if ( (_QWORD *)v6[1] != a1 || (v7 = (_QWORD *)a1[1], (_QWORD *)*v7 != a1) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
  }
  a1[1] = a1;
  *a1 = a1;
  LODWORD(qword_180092A40) = 0;
  if ( a2 )
  {
    RtlConvertSRWLockExclusiveToShared(&qword_180092A38);
    CrmSubscriberNotify(a1, 0LL);
    result = RtlReleaseSRWLockShared(&qword_180092A38);
  }
  else
  {
    result = RtlReleaseSRWLockExclusive(&qword_180092A38);
  }
  if ( v5 )
    return CrmLogSubscriberReadyQueueRemove(v2);
  return result;
}

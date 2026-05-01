/*
 * XREFs of CrmSubscriberReadyQueueAdd @ 0x18003491C
 * Callers:
 *     CrmRegistrationUpdate @ 0x180005820 (CrmRegistrationUpdate.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     CrmSubscriberNotify @ 0x180034B54 (CrmSubscriberNotify.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmSubscriberReadyQueueAdd(_QWORD *a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rax
  TLG_STATUS result; // eax
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v1 = a1[4];
  RtlAcquireSRWLockExclusive(&qword_180092A38);
  LODWORD(qword_180092A40) = GetCurrentThreadId();
  v3 = (_QWORD *)qword_180092A50;
  if ( *(__int64 **)qword_180092A50 != &qword_180092A48 )
    __fastfail(3u);
  *a1 = &qword_180092A48;
  a1[1] = v3;
  *v3 = a1;
  LODWORD(qword_180092A40) = 0;
  qword_180092A50 = (__int64)a1;
  RtlConvertSRWLockExclusiveToShared(&qword_180092A38);
  CrmSubscriberNotify(a1, 1LL);
  result = RtlReleaseSRWLockShared(&qword_180092A38);
  if ( dword_180092130 > 5u )
  {
    v9 = 0;
    v7 = &v5;
    v5 = v1;
    v8 = 8;
    return TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_180083C92, 0LL, 0LL, 3u, &pData);
  }
  return result;
}

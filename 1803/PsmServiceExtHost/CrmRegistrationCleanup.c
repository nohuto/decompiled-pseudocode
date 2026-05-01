/*
 * XREFs of CrmRegistrationCleanup @ 0x18006A9BC
 * Callers:
 *     CrmSubscriberStart @ 0x180039328 (CrmSubscriberStart.c)
 *     CrmSubscriberCleanup @ 0x18006A2CC (CrmSubscriberCleanup.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     CrmStateMonitorRegistrationRemove @ 0x18006A6E0 (CrmStateMonitorRegistrationRemove.c)
 */

TLG_STATUS __fastcall CrmRegistrationCleanup(__int64 a1)
{
  __int64 i; // rdi
  void *v3; // r8
  TLG_STATUS result; // eax
  TLG_STATUS v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  TLG_STATUS *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
    CrmStateMonitorRegistrationRemove(
      *((int **)&unk_180092990 + *(unsigned int *)(*(_QWORD *)(a1 + 48) + 48 * i + 8)),
      a1,
      *(_QWORD *)(a1 + 48) + 48 * i,
      0);
  v3 = *(void **)(a1 + 48);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  result = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)dword_180092130 > 5 )
  {
    v9 = 0;
    v5 = result;
    v7 = &v5;
    v8 = 4;
    return TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_18008432E, 0LL, 0LL, 3u, &pData);
  }
  return result;
}

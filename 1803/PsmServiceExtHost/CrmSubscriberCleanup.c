/*
 * XREFs of CrmSubscriberCleanup @ 0x18006A2CC
 * Callers:
 *     CrmGlobalsCleanup @ 0x180069D80 (CrmGlobalsCleanup.c)
 *     CrmGlobalsSubscribersDeleteRoutine @ 0x180069F74 (CrmGlobalsSubscribersDeleteRoutine.c)
 *     CrmSrvSubscribe @ 0x180069FB0 (CrmSrvSubscribe.c)
 *     CRM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x18006E240 (CRM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     CrmRpcSrvUnsubscribe @ 0x18006E310 (CrmRpcSrvUnsubscribe.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     CrmSubscriberReadyQueueRemove @ 0x180034A18 (CrmSubscriberReadyQueueRemove.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     CrmGlobalsSubscriberRemove @ 0x180069E18 (CrmGlobalsSubscriberRemove.c)
 *     CrmRegistrationCleanup @ 0x18006A9BC (CrmRegistrationCleanup.c)
 */

int __fastcall CrmSubscriberCleanup(__int64 a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  if ( a2 )
    CrmGlobalsSubscriberRemove(a1);
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    CrmRegistrationCleanup(v3);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 64));
  }
  CrmSubscriberReadyQueueRemove((_QWORD *)a1, 0);
  if ( *(_DWORD *)(a1 + 72) || *(_DWORD *)(a1 + 76) )
    NtDeleteWnfStateName(a1 + 72);
  v4 = *(_QWORD *)(a1 + 32);
  if ( (unsigned int)dword_180092130 > 5 )
  {
    v10 = 0;
    v6 = v4;
    v8 = &v6;
    v9 = 8;
    LODWORD(v4) = TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_180083D04, 0LL, 0LL, 3u, &pData);
  }
  return v4;
}

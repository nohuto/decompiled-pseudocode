/*
 * XREFs of CrmLogSubscriberReadyQueueRemove @ 0x180034ADC
 * Callers:
 *     CrmSubscriberReadyQueueRemove @ 0x180034A18 (CrmSubscriberReadyQueueRemove.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmLogSubscriberReadyQueueRemove(__int64 a1)
{
  TLG_STATUS result; // eax
  __int64 v2; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( dword_180092130 > 5u )
  {
    v6 = 0;
    v4 = &v2;
    v2 = a1;
    v5 = 8;
    return TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_180083C59, 0LL, 0LL, 3u, &pData);
  }
  return result;
}

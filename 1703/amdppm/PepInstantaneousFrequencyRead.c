/*
 * XREFs of PepInstantaneousFrequencyRead @ 0x1C000AA00
 * Callers:
 *     <none>
 * Callees:
 *     PepNotifyFeedbackRead @ 0x1C000A864 (PepNotifyFeedbackRead.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall PepInstantaneousFrequencyRead(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  signed int v6; // eax
  unsigned __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  LODWORD(v8) = *(_DWORD *)(v4 + 32);
  v6 = PoFxProcessorNotification(v5, 10LL, &v8);
  if ( v6 < 0 )
    PepNotifyFeedbackRead(v6);
  result = 100 * v9 / (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL);
  *a2 = result;
  return result;
}

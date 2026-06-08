/*
 * XREFs of PepInstantaneousFrequencyRead @ 0x1C000DFF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 *     PepNotifyFeedbackRead @ 0x1C000E0E4 (PepNotifyFeedbackRead.c)
 */

unsigned __int64 __fastcall PepInstantaneousFrequencyRead(__int64 a1, _DWORD *a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  LODWORD(v5) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
  PepNotifyFeedbackRead(*(_QWORD *)(a1 + 16), &v5);
  result = 100 * v6 / (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL);
  *a2 = result;
  return result;
}

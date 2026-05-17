/*
 * XREFs of PsspSampleCounters @ 0x18005C73C
 * Callers:
 *     PssNtCaptureSnapshot @ 0x18005C280 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x180019360 (RtlQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwQueryInformationThread @ 0x1800A0560 (ZwQueryInformationThread.c)
 */

__int64 __fastcall PsspSampleCounters(unsigned __int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF

  RtlQueryPerformanceCounter(a1, (__int64)a2);
  v3 = 0LL;
  result = ZwQueryInformationThread(-2LL, 23LL, &v5);
  if ( (int)result >= 0 )
    v3 = v5;
  *a2 = v3;
  return result;
}

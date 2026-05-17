/*
 * XREFs of sub_180109F00 @ 0x180109F00
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180109790 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x180007F20 (RtlQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 */

__int64 __fastcall sub_180109F00(unsigned __int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-28h]

  RtlQueryPerformanceCounter(a1, (__int64)a2);
  v3 = 0LL;
  result = ZwQueryInformationThread();
  if ( (int)result >= 0 )
    v3 = v5;
  *a2 = v3;
  return result;
}

/*
 * XREFs of sub_180001C74 @ 0x180001C74
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800019F0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18005F480 (RtlQueryPerformanceCounter.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 */

__int64 __fastcall sub_180001C74(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF

  RtlQueryPerformanceCounter();
  v3 = 0LL;
  result = ZwQueryInformationThread(-2LL, 23LL, &v5, 16LL, 0LL);
  if ( (int)result >= 0 )
    v3 = v5;
  *a2 = v3;
  return result;
}

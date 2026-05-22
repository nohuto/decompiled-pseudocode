/*
 * XREFs of _anonymous_namespace_::SimpleTimeProvider::GetCurrentTimeMS @ 0x1800C3B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::SimpleTimeProvider::GetCurrentTimeMS(__int64 a1, LONGLONG *a2)
{
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  *a2 = PerformanceCount.QuadPart / (qword_18010F2B8 / 1000);
  return 0LL;
}

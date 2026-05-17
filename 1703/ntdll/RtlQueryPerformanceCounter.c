/*
 * XREFs of RtlQueryPerformanceCounter @ 0x18005F480
 * Callers:
 *     sub_180001C74 @ 0x180001C74 (sub_180001C74.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     sub_18005395C @ 0x18005395C (sub_18005395C.c)
 *     sub_18005F2B4 @ 0x18005F2B4 (sub_18005F2B4.c)
 *     RtlGetSystemTimePrecise @ 0x18005F3C0 (RtlGetSystemTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x1800E4A40 (RtlGetInterruptTimePrecise.c)
 * Callees:
 *     ZwQueryPerformanceCounter @ 0x1800A5920 (ZwQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlQueryPerformanceCounter(unsigned __int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  char v6; // [rsp+40h] [rbp+18h] BYREF

  if ( MEMORY[0x7FFE03C6] == 1 )
  {
    v2 = MEMORY[0x7FFE03B8];
    v3 = __rdtsc();
    *a1 = v3;
    *a1 = (v3 + v2) >> MEMORY[0x7FFE03C7];
  }
  else
  {
    ZwQueryPerformanceCounter(&v5, &v6);
    *a1 = v5;
  }
  return 1LL;
}

/*
 * XREFs of RtlpHpStackDbInitialize @ 0x1800FFDC8
 * Callers:
 *     RtlpHpStackTraceEnable @ 0x1801005CC (RtlpHpStackTraceEnable.c)
 * Callees:
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 RtlpHpStackDbInitialize()
{
  __int64 result; // rax

  qword_1801603C0 = (__int64)RtlpHpMetadataHeap;
  qword_180160380 = 0LL;
  qword_180160388 = 0LL;
  qword_180160390 = 0LL;
  qword_180160398 = 0LL;
  qword_1801603A8 = 0LL;
  qword_1801603A0 = 0LL;
  qword_1801603B0 = (__int64)RtlpHpStackDbAllocRoutine;
  qword_1801603B8 = (__int64)RtlpHpStackDbFreeRoutine;
  result = 1LL;
  dword_180160378 = 2;
  return result;
}

/*
 * XREFs of sub_1800F6540 @ 0x1800F6540
 * Callers:
 *     RtlHeapTrkInitialize @ 0x1800F5D20 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlRandomEx @ 0x18007E880 (RtlRandomEx.c)
 *     ZwQueryPerformanceCounter @ 0x1800A5920 (ZwQueryPerformanceCounter.c)
 */

__int64 sub_1800F6540()
{
  _WORD *v0; // rbx
  __int64 v1; // rdi
  ULONG v2; // r8d
  __int64 result; // rax
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  ZwQueryPerformanceCounter(&PerformanceCounter, 0LL);
  v0 = &unk_18015C400;
  Seed = PerformanceCounter.LowPart;
  v1 = 8LL;
  do
  {
    v2 = RtlRandomEx(&Seed);
    result = 148064917 * v2;
    *v0++ = v2 % 0x1EEF;
    --v1;
  }
  while ( v1 );
  return result;
}

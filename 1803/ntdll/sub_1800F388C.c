/*
 * XREFs of sub_1800F388C @ 0x1800F388C
 * Callers:
 *     RtlHeapTrkInitialize @ 0x1800F3000 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlRandomEx @ 0x18007AA80 (RtlRandomEx.c)
 *     ZwQueryPerformanceCounter @ 0x18009B0E0 (ZwQueryPerformanceCounter.c)
 */

__int64 sub_1800F388C()
{
  _WORD *v0; // rbx
  __int64 v1; // rdi
  unsigned int v2; // r8d
  __int64 result; // rax
  __int32 v4; // [rsp+30h] [rbp+8h] BYREF
  __int32 v5; // [rsp+38h] [rbp+10h]

  ZwQueryPerformanceCounter();
  v0 = &unk_18015D800;
  v4 = v5;
  v1 = 8LL;
  do
  {
    v2 = RtlRandomEx(&v4);
    result = 148064917 * v2;
    *v0++ = v2 % 0x1EEF;
    --v1;
  }
  while ( v1 );
  return result;
}

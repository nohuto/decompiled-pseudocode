/*
 * XREFs of RtlpHpSegLfhAllocate @ 0x1402980F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegAlloc @ 0x1402979E8 (RtlpHpSegAlloc.c)
 */

void *__fastcall RtlpHpSegLfhAllocate(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  int v4; // r9d
  unsigned int v5; // eax

  v4 = a4 & 1 | 0x8000000;
  v5 = v4 | 4;
  if ( a2 < 0x10000 )
    v5 = v4;
  return RtlpHpSegAlloc(a1, a2, a2, 0LL, v5);
}

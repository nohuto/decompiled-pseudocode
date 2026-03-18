/*
 * XREFs of RtlpHpSegVsAllocate @ 0x140299320
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegAlloc @ 0x1402979E8 (RtlpHpSegAlloc.c)
 */

void *__fastcall RtlpHpSegVsAllocate(__int64 a1, unsigned int a2, _DWORD *a3, char a4)
{
  int v4; // r9d
  unsigned int v6; // eax
  void *result; // rax

  v4 = a4 & 1 | 0xC000000;
  v6 = v4 | 4;
  if ( a2 < 0x10000 )
    v6 = v4;
  result = RtlpHpSegAlloc(a1, a2, a2, 0LL, v6);
  if ( a3 )
    *a3 = 0;
  return result;
}

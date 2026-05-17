/*
 * XREFs of RtlpHpSegVsAllocate @ 0x180078A90
 * Callers:
 *     RtlpHpVsSubsegmentCreate @ 0x18007894C (RtlpHpVsSubsegmentCreate.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x18003827C (RtlpHpSegAlloc.c)
 */

void *__fastcall RtlpHpSegVsAllocate(__int64 a1, unsigned int a2, _DWORD *a3, char a4)
{
  int v4; // r10d
  unsigned int v6; // r9d
  void *result; // rax

  v4 = a4 & 1 | 0x8000000;
  v6 = a4 & 1 | 0x8000004;
  if ( a2 < 0x10000 )
    v6 = v4;
  result = RtlpHpSegAlloc(a1, a2, a2, v6);
  if ( a3 )
    *a3 = 0;
  return result;
}

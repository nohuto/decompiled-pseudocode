/*
 * XREFs of RtlpHpExtrasMove @ 0x180002878
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180048744 (RtlpHpSegReAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x180107690 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpHpExtrasMove(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int8 *v8; // rdx
  __int64 v9; // rcx

  v5 = a1 + a2;
  v6 = a1 + a2 + 16;
  if ( (a5 & 0x10000000) == 0 )
    v6 = v5;
  v7 = a3 + a4;
  v8 = (unsigned __int8 *)((v6 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  v9 = v7 + 16;
  if ( (a5 & 0x10000000) == 0 )
    v9 = v7;
  return memmove((void *)((v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v8, 16 * ((unsigned int)v8[3] + 1));
}

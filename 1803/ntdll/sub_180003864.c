/*
 * XREFs of sub_180003864 @ 0x180003864
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180104BE8 @ 0x180104BE8 (sub_180104BE8.c)
 *     sub_1801055C8 @ 0x1801055C8 (sub_1801055C8.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_180003864(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
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

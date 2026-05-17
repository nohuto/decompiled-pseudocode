/*
 * XREFs of sub_180100DA8 @ 0x180100DA8
 * Callers:
 *     sub_18000853C @ 0x18000853C (sub_18000853C.c)
 * Callees:
 *     sub_180008020 @ 0x180008020 (sub_180008020.c)
 *     sub_180020FD8 @ 0x180020FD8 (sub_180020FD8.c)
 */

unsigned __int64 __fastcall sub_180100DA8(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r9
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2 & 0xFFFFFFFFFFF00000uLL;
  v5 = v2 + 32LL * (unsigned int)((*a2 - v2) >> 12);
  v6 = sub_180020FD8(a1, v5, *a2, v2, &v8);
  return sub_180008020(a1, (__int64 *)a2, v6, *(unsigned __int16 *)(v5 + 6), v8);
}

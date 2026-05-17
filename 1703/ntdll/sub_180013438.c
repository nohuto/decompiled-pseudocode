/*
 * XREFs of sub_180013438 @ 0x180013438
 * Callers:
 *     sub_1800115C8 @ 0x1800115C8 (sub_1800115C8.c)
 * Callees:
 *     sub_1800134A4 @ 0x1800134A4 (sub_1800134A4.c)
 *     sub_180082B14 @ 0x180082B14 (sub_180082B14.c)
 */

__int64 __fastcall sub_180013438(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 248) = 0;
  LOBYTE(a3) = 1;
  v5 = sub_1800134A4(a1 + 8, a2, a3);
  if ( v5 >= 0 )
  {
    v5 = sub_1800134A4(a1 + 128, a2, 0LL);
    if ( v5 < 0 )
      sub_180082B14(a1 + 8);
  }
  return (unsigned int)v5;
}

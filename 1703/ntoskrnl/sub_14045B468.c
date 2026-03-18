/*
 * XREFs of sub_14045B468 @ 0x14045B468
 * Callers:
 *     WbGetWarbirdThread @ 0x14053C220 (WbGetWarbirdThread.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     sub_14045B504 @ 0x14045B504 (sub_14045B504.c)
 *     WbAlloc @ 0x14053BF78 (WbAlloc.c)
 */

__int64 __fastcall sub_14045B468(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // esi

  v6 = WbAlloc(0x28uLL);
  if ( v6 >= 0 )
  {
    memset(0LL, 0, 0x28uLL);
    ++MEMORY[8];
    MEMORY[0] = a2;
    MEMORY[0x10] = 0LL;
    MEMORY[0x18] = 0LL;
    MEMORY[0x20] = 10;
    *a3 = 0LL;
  }
  sub_14045B504(a1, 0LL);
  return (unsigned int)v6;
}

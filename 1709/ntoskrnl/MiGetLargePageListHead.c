/*
 * XREFs of MiGetLargePageListHead @ 0x14010FDF0
 * Callers:
 *     MiLargePageFreeToZero @ 0x14010FA20 (MiLargePageFreeToZero.c)
 *     MiTryUnlinkNodeLargePage @ 0x140126570 (MiTryUnlinkNodeLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetLargePageListHead(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v5; // rax

  if ( a3 == 2 )
    v5 = (((unsigned __int64)(unsigned int)dword_140388540 >> 4) & (unsigned int)(a1 >> 4))
       + 59
       + 16 * (a4 + 4 * (a5 + 2LL * (a1 < 0x100000)));
  else
    v5 = a4 + 4 * (a5 + 2 * ((a1 < 0x100000) + 2LL * a3)) + 27;
  return a2 + 16 * v5;
}

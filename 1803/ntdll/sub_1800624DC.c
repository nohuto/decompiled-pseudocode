/*
 * XREFs of sub_1800624DC @ 0x1800624DC
 * Callers:
 *     sub_18005DDCC @ 0x18005DDCC (sub_18005DDCC.c)
 *     sub_18005F8D0 @ 0x18005F8D0 (sub_18005F8D0.c)
 *     sub_1800623C8 @ 0x1800623C8 (sub_1800623C8.c)
 *     sub_180062960 @ 0x180062960 (sub_180062960.c)
 *     sub_1800631EC @ 0x1800631EC (sub_1800631EC.c)
 *     sub_180081CA0 @ 0x180081CA0 (sub_180081CA0.c)
 *     sub_180105468 @ 0x180105468 (sub_180105468.c)
 *     sub_1801055C8 @ 0x1801055C8 (sub_1801055C8.c)
 * Callees:
 *     sub_180062598 @ 0x180062598 (sub_180062598.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     sub_180102438 @ 0x180102438 (sub_180102438.c)
 */

__int64 __fastcall sub_1800624DC(unsigned __int64 *a1, unsigned __int64 *a2, int a3, _OWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx

  v4 = 0;
  v5 = a3 & 0xFEFFFFFF;
  if ( (a3 & 0xFEFFFFFF) != 0x8000 || (a3 & 0x1000000) != 0 )
  {
    if ( BYTE1(*a4) < 2u )
      v4 = ZwFreeVirtualMemory(-1LL, a1, a2, (unsigned __int16)a3 & 0xC000);
  }
  else
  {
    v9 = *a1;
    v10 = v9 + *a2;
    v11 = (v9 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v12 = v10 - v11;
    *a1 = v11;
    *a2 = v12;
    if ( !v12 )
      return v4;
    sub_180062598(&unk_18015D880, a1, a2);
  }
  if ( (byte_18015D028 & 8) != 0 )
    sub_180102438(v5, *a2, *a1, v4);
  return v4;
}

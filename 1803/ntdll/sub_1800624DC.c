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

__int64 __fastcall sub_1800624DC(PVOID *BaseAddress, PSIZE_T RegionSize, int a3, _OWORD *a4)
{
  unsigned __int32 v4; // ebx
  unsigned int v5; // ebp
  PVOID v9; // rcx
  ULONG_PTR v10; // rdx
  void *v11; // rcx
  ULONG_PTR v12; // rdx

  v4 = 0;
  v5 = a3 & 0xFEFFFFFF;
  if ( (a3 & 0xFEFFFFFF) != 0x8000 || (a3 & 0x1000000) != 0 )
  {
    if ( BYTE1(*a4) < 2u )
      v4 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, RegionSize, a3 & 0xC000);
  }
  else
  {
    v9 = *BaseAddress;
    v10 = (ULONG_PTR)v9 + *RegionSize;
    v11 = (void *)(((unsigned __int64)v9 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v12 = v10 - (_QWORD)v11;
    *BaseAddress = v11;
    *RegionSize = v12;
    if ( !v12 )
      return v4;
    sub_180062598(&unk_18015D880, BaseAddress, RegionSize);
  }
  if ( (byte_18015D028 & 8) != 0 )
    sub_180102438(v5, *RegionSize, *BaseAddress, v4);
  return v4;
}

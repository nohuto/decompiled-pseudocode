/*
 * XREFs of MiCreateLargePfnBitMaps @ 0x1405BA7C0
 * Callers:
 *     MiCreatePartition @ 0x1406BC9B0 (MiCreatePartition.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 *     MiSplitLargePfnBitMap @ 0x1405BA8F4 (MiSplitLargePfnBitMap.c)
 *     MiDeleteLargePfnBitMap @ 0x1406BFB38 (MiDeleteLargePfnBitMap.c)
 */

__int64 __fastcall MiCreateLargePfnBitMaps(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  __int64 *v3; // r14
  unsigned __int64 v4; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // ebp
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  ULONG_PTR v11; // rax
  _QWORD *v12; // r12
  int v13; // ebx
  __int64 v15; // [rsp+60h] [rbp+18h]

  v3 = MiLargePageSizes;
  v4 = qword_14036C290 + 1;
  v5 = (_QWORD *)(a1 + 4808);
  v15 = qword_14036C290 + 1;
  v6 = 0;
  do
  {
    v9 = v4 / *v3 + (v4 % *v3 != 0);
    v10 = (((unsigned __int64)(v9 + 7) >> 3) + 4095) >> 12;
    v11 = MiReservePtes((__int64)&qword_14036D0A0, (unsigned int)v10, a3);
    v12 = (_QWORD *)v11;
    if ( !v11 )
      goto LABEL_12;
    if ( !(unsigned int)MiInitializeDynamicBitmap(v5, (__int64)(v11 << 25) >> 16, v9, 8) )
    {
      MiReleasePtes((__int64)&qword_14036D0A0, v12, v10);
LABEL_12:
      MiDeleteLargePfnBitMap(a1);
      return 0LL;
    }
    *v5 = 0LL;
    ++v6;
    v4 = v15;
    v5 += 2;
    ++v3;
  }
  while ( v6 < 2 );
  if ( !a2 || (v13 = 0, !*a2) )
  {
LABEL_9:
    *(_BYTE *)(a1 + 4550) = 1;
    return 1LL;
  }
  while ( (unsigned int)MiSplitLargePfnBitMap(a1, *(_QWORD *)&a2[4 * v13 + 4], *(_QWORD *)&a2[4 * v13 + 6]) )
  {
    if ( (unsigned int)++v13 >= *a2 )
      goto LABEL_9;
  }
  return 0LL;
}

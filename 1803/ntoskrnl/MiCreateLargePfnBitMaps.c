/*
 * XREFs of MiCreateLargePfnBitMaps @ 0x14064A598
 * Callers:
 *     MmCreatePartition @ 0x140184450 (MmCreatePartition.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 *     MiSplitLargePfnBitMap @ 0x14064A6CC (MiSplitLargePfnBitMap.c)
 *     MiDeleteLargePfnBitMap @ 0x140756B40 (MiDeleteLargePfnBitMap.c)
 */

__int64 __fastcall MiCreateLargePfnBitMaps(__int64 a1, _DWORD *a2)
{
  __int64 *v2; // r14
  unsigned __int64 v3; // rax
  _QWORD *v4; // rbx
  unsigned int v5; // ebp
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // r12
  int v12; // ebx
  __int64 v14; // [rsp+60h] [rbp+18h]

  v2 = MiLargePageSizes;
  v3 = qword_1403CB780 + 1;
  v4 = (_QWORD *)(a1 + 5000);
  v14 = qword_1403CB780 + 1;
  v5 = 0;
  do
  {
    v8 = v3 / *v2 + (v3 % *v2 != 0);
    v9 = (((unsigned __int64)(v8 + 7) >> 3) + 4095) >> 12;
    v10 = MiReservePtes((__int64)&qword_1403CC5E0, v9);
    v11 = v10;
    if ( !v10 )
      goto LABEL_12;
    if ( !(unsigned int)MiInitializeDynamicBitmap(v4, (__int64)(v10 << 25) >> 16, v8, 4) )
    {
      MiReleasePtes((__int64)&qword_1403CC5E0, v11, (unsigned int)v9);
LABEL_12:
      MiDeleteLargePfnBitMap(a1);
      return 0LL;
    }
    *v4 = 0LL;
    ++v5;
    v3 = v14;
    v4 += 2;
    ++v2;
  }
  while ( v5 < 2 );
  if ( !a2 || (v12 = 0, !*a2) )
  {
LABEL_9:
    *(_BYTE *)(a1 + 4766) = 1;
    return 1LL;
  }
  while ( (unsigned int)MiSplitLargePfnBitMap(a1, *(_QWORD *)&a2[4 * v12 + 4], *(_QWORD *)&a2[4 * v12 + 6]) )
  {
    if ( (unsigned int)++v12 >= *a2 )
      goto LABEL_9;
  }
  return 0LL;
}

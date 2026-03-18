/*
 * XREFs of MiCreateLargePfnBitMaps @ 0x1405B4DC8
 * Callers:
 *     MmCreatePartition @ 0x140158808 (MmCreatePartition.c)
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiSplitLargePfnBitMap @ 0x1405B4EFC (MiSplitLargePfnBitMap.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 *     MiDeleteLargePfnBitMap @ 0x1406ED6C0 (MiDeleteLargePfnBitMap.c)
 */

__int64 __fastcall MiCreateLargePfnBitMaps(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 *v3; // r14
  unsigned __int64 v4; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // ebp
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  ULONG_PTR v11; // rax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r9
  int v14; // ebx
  __int64 v16; // [rsp+60h] [rbp+18h]

  v3 = MiLargePageSizes;
  v4 = qword_1403885E0 + 1;
  v5 = (_QWORD *)(a1 + 4936);
  v16 = qword_1403885E0 + 1;
  v6 = 0;
  do
  {
    v9 = v4 / *v3 + (v4 % *v3 != 0);
    v10 = (((v9 + 7) >> 3) + 4095) >> 12;
    v11 = MiReservePtes((__int64)&qword_140389360, (unsigned int)v10, a3);
    v12 = v11;
    if ( !v11 )
      goto LABEL_12;
    if ( !(unsigned int)MiInitializeDynamicBitmap(v5, (__int64)(v11 << 25) >> 16, v9, 8LL) )
    {
      MiReleasePtes((__int64)&qword_140389360, v12, v10, v13);
LABEL_12:
      MiDeleteLargePfnBitMap(a1);
      return 0LL;
    }
    *v5 = 0LL;
    ++v6;
    v4 = v16;
    v5 += 2;
    ++v3;
  }
  while ( v6 < 2 );
  if ( !a2 || (v14 = 0, !*a2) )
  {
LABEL_9:
    *(_BYTE *)(a1 + 4678) = 1;
    return 1LL;
  }
  while ( (unsigned int)MiSplitLargePfnBitMap(a1, *(_QWORD *)&a2[4 * v14 + 4], *(_QWORD *)&a2[4 * v14 + 6]) )
  {
    if ( (unsigned int)++v14 >= *a2 )
      goto LABEL_9;
  }
  return 0LL;
}

/*
 * XREFs of HvpCopyModifiedData @ 0x1406F839C
 * Callers:
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x1406F82E8 (HvpApplyLogEntryDataToFileBackedHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1404E4320 (HvpGetCellMap.c)
 */

void __fastcall HvpCopyModifiedData(ULONG_PTR a1, int a2, __int64 a3, unsigned int a4)
{
  ULONG_PTR v6; // r8
  unsigned int i; // r10d
  _QWORD *CellMap; // rax
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  __int128 *v12; // rdx
  _OWORD *v13; // rcx
  __int64 v14; // rax
  __int128 v15; // xmm0

  if ( a4 )
  {
    v6 = a1;
    for ( i = 0; i < a4; i = v10 + 4096 )
    {
      CellMap = (_QWORD *)HvpGetCellMap(v6, i + a2);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, v6, v11, 0xC21uLL);
      v12 = (__int128 *)(a3 + v10);
      v13 = (_OWORD *)(*CellMap + (CellMap[1] & 0xFFFFFFFFFFFFFFF0uLL));
      v14 = 32LL;
      do
      {
        v15 = *v12;
        v12 += 8;
        *v13 = v15;
        v13 += 8;
        *(v13 - 7) = *(v12 - 7);
        *(v13 - 6) = *(v12 - 6);
        *(v13 - 5) = *(v12 - 5);
        *(v13 - 4) = *(v12 - 4);
        *(v13 - 3) = *(v12 - 3);
        *(v13 - 2) = *(v12 - 2);
        *(v13 - 1) = *(v12 - 1);
        --v14;
      }
      while ( v14 );
    }
  }
}

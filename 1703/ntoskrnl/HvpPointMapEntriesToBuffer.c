/*
 * XREFs of HvpPointMapEntriesToBuffer @ 0x140515304
 * Callers:
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401E00E8 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401E1AC0 (HvpMapHiveImageFromSystemCache.c)
 *     HvpAddBin @ 0x14043A920 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14048D724 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistBinInMap @ 0x14048D860 (HvpEnlistBinInMap.c)
 *     HvpMapHiveImage @ 0x14048DA2C (HvpMapHiveImage.c)
 *     HvpDropPagedBins @ 0x1405BCFDC (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140678468 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x1406785FC (HvpAddLoadedBinToHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 */

void __fastcall HvpPointMapEntriesToBuffer(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  unsigned int i; // r10d
  __int64 CellMap; // rax
  unsigned int v12; // r10d
  unsigned int v13; // r11d

  if ( a4 )
  {
    for ( i = 0; i < a4; i = v12 + 4096 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, i + a5);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v13, 0x204uLL);
      *(_QWORD *)(CellMap + 8) = a2;
      *(_QWORD *)(CellMap + 16) = a3;
      if ( v12 )
      {
        *(_DWORD *)(CellMap + 32) = 0;
      }
      else
      {
        *(_DWORD *)(CellMap + 32) = a4;
        *(_QWORD *)(CellMap + 8) = a2 | 1;
      }
      if ( a6 )
      {
        *(_QWORD *)(CellMap + 8) |= 2uLL;
        *(_QWORD *)CellMap = a6;
      }
      else
      {
        *(_QWORD *)CellMap = v12;
      }
      _InterlockedExchange64((volatile __int64 *)(CellMap + 24), a3 == 0);
    }
  }
}

/*
 * XREFs of HvpPointMapEntriesToBuffer @ 0x14047D3E0
 * Callers:
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401E4228 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401E5BC4 (HvpMapHiveImageFromSystemCache.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14047C538 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistBinInMap @ 0x14047C674 (HvpEnlistBinInMap.c)
 *     HvpMapHiveImage @ 0x14047C83C (HvpMapHiveImage.c)
 *     HvpAddBin @ 0x1404E4EF8 (HvpAddBin.c)
 *     HvpDropPagedBins @ 0x1405BEF08 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x1406A29E0 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x1406A2B74 (HvpAddLoadedBinToHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
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

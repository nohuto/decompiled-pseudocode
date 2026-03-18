/*
 * XREFs of RtlClearBits @ 0x14008CF40
 * Callers:
 *     MiStoreEvictPageFile @ 0x1400320B4 (MiStoreEvictPageFile.c)
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 *     MiClearNonPagedBitMapBits @ 0x14006BEE0 (MiClearNonPagedBitMapBits.c)
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 *     MiAttemptPageFileReductionApc @ 0x1402196E0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x140219F78 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x14023CFF0 (RtlFindSetBitsAndClear.c)
 *     PopMirrorPhysicalMemory @ 0x14040CCD0 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x1404178F8 (PnprMarkOrMirrorPages.c)
 *     HvpAddBin @ 0x14043A920 (HvpAddBin.c)
 *     HvpAdjustBitmap @ 0x14043B030 (HvpAdjustBitmap.c)
 *     SepGetLowBoxNumberEntry @ 0x140462158 (SepGetLowBoxNumberEntry.c)
 *     PspQueryRateControlHistory @ 0x140479030 (PspQueryRateControlHistory.c)
 *     HvpRemoveFreeCellHint @ 0x14048CBE0 (HvpRemoveFreeCellHint.c)
 *     MiObtainRelocationBits @ 0x140495FBC (MiObtainRelocationBits.c)
 *     HvFreeHivePartial @ 0x1404B7EDC (HvFreeHivePartial.c)
 *     CmpCheckValueList @ 0x140504990 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140505100 (CmpCheckKey.c)
 *     MiReturnImageBase @ 0x140513EE8 (MiReturnImageBase.c)
 *     MiCopyToCfgBitMap @ 0x1405145B0 (MiCopyToCfgBitMap.c)
 *     HvIsCellAllocated @ 0x1405153D0 (HvIsCellAllocated.c)
 *     MiReleaseDriverPtes @ 0x140583170 (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x1405BA1B8 (MiCreatePagefile.c)
 *     HvpRecoverData @ 0x1406774D4 (HvpRecoverData.c)
 *     MiCreateSessionDriverProtos @ 0x1406BF840 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x140704A74 (SmcStorePlacementGet.c)
 *     ViFreeToContiguousMemory @ 0x14076C16C (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x14081142C (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x140812DC8 (MiAssignSessionRanges.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

void __stdcall RtlClearBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToClear )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToClear;
    if ( (unsigned int)v4 + NumberToClear <= 8 )
    {
      v7 = ~(byte_14029EB30[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_14029EB30[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_14029EB40[v6];
      goto LABEL_4;
    }
  }
}

/*
 * XREFs of RtlClearBits @ 0x140072BD0
 * Callers:
 *     MiClearVadCellBits @ 0x1400723F0 (MiClearVadCellBits.c)
 *     MiStoreEvictPageFile @ 0x140072CD4 (MiStoreEvictPageFile.c)
 *     HvpGrowDirtyVectors @ 0x1400BD380 (HvpGrowDirtyVectors.c)
 *     MiStoreWriteModifiedPages @ 0x1400D6708 (MiStoreWriteModifiedPages.c)
 *     MiClearNonPagedBitMapBits @ 0x140160DA4 (MiClearNonPagedBitMapBits.c)
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 *     MiAttemptPageFileReductionApc @ 0x14025EDD0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x14025F6C4 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x1402882F0 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x140288E00 (RtlShiftLeftBitMap.c)
 *     PopMirrorPhysicalMemory @ 0x140477020 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x1404834A8 (PnprMarkOrMirrorPages.c)
 *     HvFreeHivePartial @ 0x14049A144 (HvFreeHivePartial.c)
 *     MiCopyToCfgBitMap @ 0x1404B4120 (MiCopyToCfgBitMap.c)
 *     MiObtainRelocationBits @ 0x1404F1C44 (MiObtainRelocationBits.c)
 *     HvpAdjustBitmap @ 0x140514C78 (HvpAdjustBitmap.c)
 *     HvpRemoveFreeCellHint @ 0x140515BD0 (HvpRemoveFreeCellHint.c)
 *     HvIsCellAllocated @ 0x140516230 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1405163C0 (CmpCheckValueList.c)
 *     PspQueryRateControlHistory @ 0x14053716C (PspQueryRateControlHistory.c)
 *     SepGetLowBoxNumberEntry @ 0x14053F858 (SepGetLowBoxNumberEntry.c)
 *     MiReturnImageBase @ 0x1405937FC (MiReturnImageBase.c)
 *     CmpCheckKey @ 0x14059FAB0 (CmpCheckKey.c)
 *     MiReleaseDriverPtes @ 0x1405F6694 (MiReleaseDriverPtes.c)
 *     MiCreatePagefile @ 0x14063C9BC (MiCreatePagefile.c)
 *     MiCreateSessionDriverProtos @ 0x140756740 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x14079FD84 (SmcStorePlacementGet.c)
 *     ViFreeToContiguousMemory @ 0x14081AFA4 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x1408BB7D8 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x1408C2E40 (MiAssignSessionRanges.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
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
      v7 = ~(byte_1402FEA38[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_1402FEA38[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_1402FEA48[v6];
      goto LABEL_4;
    }
  }
}

/*
 * XREFs of RtlClearBits @ 0x140080ED0
 * Callers:
 *     MiClearNonPagedBitMapBits @ 0x140129BC4 (MiClearNonPagedBitMapBits.c)
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 *     MiStoreEvictThread @ 0x1401DF9C0 (MiStoreEvictThread.c)
 *     MiAttemptPageFileReductionApc @ 0x140224310 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402257E0 (MiFinishPageFileExtension.c)
 *     MiStoreWriteModifiedPages @ 0x14022CE80 (MiStoreWriteModifiedPages.c)
 *     RtlFindSetBitsAndClear @ 0x140252A30 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x140253790 (RtlShiftLeftBitMap.c)
 *     PnprMarkOrMirrorPages @ 0x14042C918 (PnprMarkOrMirrorPages.c)
 *     PopMirrorPhysicalMemory @ 0x140433FB0 (PopMirrorPhysicalMemory.c)
 *     HvpRemoveFreeCellHint @ 0x14047A0F0 (HvpRemoveFreeCellHint.c)
 *     HvIsCellAllocated @ 0x14047D4B0 (HvIsCellAllocated.c)
 *     MiReturnImageBase @ 0x140499C04 (MiReturnImageBase.c)
 *     CmpCheckValueList @ 0x1404A9D70 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x1404AA8A0 (CmpCheckKey.c)
 *     MiCopyToCfgBitMap @ 0x1404D3670 (MiCopyToCfgBitMap.c)
 *     HvpAddBin @ 0x1404E4EF8 (HvpAddBin.c)
 *     HvpAdjustBitmap @ 0x1404E576C (HvpAdjustBitmap.c)
 *     MiObtainRelocationBits @ 0x14050475C (MiObtainRelocationBits.c)
 *     PspQueryRateControlHistory @ 0x14051041C (PspQueryRateControlHistory.c)
 *     MiReleaseDriverPtes @ 0x1405413F0 (MiReleaseDriverPtes.c)
 *     SepGetLowBoxNumberEntry @ 0x14056403C (SepGetLowBoxNumberEntry.c)
 *     HvFreeHivePartial @ 0x140565630 (HvFreeHivePartial.c)
 *     MiCreatePagefile @ 0x1405D4B4C (MiCreatePagefile.c)
 *     HvpRecoverData @ 0x1406A1A10 (HvpRecoverData.c)
 *     MiCreateSessionDriverProtos @ 0x1406ED2F8 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x14073CD78 (SmcStorePlacementGet.c)
 *     ViFreeToContiguousMemory @ 0x1407ADE38 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140839F54 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x1408522C4 (MiAssignSessionRanges.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
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
      v7 = ~(byte_1402C7730[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_1402C7730[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_1402C7740[v6];
      goto LABEL_4;
    }
  }
}

/*
 * XREFs of MiDereferenceControlAreaFile @ 0x14005BC04
 * Callers:
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiMakeSystemCachePteValid @ 0x140048C70 (MiMakeSystemCachePteValid.c)
 *     MiDeprioritizeVad @ 0x1400A23D8 (MiDeprioritizeVad.c)
 *     MmFlushSection @ 0x1400E1380 (MmFlushSection.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MmCreateSystemSection @ 0x140161354 (MmCreateSystemSection.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MiAllowImageMap @ 0x1404B5C48 (MiAllowImageMap.c)
 *     MiMapImageInSystemSpace @ 0x1404BD390 (MiMapImageInSystemSpace.c)
 *     MmExtendSection @ 0x1404BDFD0 (MmExtendSection.c)
 *     NtCreateSection @ 0x1404C1930 (NtCreateSection.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1404D72FC (MiUnmapVad.c)
 *     MmCreateSpecialImageSection @ 0x1404F0B68 (MmCreateSpecialImageSection.c)
 *     MiParseComImage @ 0x14053B9A0 (MiParseComImage.c)
 *     MiLogRelocationFaults @ 0x14053CFAC (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x14053D084 (MiParseImageLoadConfig.c)
 *     MmFlushVirtualMemory @ 0x140568184 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1405F1D00 (NtAreMappedFilesTheSame.c)
 *     MiDriverLoadSucceeded @ 0x1405FA544 (MiDriverLoadSucceeded.c)
 *     MiLoadUserSymbols @ 0x140652AFC (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x1407498A8 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x140749CA4 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x14074F26C (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x14074F3E8 (MmSectionToSectionObjectPointers.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140752530 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 */

void __fastcall MiDereferenceControlAreaFile(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  if ( (a2 ^ v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDelete((PVOID)a2);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}

/*
 * XREFs of MiDereferenceControlAreaFile @ 0x140096AD0
 * Callers:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiMakeSystemCachePteValid @ 0x140026388 (MiMakeSystemCachePteValid.c)
 *     MiDeprioritizeVad @ 0x140033E78 (MiDeprioritizeVad.c)
 *     MmCreateSystemSection @ 0x140034178 (MmCreateSystemSection.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140098844 (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x140210F54 (MiSetPagesModified.c)
 *     MiAllowImageMap @ 0x1404415B0 (MiAllowImageMap.c)
 *     MiUnmapViewOfSection @ 0x14047B340 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14047B5C0 (MiUnmapVad.c)
 *     MmExtendSection @ 0x140492D14 (MmExtendSection.c)
 *     MiParseComImage @ 0x140494F54 (MiParseComImage.c)
 *     MiLogRelocationFaults @ 0x140496184 (MiLogRelocationFaults.c)
 *     MiMapImageInSystemSpace @ 0x140497368 (MiMapImageInSystemSpace.c)
 *     MiParseImageLoadConfig @ 0x140497854 (MiParseImageLoadConfig.c)
 *     MiDriverLoadSucceeded @ 0x1404B317C (MiDriverLoadSucceeded.c)
 *     MmFlushVirtualMemory @ 0x1404C6968 (MmFlushVirtualMemory.c)
 *     NtCreateSection @ 0x14050FCB0 (NtCreateSection.c)
 *     MmCreateSpecialImageSection @ 0x140546050 (MmCreateSpecialImageSection.c)
 *     NtAreMappedFilesTheSame @ 0x1405833D4 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x1405D4CB0 (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x1406B2C70 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x1406B2E54 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1406B6DDC (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1406B81CC (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1406B833C (MmSectionToSectionObjectPointers.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
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

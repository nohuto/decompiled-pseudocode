/*
 * XREFs of MiDereferenceControlAreaFile @ 0x140067894
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x14001E6D4 (MiMakeSystemCachePteValid.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MmFlushSection @ 0x1400A49CC (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MmCreateSystemSection @ 0x1400F9864 (MmCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x14012E200 (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x140218768 (MiSetPagesModified.c)
 *     MiUnmapVad @ 0x140499B30 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x140499D10 (MiUnmapViewOfSection.c)
 *     NtCreateSection @ 0x14049C090 (NtCreateSection.c)
 *     MiAllowImageMap @ 0x1404D21DC (MiAllowImageMap.c)
 *     MmFlushVirtualMemory @ 0x1404E70DC (MmFlushVirtualMemory.c)
 *     MiParseImageLoadConfig @ 0x1404F6FD8 (MiParseImageLoadConfig.c)
 *     MiMapImageInSystemSpace @ 0x1404F7424 (MiMapImageInSystemSpace.c)
 *     MiLogRelocationFaults @ 0x1404F7B1C (MiLogRelocationFaults.c)
 *     MiParseComImage @ 0x1404FB3CC (MiParseComImage.c)
 *     MmCreateSpecialImageSection @ 0x14053A36C (MmCreateSpecialImageSection.c)
 *     MiDriverLoadSucceeded @ 0x140543B6C (MiDriverLoadSucceeded.c)
 *     MmExtendSection @ 0x14056BA18 (MmExtendSection.c)
 *     NtAreMappedFilesTheSame @ 0x1405DF264 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x1405EF47C (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x1406DEA24 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x1406DEE20 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1406E4E4C (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1406E4FBC (MmSectionToSectionObjectPointers.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1406E8AAC (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
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

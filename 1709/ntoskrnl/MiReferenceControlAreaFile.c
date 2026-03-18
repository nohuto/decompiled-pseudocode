/*
 * XREFs of MiReferenceControlAreaFile @ 0x1400679F0
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x14001E6D4 (MiMakeSystemCachePteValid.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiReferenceInPageFile @ 0x1400678E4 (MiReferenceInPageFile.c)
 *     MmFlushSection @ 0x1400A49CC (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 *     MmCreateSystemSection @ 0x1400F9864 (MmCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x14012E200 (MiDeprioritizeVad.c)
 *     MiSetPagesModified @ 0x140218768 (MiSetPagesModified.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140452B80 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 *     MiUnmapVad @ 0x140499B30 (MiUnmapVad.c)
 *     MiUnmapViewOfSection @ 0x140499D10 (MiUnmapViewOfSection.c)
 *     NtCreateSection @ 0x14049C090 (NtCreateSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x1404D21DC (MiAllowImageMap.c)
 *     MmFlushVirtualMemory @ 0x1404E70DC (MmFlushVirtualMemory.c)
 *     MiParseImageLoadConfig @ 0x1404F6FD8 (MiParseImageLoadConfig.c)
 *     MiMapImageInSystemSpace @ 0x1404F7424 (MiMapImageInSystemSpace.c)
 *     MiLogRelocationFaults @ 0x1404F7B1C (MiLogRelocationFaults.c)
 *     MmGetFileObjectForSection @ 0x1404FA1C0 (MmGetFileObjectForSection.c)
 *     MiParseComImage @ 0x1404FB3CC (MiParseComImage.c)
 *     MmCreateSpecialImageSection @ 0x14053A36C (MmCreateSpecialImageSection.c)
 *     DbgkCreateThread @ 0x14053F718 (DbgkCreateThread.c)
 *     MiDriverLoadSucceeded @ 0x140543B6C (MiDriverLoadSucceeded.c)
 *     MmExtendSection @ 0x14056BA18 (MmExtendSection.c)
 *     PsReferenceProcessFilePointer @ 0x1405770C0 (PsReferenceProcessFilePointer.c)
 *     PspInitializeFullProcessImageName @ 0x14057B454 (PspInitializeFullProcessImageName.c)
 *     NtAreMappedFilesTheSame @ 0x1405DF264 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x1405EF47C (MiLoadUserSymbols.c)
 *     MmGetFileNameForAddress @ 0x1406DE914 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1406DEA24 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x1406DEE20 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1406E3904 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1406E4E4C (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1406E4FBC (MmSectionToSectionObjectPointers.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1406E8AAC (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140067BA8 (ObpTraceObjectDereferenceIfActive.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ObReferenceObjectExWithTag @ 0x14008AAD0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReferenceControlAreaFile(__int64 a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  ULONG_PTR v4; // rbx
  unsigned int v5; // r8d
  unsigned __int64 v7; // rdi
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  signed __int64 BugCheckParameter4; // rax

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = v2 & 0xF;
  if ( v5 <= 1 )
  {
    if ( !v5 )
      goto LABEL_7;
    ObReferenceObjectExWithTag(v4, 15LL);
    _m_prefetchw((const void *)(a1 + 64));
    v8 = *(_QWORD *)(a1 + 64);
    while ( (v8 & 0xF) == 0 )
    {
      if ( v4 != (v8 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v9 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v8 + 15, v8);
      if ( v9 == v8 )
        goto LABEL_4;
    }
    ObpTraceObjectDereferenceIfActive(v4 - 48, 15LL, 1953261124LL);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 48), 0xFFFFFFFFFFFFFFF1uLL) - 15;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v4, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v4 - 48);
    }
  }
LABEL_4:
  if ( !v4 )
  {
LABEL_7:
    v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
    v4 = ObFastReferenceObjectLocked(a1 + 64);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v7);
  }
  return v4;
}

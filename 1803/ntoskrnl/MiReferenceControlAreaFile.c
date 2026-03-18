/*
 * XREFs of MiReferenceControlAreaFile @ 0x14005BAC0
 * Callers:
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiMakeSystemCachePteValid @ 0x140048C70 (MiMakeSystemCachePteValid.c)
 *     MiReferenceInPageFile @ 0x14005A494 (MiReferenceInPageFile.c)
 *     MiDeprioritizeVad @ 0x1400A23D8 (MiDeprioritizeVad.c)
 *     MmFlushSection @ 0x1400E1380 (MmFlushSection.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x140134890 (MiWriteComplete.c)
 *     MmCreateSystemSection @ 0x140161354 (MmCreateSystemSection.c)
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x1404B5C48 (MiAllowImageMap.c)
 *     DbgkCreateThread @ 0x1404B87D4 (DbgkCreateThread.c)
 *     MiMapImageInSystemSpace @ 0x1404BD390 (MiMapImageInSystemSpace.c)
 *     MmExtendSection @ 0x1404BDFD0 (MmExtendSection.c)
 *     MmGetFileObjectForSection @ 0x1404BF1C0 (MmGetFileObjectForSection.c)
 *     NtCreateSection @ 0x1404C1930 (NtCreateSection.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1404D72FC (MiUnmapVad.c)
 *     PspInitializeFullProcessImageName @ 0x1404EA924 (PspInitializeFullProcessImageName.c)
 *     MmCreateSpecialImageSection @ 0x1404F0B68 (MmCreateSpecialImageSection.c)
 *     MiParseComImage @ 0x14053B9A0 (MiParseComImage.c)
 *     MiLogRelocationFaults @ 0x14053CFAC (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x14053D084 (MiParseImageLoadConfig.c)
 *     PsReferenceProcessFilePointer @ 0x140562A40 (PsReferenceProcessFilePointer.c)
 *     MmFlushVirtualMemory @ 0x140568184 (MmFlushVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140595C30 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1405F1D00 (NtAreMappedFilesTheSame.c)
 *     MiDriverLoadSucceeded @ 0x1405FA544 (MiDriverLoadSucceeded.c)
 *     MiLoadUserSymbols @ 0x140652AFC (MiLoadUserSymbols.c)
 *     MmGetFileNameForAddress @ 0x140749798 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1407498A8 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x140749CA4 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x14074DC04 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x14074F26C (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x14074F3E8 (MmSectionToSectionObjectPointers.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140752530 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x14005BAA0 (ObpTraceObjectDereferenceIfActive.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     ObReferenceObjectExWithTag @ 0x1400EB030 (ObReferenceObjectExWithTag.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
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
    ObReferenceObjectExWithTag(v4);
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
    ObpTraceObjectDereferenceIfActive(v4 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 48), 0xFFFFFFFFFFFFFFF1uLL) - 15;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(v4 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v4 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v4 - 48) >> 8)],
          v4,
          6uLL,
          *(_QWORD *)(v4 - 40));
      if ( BugCheckParameter4 < 0 )
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

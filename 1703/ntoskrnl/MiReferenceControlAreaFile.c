/*
 * XREFs of MiReferenceControlAreaFile @ 0x140096B20
 * Callers:
 *     MiWriteComplete @ 0x140014A50 (MiWriteComplete.c)
 *     MiMakeSystemCachePteValid @ 0x140026388 (MiMakeSystemCachePteValid.c)
 *     MiDeprioritizeVad @ 0x140033E78 (MiDeprioritizeVad.c)
 *     MmCreateSystemSection @ 0x140034178 (MmCreateSystemSection.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140098844 (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiSetPagesModified @ 0x140210F54 (MiSetPagesModified.c)
 *     MiAllowImageMap @ 0x1404415B0 (MiAllowImageMap.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14047AEF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiUnmapViewOfSection @ 0x14047B340 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14047B5C0 (MiUnmapVad.c)
 *     MmExtendSection @ 0x140492D14 (MmExtendSection.c)
 *     MmGetFileObjectForSection @ 0x140493DF0 (MmGetFileObjectForSection.c)
 *     MiParseComImage @ 0x140494F54 (MiParseComImage.c)
 *     MiLogRelocationFaults @ 0x140496184 (MiLogRelocationFaults.c)
 *     MiMapImageInSystemSpace @ 0x140497368 (MiMapImageInSystemSpace.c)
 *     MiParseImageLoadConfig @ 0x140497854 (MiParseImageLoadConfig.c)
 *     PsReferenceProcessFilePointer @ 0x1404A1CC0 (PsReferenceProcessFilePointer.c)
 *     MiDriverLoadSucceeded @ 0x1404B317C (MiDriverLoadSucceeded.c)
 *     MmFlushVirtualMemory @ 0x1404C6968 (MmFlushVirtualMemory.c)
 *     DbgkCreateThread @ 0x1404F8500 (DbgkCreateThread.c)
 *     NtCreateSection @ 0x14050FCB0 (NtCreateSection.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 *     MmCreateSpecialImageSection @ 0x140546050 (MmCreateSpecialImageSection.c)
 *     NtAreMappedFilesTheSame @ 0x1405833D4 (NtAreMappedFilesTheSame.c)
 *     MiLoadUserSymbols @ 0x1405D4CB0 (MiLoadUserSymbols.c)
 *     MmGetFileNameForAddress @ 0x1406B2B60 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1406B2C70 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x1406B2E54 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1406B6DDC (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1406B81CC (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1406B833C (MmSectionToSectionObjectPointers.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     ObReferenceObjectExWithTag @ 0x1400445F0 (ObReferenceObjectExWithTag.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140049B60 (ObpTraceObjectDereferenceIfActive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiReferenceControlAreaFile(__int64 a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  unsigned __int64 v4; // rbx
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
    ObReferenceObjectExWithTag(v4, 15);
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
    v4 = ObFastReferenceObjectLocked((_QWORD *)(a1 + 64));
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v7);
  }
  return v4;
}

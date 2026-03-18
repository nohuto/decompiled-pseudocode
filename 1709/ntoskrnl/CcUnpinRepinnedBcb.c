/*
 * XREFs of CcUnpinRepinnedBcb @ 0x1401E0CF0
 * Callers:
 *     <none>
 * Callees:
 *     CcSetDirtyPinnedData @ 0x14001B660 (CcSetDirtyPinnedData.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14002034C (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140020390 (CcReferenceSharedCacheMapFileObject.c)
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     MmFlushSection @ 0x1400A49CC (MmFlushSection.c)
 *     CcIsFatalWriteError @ 0x140126240 (CcIsFatalWriteError.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1401E0A50 (CcPostDeferredWrites.c)
 *     CcPerfLogFlushSection @ 0x1401E28A4 (CcPerfLogFlushSection.c)
 */

void __stdcall CcUnpinRepinnedBcb(PVOID Bcb, BOOLEAN WriteThrough, PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rdi
  __int64 Partition; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r14

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x1F8FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = *((_QWORD *)Bcb + 22);
  Partition = CcGetPartition((_QWORD *)v6);
  IoStatus->Status = 0;
  v8 = Partition;
  if ( WriteThrough )
  {
    if ( (*(_DWORD *)(v6 + 152) & 0x200) != 0 )
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Bcb + 72), 1u);
    if ( *((_BYTE *)Bcb + 2) )
    {
      MmSetAddressRangeModifiedEx(*((_QWORD *)Bcb + 23), *((unsigned int *)Bcb + 1));
      CcUnpinFileDataEx((char *)Bcb, 1, 2);
      v9 = CcReferenceSharedCacheMapFileObject(v6);
      if ( (xmmword_140401150 & 0x20000) != 0 )
        CcPerfLogFlushSection(0, v6, (_DWORD)Bcb + 8, *((_DWORD *)Bcb + 1), 1);
      MmFlushSection(*(_QWORD *)(v9 + 40), (va_list)Bcb + 8, *((unsigned int *)Bcb + 1));
      CcDereferenceSharedCacheMapFileObject(v6, v9);
      if ( IoStatus->Status < 0 && !CcIsFatalWriteError(*((_QWORD *)Bcb + 22), IoStatus->Status) )
        CcSetDirtyPinnedData(Bcb, 0LL);
      CcUnpinFileDataEx((char *)Bcb, 0, 0);
      if ( *(_QWORD *)(v8 + 744) != v8 + 744 )
        CcPostDeferredWrites(v8);
    }
    else
    {
      CcUnpinFileDataEx((char *)Bcb, 0, 0);
    }
  }
  else
  {
    CcUnpinFileDataEx((char *)Bcb, 1, 0);
    IoStatus->Status = 0;
  }
}

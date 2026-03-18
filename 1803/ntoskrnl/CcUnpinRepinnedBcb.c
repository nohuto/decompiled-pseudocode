/*
 * XREFs of CcUnpinRepinnedBcb @ 0x1402203F0
 * Callers:
 *     <none>
 * Callees:
 *     CcIsFatalWriteError @ 0x1400C52EC (CcIsFatalWriteError.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400DB2B4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     MmFlushSection @ 0x1400E1380 (MmFlushSection.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1400E2C90 (CcSetDirtyPinnedData.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400EAAAC (CcReferenceSharedCacheMapFileObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     MmSetAddressRangeModifiedEx @ 0x140124A90 (MmSetAddressRangeModifiedEx.c)
 *     CcPerfLogFlushSection @ 0x14017CC58 (CcPerfLogFlushSection.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x140220050 (CcPostDeferredWrites.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall CcUnpinRepinnedBcb(PVOID Bcb, BOOLEAN WriteThrough, PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rdi
  __int64 Partition; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r15

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x1F7EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = *((_QWORD *)Bcb + 22);
  Partition = CcGetPartition((_QWORD *)v6, WriteThrough);
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
      if ( (xmmword_14044C2D0 & 0x20000) != 0 )
        CcPerfLogFlushSection(0LL, v6, (__int64 *)Bcb + 1, *((_DWORD *)Bcb + 1), 1);
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

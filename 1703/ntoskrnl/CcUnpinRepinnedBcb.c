/*
 * XREFs of CcUnpinRepinnedBcb @ 0x1401DDCA0
 * Callers:
 *     <none>
 * Callees:
 *     CcIsFatalWriteError @ 0x1400140C8 (CcIsFatalWriteError.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     MmFlushSection @ 0x140098844 (MmFlushSection.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     CcPerfLogFlushSection @ 0x140118638 (CcPerfLogFlushSection.c)
 *     CcSetDirtyPinnedData @ 0x140118BA0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14011AFC4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14011B004 (CcReferenceSharedCacheMapFileObject.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1401DDA60 (CcPostDeferredWrites.c)
 */

void __stdcall CcUnpinRepinnedBcb(PVOID Bcb, BOOLEAN WriteThrough, PIO_STATUS_BLOCK IoStatus)
{
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned __int64 v7; // r14

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x1F17uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = *((_QWORD *)Bcb + 22);
  v6 = *(_QWORD *)(v5 + 528);
  IoStatus->Status = 0;
  if ( WriteThrough )
  {
    if ( (*(_DWORD *)(v5 + 152) & 0x200) != 0 )
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Bcb + 72), 1u);
    if ( *((_BYTE *)Bcb + 2) )
    {
      MmSetAddressRangeModifiedEx(*((_QWORD *)Bcb + 23));
      CcUnpinFileDataEx((__int64)Bcb, 1, 2);
      v7 = CcReferenceSharedCacheMapFileObject(v5);
      if ( (xmmword_1403E4010 & 0x20000) != 0 )
        CcPerfLogFlushSection(0LL, v5, (__int64 *)Bcb + 1, *((_DWORD *)Bcb + 1), 1);
      MmFlushSection(*(_QWORD *)(v7 + 40), (va_list)Bcb + 8, *((unsigned int *)Bcb + 1));
      CcDereferenceSharedCacheMapFileObject(v5, v7);
      if ( IoStatus->Status < 0 && !CcIsFatalWriteError(*((_QWORD *)Bcb + 22), IoStatus->Status) )
        CcSetDirtyPinnedData(Bcb, 0LL);
      CcUnpinFileDataEx((__int64)Bcb, 0, 0);
      if ( *(_QWORD *)(v6 + 816) != v6 + 816 )
        CcPostDeferredWrites(v6);
    }
    else
    {
      CcUnpinFileDataEx((__int64)Bcb, 0, 0);
    }
  }
  else
  {
    CcUnpinFileDataEx((__int64)Bcb, 1, 0);
    IoStatus->Status = 0;
  }
}

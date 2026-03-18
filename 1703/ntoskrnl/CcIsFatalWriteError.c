/*
 * XREFs of CcIsFatalWriteError @ 0x1400140C8
 * Callers:
 *     CcNotifyOfMappedWriteComplete @ 0x140015578 (CcNotifyOfMappedWriteComplete.c)
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x1400AACD0 (CcWriteBehindInternal.c)
 *     CcUnpinRepinnedBcb @ 0x1401DDCA0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MmIsWriteErrorFatal @ 0x140015158 (MmIsWriteErrorFatal.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14011AFC4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14011B004 (CcReferenceSharedCacheMapFileObject.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

bool __fastcall CcIsFatalWriteError(__int64 a1, int a2)
{
  __int64 v5; // rax
  unsigned int v6; // ebx

  if ( a2 >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x132EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = CcReferenceSharedCacheMapFileObject();
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 52LL) & 0x10;
  CcDereferenceSharedCacheMapFileObject(a1, v5);
  return (unsigned int)MmIsWriteErrorFatal(1LL, v6, (unsigned int)a2) != 0;
}

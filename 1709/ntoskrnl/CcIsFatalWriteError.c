/*
 * XREFs of CcIsFatalWriteError @ 0x140126240
 * Callers:
 *     CcNotifyOfMappedWriteComplete @ 0x14000DA50 (CcNotifyOfMappedWriteComplete.c)
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x14008A070 (CcWriteBehindInternal.c)
 *     CcUnpinRepinnedBcb @ 0x1401E0CF0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x14002034C (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140020390 (CcReferenceSharedCacheMapFileObject.c)
 *     MmIsWriteErrorFatal @ 0x1400EFE94 (MmIsWriteErrorFatal.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

bool __fastcall CcIsFatalWriteError(__int64 a1, NTSTATUS a2)
{
  unsigned __int64 v5; // rax
  int v6; // ebx

  if ( a2 >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x14A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = CcReferenceSharedCacheMapFileObject(a1);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 52LL) & 0x10;
  CcDereferenceSharedCacheMapFileObject(a1, v5);
  return (unsigned int)MmIsWriteErrorFatal(1, v6, a2) != 0;
}

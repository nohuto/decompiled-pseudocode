/*
 * XREFs of CcSetParallelFlushFile @ 0x14012BED0
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall CcSetParallelFlushFile(PFILE_OBJECT FileObject, BOOLEAN EnableParallelFlush)
{
  _QWORD *SharedCacheMap; // rbx
  volatile signed __int64 *v4; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int64 *v9; // [rsp+28h] [rbp-20h]
  unsigned __int8 v10; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v4 = (volatile signed __int64 *)(SharedCacheMap[66] + 64LL);
  v9 = v4;
  v8 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v10 = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v8, v4);
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64(v4, (__int64)&v8);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)&v8, v6);
  }
  if ( EnableParallelFlush )
    *((_DWORD *)SharedCacheMap + 38) |= 0x40000u;
  else
    *((_DWORD *)SharedCacheMap + 38) &= ~0x40000u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v8, retaddr);
    goto LABEL_9;
  }
  _m_prefetchw(&v8);
  v7 = v8;
  if ( v8 )
    goto LABEL_11;
  if ( (__int64 *)_InterlockedCompareExchange64(v9, 0LL, (signed __int64)&v8) != &v8 )
  {
    v7 = KxWaitForLockChainValid(&v8);
LABEL_11:
    v8 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v7 + 8), 1uLL);
  }
LABEL_9:
  __writecr8(v10);
}

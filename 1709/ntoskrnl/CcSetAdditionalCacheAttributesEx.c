/*
 * XREFs of CcSetAdditionalCacheAttributesEx @ 0x140115AF0
 * Callers:
 *     <none>
 * Callees:
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcSetAdditionalCacheAttributes @ 0x140115BF0 (CcSetAdditionalCacheAttributes.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall CcSetAdditionalCacheAttributesEx(struct _FILE_OBJECT *a1, char a2)
{
  _DWORD *SharedCacheMap; // rbx
  int v4; // edx
  __int64 Partition; // rax
  int v6; // eax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  SharedCacheMap = a1->SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0xC6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = a2 & 2;
  if ( (SharedCacheMap[38] & 0x2000) == 0 )
    CcSetAdditionalCacheAttributes(a1, v4 != 0, (a2 & 4) != 0);
  Partition = CcGetPartition(SharedCacheMap);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  if ( (a2 & 1) != 0 )
    SharedCacheMap[38] |= 0x800000u;
  else
    SharedCacheMap[38] &= ~0x800000u;
  if ( (a2 & 8) != 0 )
  {
    SharedCacheMap[38] |= 0x4000000u;
  }
  else
  {
    v6 = SharedCacheMap[38];
    if ( (v6 & 0x4000000) != 0 )
      SharedCacheMap[38] = v6 | 0x20000;
    SharedCacheMap[38] &= ~0x4000000u;
  }
  if ( (a2 & 0x10) != 0 )
    SharedCacheMap[38] |= 0x10000000u;
  else
    SharedCacheMap[38] &= ~0x10000000u;
  if ( (a2 & 0x20) != 0 )
    SharedCacheMap[38] |= 0x8000000u;
  else
    SharedCacheMap[38] &= ~0x8000000u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}

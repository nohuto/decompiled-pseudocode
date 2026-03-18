/*
 * XREFs of CcSetAdditionalCacheAttributesEx @ 0x1400AAB30
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcSetAdditionalCacheAttributes @ 0x1400AAC30 (CcSetAdditionalCacheAttributes.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall CcSetAdditionalCacheAttributesEx(struct _FILE_OBJECT *a1, char a2)
{
  _DWORD *SharedCacheMap; // rbx
  __int64 v4; // rsi
  BOOLEAN v5; // dl
  int v6; // eax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  SharedCacheMap = a1->SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0xB0uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = *((_QWORD *)SharedCacheMap + 66);
  v5 = (a2 & 2) != 0;
  if ( (SharedCacheMap[38] & 0x2000) == 0 )
    CcSetAdditionalCacheAttributes(a1, v5, (a2 & 4) != 0);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 64), &LockHandle);
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

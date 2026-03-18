/*
 * XREFs of CcSetAdditionalCacheAttributesEx @ 0x1400E07F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcSetAdditionalCacheAttributes @ 0x1400DC480 (CcSetAdditionalCacheAttributes.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcSetAdditionalCacheAttributesEx(struct _FILE_OBJECT *a1, int a2)
{
  _DWORD *SharedCacheMap; // rbx
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // al
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  SharedCacheMap = a1->SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0xC6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = a2 & 2;
  if ( (SharedCacheMap[38] & 0x2000) == 0 )
    CcSetAdditionalCacheAttributes(a1, (_DWORD)v4 != 0, (a2 & 4) != 0);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(CcGetPartition(SharedCacheMap, v4) + 128);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
  v6 = SharedCacheMap[38] & 0xFF7FFFFF;
  if ( (a2 & 1) != 0 )
    v6 = SharedCacheMap[38] | 0x800000;
  SharedCacheMap[38] = v6;
  if ( (a2 & 8) != 0 )
  {
    v7 = v6 | 0x4000000;
  }
  else
  {
    if ( (v6 & 0x4000000) != 0 )
    {
      v6 |= 0x20000u;
      SharedCacheMap[38] = v6;
    }
    v7 = v6 & 0xFBFFFFFF;
  }
  v8 = v7;
  v9 = v7 & 0xEFFFFFFF;
  v10 = v8 | 0x10000000;
  if ( (a2 & 0x10) != 0 )
    v9 = v10;
  v11 = v9;
  v12 = v9 & 0xF7FFFFFF;
  v13 = v11 | 0x8000000;
  if ( (a2 & 0x20) != 0 )
    v12 = v13;
  v14 = v12;
  v15 = v12 & 0xFFFFEFFF;
  v16 = v14 | 0x1000;
  if ( (a2 & 0x10000000) != 0 )
    v15 = v16;
  SharedCacheMap[38] = v15;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}

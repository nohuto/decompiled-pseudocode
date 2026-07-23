/*
 * XREFs of SepAddLuidToIndexEntry @ 0x1404A1810
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x1404A16F4 (SepSetProcessUniqueAttribute.c)
 * Callees:
 *     SepExpandSingletonArrays @ 0x14003C4CC (SepExpandSingletonArrays.c)
 *     RtlFindClearBitsAndSet @ 0x14005ED00 (RtlFindClearBitsAndSet.c)
 *     SepInitSingletonEntry @ 0x140065FB8 (SepInitSingletonEntry.c)
 *     RtlInsertEntryHashTable @ 0x140066100 (RtlInsertEntryHashTable.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400665C4 (SepCleanupMarkedForDeletionEntries.c)
 *     RtlClearAllBits @ 0x14006E050 (RtlClearAllBits.c)
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 *     RtlSetBits @ 0x14009ABF0 (RtlSetBits.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAddLuidToIndexEntry(__int64 *a1, unsigned __int64 *a2, _RTL_DYNAMIC_HASH_TABLE_ENTRY **a3)
{
  unsigned __int64 *v3; // r15
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *PoolWithTag; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BITMAP *v8; // r14
  ULONG ClearBitsAndSet; // ebp
  ULONG_PTR v10; // r8
  int v11; // edi
  volatile signed __int64 *v12; // rsi
  ULONG v14; // r15d
  unsigned int *v15; // rbp
  _RTL_DYNAMIC_HASH_TABLE *HashTable; // [rsp+70h] [rbp+18h]

  *a3 = 0LL;
  v3 = a2;
  PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x74446553u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(SeLuidToIndexMapping, 0LL);
  v8 = (_RTL_BITMAP *)(SeLuidToIndexMapping + 16);
  HashTable = *(_RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(SeLuidToIndexMapping + 16), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    SepCleanupMarkedForDeletionEntries();
    ClearBitsAndSet = RtlFindClearBitsAndSet(v8, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v14 = RtlNumberOfSetBits(v8) + 64;
      v15 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned __int64)v14 >> 3, 0x74446553u);
      if ( !v15 )
      {
        v11 = -1073741801;
        goto LABEL_18;
      }
      v11 = SepExpandSingletonArrays();
      if ( v11 < 0 )
        goto LABEL_18;
      ExFreePoolWithTag(v8->Buffer, 0);
      v8->SizeOfBitMap = v14;
      v8->Buffer = v15;
      RtlClearAllBits(v8);
      RtlSetBits(v8, 0, v14 - 64);
      v3 = a2;
      ClearBitsAndSet = RtlFindClearBitsAndSet(v8, 1u, 0);
    }
  }
  PoolWithTag[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
  PoolWithTag[1].Signature = ClearBitsAndSet;
  PoolWithTag[1].Linkage.Blink = (struct _LIST_ENTRY *)*a1;
  LOBYTE(PoolWithTag[2].Linkage.Flink) = 0;
  v10 = *a1;
  if ( !*a1 )
    v10 = 1LL;
  if ( !RtlInsertEntryHashTable(HashTable, PoolWithTag, v10, 0LL) )
  {
    v11 = -1073741801;
    _bittestandreset((signed __int32 *)v8->Buffer, ClearBitsAndSet);
    v15 = 0LL;
LABEL_18:
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    goto LABEL_7;
  }
  v11 = 0;
  SepInitSingletonEntry(ClearBitsAndSet, *a1);
  *v3 = PoolWithTag[1].Signature;
  *a3 = PoolWithTag;
LABEL_7:
  v12 = (volatile signed __int64 *)SeLuidToIndexMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SeLuidToIndexMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}

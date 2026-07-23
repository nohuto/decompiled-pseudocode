/*
 * XREFs of SepAddLuidToIndexEntry @ 0x14048CF8C
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x14048CE74 (SepSetProcessUniqueAttribute.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
 *     RtlInsertEntryHashTable @ 0x14001AAC0 (RtlInsertEntryHashTable.c)
 *     SepInitSingletonEntry @ 0x14001AC74 (SepInitSingletonEntry.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSet @ 0x1400BB560 (RtlFindClearBitsAndSet.c)
 *     RtlNumberOfSetBits @ 0x1400D4B40 (RtlNumberOfSetBits.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140103B18 (SepCleanupMarkedForDeletionEntries.c)
 *     SepExpandSingletonArrays @ 0x140131D74 (SepExpandSingletonArrays.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
  char v13; // bl
  ULONG v15; // r15d
  unsigned int *v16; // rbp
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
      v15 = RtlNumberOfSetBits(v8) + 64;
      v16 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned __int64)v15 >> 3, 0x74446553u);
      if ( !v16 )
      {
        v11 = -1073741801;
        goto LABEL_17;
      }
      v11 = SepExpandSingletonArrays();
      if ( v11 < 0 )
        goto LABEL_17;
      ExFreePoolWithTag(v8->Buffer, 0);
      v8->SizeOfBitMap = v15;
      v8->Buffer = v16;
      RtlClearAllBits(v8);
      RtlSetBits(v8, 0, v15 - 64);
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
    v16 = 0LL;
LABEL_17:
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    goto LABEL_7;
  }
  v11 = 0;
  SepInitSingletonEntry(ClearBitsAndSet, *a1);
  *v3 = PoolWithTag[1].Signature;
  *a3 = PoolWithTag;
LABEL_7:
  v12 = (volatile signed __int64 *)SeLuidToIndexMapping;
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)SeLuidToIndexMapping, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}

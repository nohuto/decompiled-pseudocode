/*
 * XREFs of MiClearPartitionPageBitMap @ 0x14026E3BC
 * Callers:
 *     MiInsertPartitionPages @ 0x14026F364 (MiInsertPartitionPages.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 *     MiFreePartitionTree @ 0x14026F18C (MiFreePartitionTree.c)
 */

__int64 __fastcall MiClearPartitionPageBitMap(__int64 a1, _QWORD **a2)
{
  struct _KTHREAD *CurrentThread; // r12
  ULONG_PTR v5; // rsi
  KIRQL v6; // al
  _QWORD *v7; // rcx
  KIRQL v8; // r15
  _QWORD *i; // rdi
  _QWORD **v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *v17; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v19; // bp
  unsigned int v20; // r8d
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rdi
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int16 *v28[8]; // [rsp+30h] [rbp-68h] BYREF
  int v29; // [rsp+A0h] [rbp+8h] BYREF
  int v30; // [rsp+A8h] [rbp+10h]

  memset(v28, 0, 0x38uLL);
  CurrentThread = KeGetCurrentThread();
  v28[3] = 0LL;
  v28[0] = (__int16 *)a1;
  --CurrentThread->SpecialApcDisable;
  v5 = a1 + 184;
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 192));
  v7 = *a2;
  v8 = v6;
  i = 0LL;
  while ( v7 )
  {
    i = v7;
    v7 = (_QWORD *)*v7;
  }
  while ( i )
  {
    v10 = (_QWORD **)i[1];
    v11 = (__int64)i;
    v12 = i;
    if ( v10 )
    {
      v13 = *v10;
      for ( i = (_QWORD *)i[1]; v13; v13 = (_QWORD *)*v13 )
        i = v13;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v12 )
          break;
        v12 = i;
      }
    }
    MiActOnPartitionNodePages(v11, 7u, v28);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  __writecr8(v8);
  MiFreePartitionTree(a1, &v28[3], 0LL, 1LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 184), v14, v15, v16);
  v29 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 184) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v17->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v17->SpecialApcDisable;
  v19 = ++v17->AbAllocationRegionCount;
  v20 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v24 = !_BitScanReverse((unsigned int *)&v25, v20);
    v30 = v25;
    if ( v24 )
      goto LABEL_26;
    v21 = 1 << v25;
    v22 = v25;
    v23 = &v17->LockEntries[v22];
    v20 &= ~v21;
    if ( (v23->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v23->LockState.0 & 1) == 0
      && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
      && v23->LockState.SessionId == (_DWORD)SessionId )
    {
      v23->AcquiredByte &= ~1u;
      if ( v23->LockState.0 )
        break;
    }
  }
  if ( !v23 )
  {
LABEL_26:
    if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v17, v5, (unsigned int)SessionId, 0LL);
    goto LABEL_33;
  }
  v23->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v23->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v17->LockEntries[v22].TreeNode, SessionId);
  v29 = 0;
  v29 = v23->BoostBitmap.AllFields & 0x1FFFF;
  v23->BoostBitmap.AllFields &= 0xFFFE0000;
  v23->ThreadLocalFlags &= ~1u;
  v23->LockState.0 = 0LL;
  v26 = ((char *)v23 - (char *)v17 - 800) / 96;
  if ( v19 == 1 )
    v17->AbEntrySummary |= 1 << v26;
  else
    _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v26);
LABEL_33:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v17, v5, (__int64)&v29);
  v24 = v17->SpecialApcDisable++ == -1;
  if ( v24 && ($005F0E83B22994B61E86C72E0CE43C71 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery();
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}

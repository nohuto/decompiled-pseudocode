/*
 * XREFs of MiRemoveFromSystemSpace @ 0x1400B69C0
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1404F73D4 (MiUnmapImageInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x1404F75B0 (MmUnmapViewInSystemSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     MiRemoveMappedPtes @ 0x14005C210 (MiRemoveMappedPtes.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     MiManageSubsectionView @ 0x1400A3110 (MiManageSubsectionView.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiDereferencePerSessionProtos @ 0x1406EB3BC (MiDereferencePerSessionProtos.c)
 */

void __fastcall MiRemoveFromSystemSpace(__int64 a1, ULONG_PTR a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v6; // rbp
  __int64 AnyMultiplexedVm; // r14
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // si
  __int64 i; // rbx
  unsigned __int64 v12; // r8
  unsigned int SessionId; // r12d
  __int64 v14; // rdx
  unsigned __int64 v15; // r15
  struct _KTHREAD *v16; // rdi
  unsigned int v17; // edx
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  void *v26; // rcx
  __int64 v27; // [rsp+30h] [rbp-E8h]
  unsigned __int64 v28; // [rsp+38h] [rbp-E0h]
  __int64 v29; // [rsp+40h] [rbp-D8h]
  PVOID Object; // [rsp+48h] [rbp-D0h]
  __int64 v31; // [rsp+50h] [rbp-C8h]
  __int64 v32[23]; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int8 v33; // [rsp+120h] [rbp+8h]
  int v34; // [rsp+128h] [rbp+10h] BYREF
  int v35; // [rsp+130h] [rbp+18h]
  int v36; // [rsp+138h] [rbp+20h]

  v35 = a3;
  CurrentThread = KeGetCurrentThread();
  v29 = (__int64)CurrentThread;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (_UNKNOWN *)a1 == &unk_140388438 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v28 = 0LL;
  }
  else
  {
    AnyMultiplexedVm = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
    v28 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 8), 0LL);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, a2, 1uLL, 0LL, 0LL);
      v12 = *(_QWORD *)(i + 80) & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v12 + *(_QWORD *)(i + 32) )
        break;
      i = *(_QWORD *)(i + 8);
    }
    if ( a2 >= v12 )
      break;
  }
  SessionId = -1;
  --*(_DWORD *)(a1 + 24);
  RtlAvlRemoveNode((unsigned __int64 *)(a1 + 16), i);
  LOBYTE(v14) = v10;
  MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v14);
  Object = *(PVOID *)(i + 56);
  v31 = *(_QWORD *)(i + 48);
  v27 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF8uLL);
  v32[0] = v27;
  MiManageSubsectionView(v32, (_QWORD *)(i + 64), 4);
  v15 = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v15);
  v34 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  --v16->SpecialApcDisable;
  v33 = ++v16->AbAllocationRegionCount;
  v17 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v18 = !_BitScanReverse((unsigned int *)&v19, v17);
    v36 = v19;
    if ( v18 )
      break;
    v20 = 1 << v19;
    v21 = v19;
    v22 = &v16->LockEntries[v21];
    v17 &= ~v20;
    if ( (v22->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v22->LockState.0 & 1) == 0
      && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL)
      && v22->LockState.SessionId == SessionId )
    {
      v22->AcquiredByte &= ~1u;
      if ( v22->LockState.0 )
      {
        if ( v22 )
        {
          v22->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v22->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v16->LockEntries[v21].TreeNode);
          v34 = 0;
          v34 = v22->BoostBitmap.AllFields & 0x1FFFF;
          v22->BoostBitmap.AllFields &= 0xFFFE0000;
          v22->ThreadLocalFlags &= ~1u;
          v22->LockState.0 = 0LL;
          v23 = ((char *)v22 - (char *)v16 - 800) / 96;
          if ( v33 == 1 )
            v16->AbEntrySummary |= 1 << v23;
          else
            _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
          goto LABEL_25;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v16, v15, SessionId, 0LL);
LABEL_25:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, v15, (unsigned int *)&v34);
  v18 = v16->SpecialApcDisable++ == -1;
  if ( v18 && ($B476B70DB57F76B110DA5B9238C3E934 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(v29);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( (v31 & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v27 + 92), 0xFFFFFFFF);
  if ( v35 == 1 )
    MiRemoveMappedPtes((_QWORD *)i, AnyMultiplexedVm);
  v25 = *(unsigned int *)(i + 92);
  if ( (_DWORD)v25 != 0x7FFFF )
    MiDereferencePerSessionProtos(v27, v25);
  if ( (_UNKNOWN *)a1 == &unk_140388438 )
    v26 = &unk_140388F38;
  else
    v26 = (void *)(v28 + 8008);
  MiReleasePtes((__int64)v26, v6, ((*(_QWORD *)(i + 32) >> 12) + 15) & 0xFFFFFFF0, v24);
  ExFreePoolWithTag((PVOID)i, 0);
}

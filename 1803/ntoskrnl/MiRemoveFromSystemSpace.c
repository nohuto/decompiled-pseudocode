/*
 * XREFs of MiRemoveFromSystemSpace @ 0x14004671C
 * Callers:
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x1404BB5B0 (MmUnmapViewInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14053D034 (MiUnmapImageInSystemSpace.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiManageSubsectionView @ 0x1400DDC40 (MiManageSubsectionView.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiDereferencePerSessionProtos @ 0x140754C70 (MiDereferencePerSessionProtos.c)
 */

void __fastcall MiRemoveFromSystemSpace(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 AnyMultiplexedVm; // rsi
  __int64 SharedVm; // rbx
  KIRQL v10; // al
  KIRQL v11; // r14
  _QWORD *i; // rbx
  unsigned __int64 v13; // r8
  unsigned int SessionId; // r15d
  __int64 v15; // rdx
  __int64 v16; // r12
  ULONG_PTR v17; // r14
  struct _KTHREAD *v18; // rdi
  unsigned int v19; // edx
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rsi
  __int64 v25; // rdx
  void *v26; // rcx
  __int64 v27; // [rsp+30h] [rbp-108h]
  __int64 v28; // [rsp+38h] [rbp-100h]
  struct _KTHREAD *v29; // [rsp+40h] [rbp-F8h]
  PVOID Object; // [rsp+48h] [rbp-F0h]
  __int64 v31; // [rsp+50h] [rbp-E8h]
  _QWORD v32[27]; // [rsp+60h] [rbp-D8h] BYREF
  unsigned __int8 v33; // [rsp+140h] [rbp+8h]
  int v34; // [rsp+148h] [rbp+10h] BYREF
  int v35; // [rsp+150h] [rbp+18h]
  int v36; // [rsp+158h] [rbp+20h]

  v35 = a3;
  CurrentThread = KeGetCurrentThread();
  v29 = CurrentThread;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (_UNKNOWN *)a1 == &unk_1403CB5C0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v28 = 0LL;
  }
  else
  {
    AnyMultiplexedVm = MiGetSessionVm(a1, CurrentThread, a3);
    v28 = *(_QWORD *)(*(_QWORD *)(v7 + 184) + 1024LL);
  }
  v27 = AnyMultiplexedVm;
  --*(_WORD *)(v7 + 486);
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 8), 0LL);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v11 = v10;
  for ( i = *(_QWORD **)(a1 + 16); ; i = (_QWORD *)*i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, a2, 1uLL, 0LL, 0LL);
      v13 = i[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v13 + i[4] )
        break;
      i = (_QWORD *)i[1];
    }
    if ( a2 >= v13 )
      break;
  }
  SessionId = -1;
  --*(_DWORD *)(a1 + 24);
  RtlAvlRemoveNode((unsigned __int64 *)(a1 + 16), (__int64)i);
  LOBYTE(v15) = v11;
  MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v15);
  Object = (PVOID)i[7];
  v31 = i[6];
  v16 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF8uLL);
  v32[0] = v16;
  MiManageSubsectionView(v32, i + 8, 4LL);
  v17 = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v17);
  v34 = 0;
  v18 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v17) == 1 )
    SessionId = MmGetSessionIdEx(v18->ApcState.Process);
  --v18->SpecialApcDisable;
  v33 = ++v18->AbAllocationRegionCount;
  v19 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v20 = !_BitScanReverse((unsigned int *)&v21, v19);
    v36 = v21;
    if ( v20 )
      break;
    v22 = 1 << v21;
    v23 = v21;
    v24 = &v18->LockEntries[v23];
    v19 &= ~v22;
    if ( (v24->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v24->LockState.0 & 1) == 0
      && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v17 & 0x7FFFFFFFFFFFFFFCLL)
      && v24->LockState.SessionId == SessionId )
    {
      v24->AcquiredByte &= ~1u;
      if ( v24->LockState.0 )
      {
        if ( v24 )
        {
          v24->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v24->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v18->LockEntries[v23].TreeNode);
          v34 = 0;
          v34 = v24->BoostBitmap.AllFields & 0x1FFFF;
          v24->BoostBitmap.AllFields &= 0xFFFE0000;
          v24->ThreadLocalFlags &= ~1u;
          v24->LockState.0 = 0LL;
          v25 = ((char *)v24 - (char *)v18 - 800) / 96;
          if ( v33 == 1 )
            v18->AbEntrySummary |= 1 << v25;
          else
            _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v25);
          goto LABEL_25;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v18, v17, SessionId, 0LL);
LABEL_25:
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v18, v17, &v34);
  v20 = v18->SpecialApcDisable++ == -1;
  if ( v20 && ($005F0E83B22994B61E86C72E0CE43C71 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(v29);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( (v31 & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v16 + 92), 0xFFFFFFFF);
  if ( v35 == 1 )
    MiRemoveMappedPtes(i, v27);
  if ( *((_DWORD *)i + 23) != 0x7FFFF )
    MiDereferencePerSessionProtos(v16);
  if ( (_UNKNOWN *)a1 == &unk_1403CB5C0 )
    v26 = &unk_1403CC1F8;
  else
    v26 = (void *)(v28 + 8136);
  MiReleasePtes(v26, v6, ((unsigned int)(i[4] >> 12) + 15) & 0xFFFFFFF0);
  ExFreePoolWithTag(i, 0);
}

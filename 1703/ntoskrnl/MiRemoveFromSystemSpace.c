/*
 * XREFs of MiRemoveFromSystemSpace @ 0x140060690
 * Callers:
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1404974E0 (MiUnmapImageInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x140497530 (MmUnmapViewInSystemSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiManageSubsectionView @ 0x1400A98F0 (MiManageSubsectionView.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiDereferencePerSessionProtos @ 0x1406BDF80 (MiDereferencePerSessionProtos.c)
 */

void __fastcall MiRemoveFromSystemSpace(__int64 a1, ULONG_PTR a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v6; // rbp
  unsigned __int64 AnyMultiplexedVm; // r14
  __int64 SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // si
  _QWORD *i; // rbx
  unsigned __int64 v12; // r8
  unsigned int SessionId; // r12d
  __int64 v14; // rdx
  ULONG_PTR v15; // r15
  struct _KTHREAD *v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int16 v23; // ax
  void *v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-E8h]
  unsigned __int64 v26; // [rsp+38h] [rbp-E0h]
  struct _KTHREAD *v27; // [rsp+40h] [rbp-D8h]
  PVOID Object; // [rsp+48h] [rbp-D0h]
  __int64 v29; // [rsp+50h] [rbp-C8h]
  _QWORD v30[23]; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+120h] [rbp+8h]
  int v32; // [rsp+128h] [rbp+10h] BYREF
  int v33; // [rsp+130h] [rbp+18h]
  int v34; // [rsp+138h] [rbp+20h]

  v33 = a3;
  CurrentThread = KeGetCurrentThread();
  v27 = CurrentThread;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (_UNKNOWN *)a1 == &unk_14036C0F8 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v26 = 0LL;
  }
  else
  {
    AnyMultiplexedVm = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
    v26 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 8), 0LL);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v10 = v9;
  for ( i = *(_QWORD **)(a1 + 16); ; i = (_QWORD *)*i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, a2, 1uLL, 0LL, 0LL);
      v12 = i[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v12 + i[4] )
        break;
      i = (_QWORD *)i[1];
    }
    if ( a2 >= v12 )
      break;
  }
  SessionId = -1;
  --*(_DWORD *)(a1 + 24);
  RtlAvlRemoveNode(a1 + 16, i);
  LOBYTE(v14) = v10;
  MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v14);
  Object = (PVOID)i[7];
  v29 = i[6];
  v25 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8uLL);
  v30[0] = v25;
  MiManageSubsectionView(v30, i + 8, 4LL);
  v15 = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  v32 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
    SessionId = MmGetSessionIdEx(v16->ApcState.Process);
  --v16->SpecialApcDisable;
  ++v16->AbAllocationRegionCount;
  v17 = v15 & 0x7FFFFFFFFFFFFFFCLL;
  AbAllocationRegionCount = v16->AbAllocationRegionCount;
  LODWORD(v18) = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v19 = !_BitScanReverse((unsigned int *)&v20, v18);
    v34 = v20;
    if ( v19 )
      break;
    v21 = (__int64)&v16->LockEntries[v20];
    v18 = ~(1 << v20) & (unsigned int)v18;
    if ( (*(_BYTE *)(v21 + 26) & 1) != 0
      && (*(_DWORD *)(v21 + 32) & 1) == 0
      && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v17
      && *(_DWORD *)(v21 + 40) == SessionId )
    {
      *(_BYTE *)(v21 + 26) &= ~1u;
      if ( *(_QWORD *)(v21 + 32) )
      {
        if ( v21 )
        {
          *(_BYTE *)(v21 + 32) |= 2u;
          if ( *(__int64 *)(v21 + 32) < 0 )
            KiAbEntryRemoveFromTree(v21, v18, v17);
          v32 = 0;
          v32 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
          *(_DWORD *)(v21 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v21 + 25) &= ~1u;
          *(_QWORD *)(v21 + 32) = 0LL;
          v22 = (v21 - (__int64)v16 - 800) / 96;
          if ( AbAllocationRegionCount == 1 )
            v16->AbEntrySummary |= 1 << v22;
          else
            _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v22);
          goto LABEL_25;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v16->0 + 1) & 0x8000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v16, v15, SessionId, 0LL);
LABEL_25:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v16, v15, &v32);
  v23 = v16->SpecialApcDisable + 1;
  v16->SpecialApcDisable = v23;
  if ( !v23 && ($69CD3F157F9F39B6F7113F2231989901 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(v27);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( (v29 & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v25 + 92), 0xFFFFFFFF);
  if ( v33 == 1 )
    MiRemoveMappedPtes(i, AnyMultiplexedVm);
  if ( *((_DWORD *)i + 23) != 0x7FFFF )
    MiDereferencePerSessionProtos(v25);
  if ( (_UNKNOWN *)a1 == &unk_14036C0F8 )
    v24 = &unk_14036CD30;
  else
    v24 = (void *)(v26 + 8008);
  MiReleasePtes(v24, v6, ((unsigned int)(i[4] >> 12) + 15) & 0xFFFFFFF0);
  ExFreePoolWithTag(i, 0);
}

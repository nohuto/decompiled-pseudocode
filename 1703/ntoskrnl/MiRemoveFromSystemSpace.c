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
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int16 v22; // ax
  void *v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-E8h]
  unsigned __int64 v25; // [rsp+38h] [rbp-E0h]
  struct _KTHREAD *v26; // [rsp+40h] [rbp-D8h]
  PVOID Object; // [rsp+48h] [rbp-D0h]
  __int64 v28; // [rsp+50h] [rbp-C8h]
  _QWORD v29[23]; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int8 v30; // [rsp+120h] [rbp+8h]
  int v31; // [rsp+128h] [rbp+10h] BYREF
  int v32; // [rsp+130h] [rbp+18h]
  int v33; // [rsp+138h] [rbp+20h]

  v32 = a3;
  CurrentThread = KeGetCurrentThread();
  v26 = CurrentThread;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (_UNKNOWN *)a1 == &unk_14036C0F8 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v25 = 0LL;
  }
  else
  {
    AnyMultiplexedVm = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
    v25 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
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
  v28 = i[6];
  v24 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF8uLL);
  v29[0] = v24;
  MiManageSubsectionView(v29, i + 8, 4LL);
  v15 = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  v31 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
    SessionId = MmGetSessionIdEx(v16->ApcState.Process);
  --v16->SpecialApcDisable;
  v30 = ++v16->AbAllocationRegionCount;
  LODWORD(v17) = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v18 = !_BitScanReverse((unsigned int *)&v19, v17);
    v33 = v19;
    if ( v18 )
      break;
    v20 = (__int64)&v16->LockEntries[v19];
    v17 = ~(1 << v19) & (unsigned int)v17;
    if ( (*(_BYTE *)(v20 + 26) & 1) != 0
      && (*(_DWORD *)(v20 + 32) & 1) == 0
      && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v20 + 40) == SessionId )
    {
      *(_BYTE *)(v20 + 26) &= ~1u;
      if ( *(_QWORD *)(v20 + 32) )
      {
        if ( v20 )
        {
          *(_BYTE *)(v20 + 32) |= 2u;
          if ( *(__int64 *)(v20 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20, v17);
          v31 = 0;
          v31 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
          *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v20 + 25) &= ~1u;
          *(_QWORD *)(v20 + 32) = 0LL;
          v21 = (v20 - (__int64)v16 - 800) / 96;
          if ( v30 == 1 )
            v16->AbEntrySummary |= 1 << v21;
          else
            _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v21);
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
  KiAbThreadRemoveBoosts(v16, v15, &v31);
  v22 = v16->SpecialApcDisable + 1;
  v16->SpecialApcDisable = v22;
  if ( !v22 && ($69CD3F157F9F39B6F7113F2231989901 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(v26);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( (v28 & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v24 + 92), 0xFFFFFFFF);
  if ( v32 == 1 )
    MiRemoveMappedPtes(i, AnyMultiplexedVm);
  if ( *((_DWORD *)i + 23) != 0x7FFFF )
    MiDereferencePerSessionProtos(v24);
  if ( (_UNKNOWN *)a1 == &unk_14036C0F8 )
    v23 = &unk_14036CD30;
  else
    v23 = (void *)(v25 + 8008);
  MiReleasePtes(v23, v6, ((unsigned int)(i[4] >> 12) + 15) & 0xFFFFFFF0);
  ExFreePoolWithTag(i, 0);
}

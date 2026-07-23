/*
 * XREFs of MiInsertInSystemSpace @ 0x1400B6230
 * Callers:
 *     MiMapViewInSystemSpace @ 0x1404F7614 (MiMapViewInSystemSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiOffsetToProtos @ 0x14007AFB0 (MiOffsetToProtos.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiReferenceActiveSubsection @ 0x1400A1320 (MiReferenceActiveSubsection.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MiControlAreaRequiresCharge @ 0x1400A27AC (MiControlAreaRequiresCharge.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     MiManageSubsectionView @ 0x1400A3110 (MiManageSubsectionView.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiRemoveFromSystemSpace @ 0x1400B69C0 (MiRemoveFromSystemSpace.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiReferenceFileObjectForMap @ 0x1404D1DA4 (MiReferenceFileObjectForMap.c)
 *     MiAddMappedPtes @ 0x1404F7940 (MiAddMappedPtes.c)
 *     MiCreatePerSessionProtos @ 0x1406EB248 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x1406EB3BC (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiInsertInSystemSpace(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        char a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  int v7; // ebx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r15
  _QWORD *v12; // r14
  unsigned int v13; // r12d
  __int64 v14; // rdi
  unsigned int v15; // r8d
  void *v16; // r9
  unsigned __int64 v17; // r10
  unsigned int v18; // ecx
  int active; // esi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r8
  void *v23; // r14
  int v24; // r13d
  ULONG_PTR v25; // rax
  PVOID PoolWithTag; // rax
  int v27; // esi
  __int64 v28; // r9
  __int64 *v29; // r11
  int v30; // eax
  unsigned __int64 v32; // r13
  __int64 v33; // r12
  LONG *SharedVm; // rsi
  KIRQL v35; // al
  bool v36; // r8
  KIRQL v37; // r15
  _QWORD *v38; // rdx
  unsigned __int64 v39; // r8
  _QWORD *v40; // rax
  unsigned __int64 v41; // r15
  struct _KTHREAD *v42; // rbp
  ULONG_PTR v43; // r9
  unsigned __int8 v44; // r12
  unsigned int v45; // edx
  bool v46; // zf
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rcx
  _KLOCK_ENTRY *v50; // rsi
  __int64 v51; // rdx
  int v52; // r11d
  unsigned int i; // r10d
  int v54; // ebx
  __int64 v55; // [rsp+30h] [rbp-108h]
  unsigned __int64 v56; // [rsp+38h] [rbp-100h]
  void *v57; // [rsp+40h] [rbp-F8h]
  __int64 v58; // [rsp+40h] [rbp-F8h]
  int v59; // [rsp+48h] [rbp-F0h] BYREF
  _DWORD *v60; // [rsp+50h] [rbp-E8h]
  int SessionId; // [rsp+58h] [rbp-E0h]
  int v62; // [rsp+5Ch] [rbp-DCh]
  __int64 AnyMultiplexedVm; // [rsp+60h] [rbp-D8h]
  __int64 CurrentThread; // [rsp+68h] [rbp-D0h]
  unsigned __int64 v65; // [rsp+70h] [rbp-C8h]
  unsigned __int64 v66; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v67[23]; // [rsp+80h] [rbp-B8h] BYREF

  v7 = 0;
  v57 = &unk_140388F38;
  *a7 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0x7FFFF;
  v14 = 0LL;
  v60 = (_DWORD *)MiSectionControlArea(a3);
  v18 = (v17 >> 16) + ((_WORD)v17 != 0);
  if ( v18 >= 0x10000 )
  {
    active = -1073741793;
LABEL_35:
    ++*(_DWORD *)(a1 + 28);
    if ( v12 )
      MiReleasePtes((__int64)v16, (unsigned __int64)v12, v15, (unsigned __int64)v16);
    if ( v13 != 0x7FFFF )
      MiDereferencePerSessionProtos(v60, v13);
    if ( v11 )
      MiReturnCommit(v14, v11);
    if ( v10 )
      ExFreePoolWithTag((PVOID)v10, 0);
    return (unsigned int)active;
  }
  v56 = 16 * v18;
  v20 = MiOffsetToProtos(v60, *a4, &v66);
  v21 = v20;
  if ( !v20 )
  {
    active = -1073741801;
    v16 = &unk_140388F38;
    v14 = 0LL;
LABEL_34:
    v15 = v56;
    goto LABEL_35;
  }
  if ( (*(_DWORD *)(a3 + 56) & 0x8000000) != 0 )
    v21 = v20 | 1;
  if ( (a5 & 1) != 0 )
    v21 |= 2uLL;
  if ( (_UNKNOWN *)a1 == &unk_140388438 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v23 = &unk_140388F38;
    v65 = 0LL;
    SessionId = -1;
    v24 = 640;
    if ( (a6 & 8) == 0 )
      v24 = 128;
  }
  else
  {
    v24 = 256;
    v65 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    AnyMultiplexedVm = v65 + 3008;
    v23 = (void *)(v65 + 8008);
    v57 = (void *)(v65 + 8008);
    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  v55 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 172));
  v25 = MiReservePtes((__int64)v23, (unsigned int)v56, v22);
  v12 = (_QWORD *)v25;
  if ( !v25 )
  {
    active = -1073741670;
LABEL_33:
    v16 = v57;
    v14 = v55;
    goto LABEL_34;
  }
  CurrentThread = (__int64)(v25 << 25) >> 16;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x7756694Du);
  v10 = (unsigned __int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    active = -1073741670;
    goto LABEL_33;
  }
  memset(PoolWithTag, 0, 0x60uLL);
  v27 = MiControlAreaRequiresCharge((__int64)v60);
  if ( !v27 )
  {
    active = -1073740277;
    goto LABEL_33;
  }
  if ( v27 == 2 )
    v21 |= 4uLL;
  v30 = *((_DWORD *)v29 + 14);
  if ( (v30 & 0x20) != 0 )
  {
    if ( (v30 & 0x4000000) != 0 )
    {
      v13 = -1;
      if ( (int)MiCreatePerSessionProtos(v29, 0xFFFFFFFFLL) < 0 )
      {
        active = -1073741801;
        v13 = 0x7FFFF;
        goto LABEL_33;
      }
      v29 = (__int64 *)v60;
    }
    v11 = *(_QWORD *)(*v29 + 48);
    if ( v11 )
    {
      if ( !(unsigned int)MiChargeCommit(v55, *(_QWORD *)(*v29 + 48), 0LL, v28) )
      {
        v11 = 0LL;
        active = -1073741523;
        goto LABEL_33;
      }
      v29 = (__int64 *)v60;
    }
    if ( v27 == 2 )
    {
      active = MiReferenceActiveSubsection(v29 + 16, v24 | 8u, 0x11u);
      if ( active < 0 )
        goto LABEL_33;
    }
  }
  v32 = CurrentThread;
  v58 = a2 & 0xFFF;
  *(_QWORD *)(v10 + 48) = v21;
  *(_QWORD *)(v10 + 32) = (a2 & 0xFFFFFFFFFFFFF000uLL) + (v58 != 0 ? 0x1000 : 0);
  *(_QWORD *)(v10 + 24) = *a4 >> 12;
  *(_QWORD *)(v10 + 40) = v11;
  *(_QWORD *)(v10 + 80) = v32 | 2;
  *(_DWORD *)(v10 + 92) = v13;
  if ( (_UNKNOWN *)a1 == &unk_140388438 )
    *(_DWORD *)(v10 + 88) = -1;
  else
    *(_DWORD *)(v10 + 88) = *(_DWORD *)(v65 + 8);
  *(_QWORD *)(v10 + 56) = MiReferenceFileObjectForMap(a3);
  CurrentThread = (__int64)KeGetCurrentThread();
  --*(_WORD *)(CurrentThread + 486);
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 8), 0LL);
  v33 = AnyMultiplexedVm;
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v35 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v36 = 0;
  v37 = v35;
  ++*(_DWORD *)(a1 + 24);
  v38 = *(_QWORD **)(a1 + 16);
  if ( !v38 )
    goto LABEL_55;
  while ( 1 )
  {
    v39 = v38[10] & 0xFFFFFFFFFFFFF000uLL;
    if ( v32 >= v39 + v38[4] || v32 >= v39 )
      break;
    v40 = (_QWORD *)*v38;
    if ( !*v38 )
    {
      v36 = 0;
      goto LABEL_55;
    }
LABEL_53:
    v38 = v40;
  }
  v40 = (_QWORD *)v38[1];
  if ( v40 )
    goto LABEL_53;
  v36 = 1;
LABEL_55:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 16), (unsigned __int64)v38, v36, v10);
  MiUnlockWorkingSetExclusive(v33, v37);
  if ( (v60[14] & 0x400) == 0 )
  {
    v67[0] = (__int64)v60;
    MiManageSubsectionView(v67, (_QWORD *)(v10 + 64), 3);
  }
  v41 = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v41, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v41);
  v59 = 0;
  v42 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v41) == 1 )
    v43 = (unsigned int)MmGetSessionIdEx((__int64)v42->ApcState.Process);
  else
    v43 = 0xFFFFFFFFLL;
  --v42->SpecialApcDisable;
  v44 = ++v42->AbAllocationRegionCount;
  v45 = ((char)v42->AbEntrySummary | (char)v42->AbOrphanedEntrySummary) ^ 0x3F;
  v46 = !_BitScanReverse((unsigned int *)&v47, v45);
  v62 = v47;
  if ( v46 )
    goto LABEL_69;
  while ( 1 )
  {
    v48 = 1 << v47;
    v49 = v47;
    v50 = &v42->LockEntries[v49];
    v45 &= ~v48;
    if ( (v50->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v50->LockState.0 & 1) == 0
      && (*(_QWORD *)&v50->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v41 & 0x7FFFFFFFFFFFFFFCLL)
      && v50->LockState.SessionId == (_DWORD)v43 )
    {
      v50->AcquiredByte &= ~1u;
      if ( v50->LockState.0 )
        break;
    }
    v46 = !_BitScanReverse((unsigned int *)&v47, v45);
    v62 = v47;
    if ( v46 )
      goto LABEL_69;
  }
  if ( !v50 )
  {
LABEL_69:
    if ( (*((_DWORD *)&v42->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v42, v41, v43, 0LL);
  }
  else
  {
    v50->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v50->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v42->LockEntries[v49].TreeNode);
    v59 = 0;
    v59 = v50->BoostBitmap.AllFields & 0x1FFFF;
    v50->BoostBitmap.AllFields &= 0xFFFE0000;
    v50->ThreadLocalFlags &= ~1u;
    v50->LockState.0 = 0LL;
    v51 = ((char *)v50 - (char *)v42 - 800) / 96;
    if ( v44 == 1 )
      v42->AbEntrySummary |= 1 << v51;
    else
      _InterlockedOr8((volatile signed __int8 *)&v42->AbOrphanedEntrySummary, 1 << v51);
  }
  --v42->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v42, v41, (unsigned int *)&v59);
  v46 = v42->SpecialApcDisable++ == -1;
  if ( v46 && ($B476B70DB57F76B110DA5B9238C3E934 *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  v52 = (int)v60;
  if ( (v21 & 1) != 0 )
    _InterlockedIncrement(v60 + 23);
  for ( i = 0; i < v56; ++v12 )
  {
    *v12 = 0LL;
    if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v12, 0LL);
    ++i;
  }
  LOBYTE(v7) = v58 != 0;
  v54 = MiAddMappedPtes((int)v12 - 8 * (int)v56, v7 + (unsigned int)(a2 >> 12), v52, (_DWORD)a4, SessionId);
  if ( v54 < 0 )
  {
    ++*(_DWORD *)(a1 + 28);
    MiRemoveFromSystemSpace(a1, v32, 0LL);
  }
  else
  {
    *a7 = v32;
  }
  return (unsigned int)v54;
}

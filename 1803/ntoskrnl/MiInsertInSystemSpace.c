/*
 * XREFs of MiInsertInSystemSpace @ 0x140046B30
 * Callers:
 *     MiMapViewInSystemSpace @ 0x1404BBE1C (MiMapViewInSystemSpace.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiRemoveFromSystemSpace @ 0x14004671C (MiRemoveFromSystemSpace.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiManageSubsectionView @ 0x1400DDC40 (MiManageSubsectionView.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiControlAreaRequiresCharge @ 0x1400E481C (MiControlAreaRequiresCharge.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x1400E5D50 (MiReferenceActiveSubsection.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiOffsetToProtos @ 0x14011D9C0 (MiOffsetToProtos.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiReferenceFileObjectForMap @ 0x1404B5910 (MiReferenceFileObjectForMap.c)
 *     MiAddMappedPtes @ 0x1404BC450 (MiAddMappedPtes.c)
 *     MiCreatePerSessionProtos @ 0x140754AFC (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140754C70 (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiInsertInSystemSpace(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  void *v7; // r13
  int v8; // esi
  unsigned __int64 v10; // rbx
  char *v11; // r14
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // rax
  int v16; // r8d
  _QWORD *v17; // r10
  _DWORD *v18; // r11
  unsigned __int64 v19; // r9
  unsigned int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 AnyMultiplexedVm; // rdi
  int v27; // eax
  unsigned int v28; // esi
  __int64 v29; // rax
  char *PoolWithTag; // rax
  int v31; // eax
  __int64 v32; // r9
  int v33; // esi
  int v34; // eax
  __int64 v35; // rcx
  int Flink; // eax
  __int64 v37; // r13
  __int64 SharedVm; // rsi
  KIRQL v39; // al
  int v40; // r12d
  __int64 v41; // r8
  KIRQL v42; // r15
  _QWORD *v43; // r10
  unsigned __int64 v44; // rdx
  _QWORD *v45; // rax
  ULONG_PTR v46; // r15
  struct _KTHREAD *v47; // r14
  ULONG_PTR v48; // r9
  unsigned int v49; // edx
  bool v50; // zf
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  _KLOCK_ENTRY *v54; // rsi
  __int64 v55; // rdx
  int v56; // r8d
  unsigned int v57; // r10d
  unsigned __int64 v58; // r11
  int v59; // ebx
  unsigned __int64 v61; // rax
  int v62; // eax
  unsigned int v63; // esi
  int PerSessionProtos; // eax
  int active; // eax
  ULONG_PTR v66; // rdx
  int v67; // [rsp+30h] [rbp-118h]
  __int64 v68; // [rsp+38h] [rbp-110h]
  unsigned __int64 v69; // [rsp+40h] [rbp-108h]
  int v70; // [rsp+48h] [rbp-100h] BYREF
  int SessionId; // [rsp+4Ch] [rbp-FCh]
  __int64 v72; // [rsp+50h] [rbp-F8h]
  unsigned __int64 v73; // [rsp+58h] [rbp-F0h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-E8h]
  int v75; // [rsp+68h] [rbp-E0h]
  __int64 v76; // [rsp+70h] [rbp-D8h]
  char v77[8]; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v78[25]; // [rsp+80h] [rbp-C8h] BYREF

  v7 = &unk_1403CC1F8;
  v8 = 0;
  v10 = 0LL;
  v69 = 0LL;
  *a7 = 0LL;
  v67 = 0x7FFFF;
  v11 = 0LL;
  v12 = 0LL;
  LODWORD(v13) = 0;
  v14 = 0LL;
  v15 = MiSectionControlArea(a3);
  v68 = v15;
  v18 = (_DWORD *)v15;
  v20 = (v19 >> 16) + ((_WORD)v19 != 0);
  if ( v20 >= 0x10000 )
  {
    v63 = -1073741793;
LABEL_84:
    ++*(_DWORD *)(a1 + 28);
    if ( v12 )
    {
      MiReleasePtes(v7, v12, (unsigned int)v13);
      v16 = v67;
      v18 = (_DWORD *)v68;
    }
    if ( v16 != 0x7FFFF )
      MiDereferencePerSessionProtos(v18);
    if ( v10 )
      MiReturnCommit(v14, v10);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    return v63;
  }
  v13 = 16 * v20;
  v21 = MiOffsetToProtos(v15, *v17, v77);
  v25 = v21;
  if ( !v21 )
  {
    v63 = -1073741801;
    v10 = 0LL;
LABEL_82:
    v18 = (_DWORD *)v68;
    goto LABEL_83;
  }
  if ( (*(_DWORD *)(a3 + 56) & 0x8000000) != 0 )
    v25 = v21 | 1;
  if ( (a5 & 1) != 0 )
    v25 |= 2uLL;
  if ( (_UNKNOWN *)a1 == &unk_1403CB5C0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v76 = AnyMultiplexedVm;
    CurrentThread = 0LL;
    v27 = 640;
    SessionId = -1;
    if ( (a6 & 8) == 0 )
      v27 = 128;
    LODWORD(v72) = v27;
    LOBYTE(v8) = (a6 & 8) != 0;
    v28 = v8 + 3;
  }
  else
  {
    LODWORD(v72) = 256;
    AnyMultiplexedVm = MiGetSessionVm(v23, v22, v24);
    v76 = AnyMultiplexedVm;
    v28 = 2;
    CurrentThread = (struct _KTHREAD *)(AnyMultiplexedVm - 3008);
    v7 = (void *)(AnyMultiplexedVm - 3008 + 8136);
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  }
  v14 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 174));
  v29 = MiReservePtes(v7, (unsigned int)v13);
  v12 = (_QWORD *)v29;
  if ( !v29 )
  {
    v63 = -1073741670;
    v10 = 0LL;
    goto LABEL_82;
  }
  v73 = v29 << 25 >> 16;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x7756694Du);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v63 = -1073741670;
LABEL_81:
    v10 = v69;
    goto LABEL_82;
  }
  memset(PoolWithTag, 0, 0x60uLL);
  v31 = MiControlAreaRequiresCharge(v68, v28);
  v33 = v31;
  if ( !v31 )
  {
    v10 = 0LL;
    v63 = -1073740277;
    goto LABEL_83;
  }
  if ( v31 == 2 )
    v25 |= 4uLL;
  v34 = v18[14];
  if ( (v34 & 0x20) != 0 )
  {
    if ( (v34 & 0x4000000) != 0 )
    {
      v67 = -1;
      PerSessionProtos = MiCreatePerSessionProtos(v18, 0xFFFFFFFFLL);
      v18 = (_DWORD *)v68;
      if ( PerSessionProtos < 0 )
      {
        v10 = 0LL;
        v16 = 0x7FFFF;
        v67 = 0x7FFFF;
        v63 = -1073741801;
        goto LABEL_84;
      }
    }
    v61 = *(_QWORD *)(*(_QWORD *)v18 + 48LL);
    v69 = v61;
    if ( !v61 || (v62 = MiChargeCommit(v14, v61, 0LL, v32), v18 = (_DWORD *)v68, v62) )
    {
      if ( v33 != 2 )
        goto LABEL_17;
      active = MiReferenceActiveSubsection((ULONG_PTR)(v18 + 32));
      v63 = active;
      if ( active >= 0 )
        goto LABEL_17;
      goto LABEL_81;
    }
    v10 = 0LL;
    v63 = -1073741523;
LABEL_83:
    v16 = v67;
    goto LABEL_84;
  }
LABEL_17:
  v72 = a2 & 0xFFF;
  v35 = -(__int64)(v72 != 0);
  *((_QWORD *)v11 + 6) = v25;
  *((_QWORD *)v11 + 4) = (a2 & 0xFFFFFFFFFFFFF000uLL) + (v35 & 0x1000);
  *((_QWORD *)v11 + 3) = *a4 >> 12;
  *((_QWORD *)v11 + 5) = v69;
  *((_QWORD *)v11 + 10) = v73 | 2;
  *((_DWORD *)v11 + 23) = v67;
  if ( (_UNKNOWN *)a1 == &unk_1403CB5C0 )
    Flink = -1;
  else
    Flink = (int)CurrentThread->Header.WaitListHead.Flink;
  *((_DWORD *)v11 + 22) = Flink;
  *((_QWORD *)v11 + 7) = MiReferenceFileObjectForMap(a3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 8), 0LL);
  v37 = v76;
  SharedVm = MiGetSharedVm(v76);
  v39 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  v40 = 0;
  LOBYTE(v41) = 0;
  *(_DWORD *)(SharedVm + 4) = 0;
  v42 = v39;
  ++*(_DWORD *)(a1 + 24);
  v43 = *(_QWORD **)(a1 + 16);
  if ( !v43 )
    goto LABEL_27;
  while ( 1 )
  {
    v44 = v43[10] & 0xFFFFFFFFFFFFF000uLL;
    if ( v73 >= v44 + v43[4] || v73 >= v44 )
      break;
    v45 = (_QWORD *)*v43;
    if ( !*v43 )
    {
      LOBYTE(v41) = 0;
      goto LABEL_27;
    }
LABEL_22:
    v43 = v45;
  }
  v45 = (_QWORD *)v43[1];
  if ( v45 )
    goto LABEL_22;
  LOBYTE(v41) = 1;
LABEL_27:
  RtlAvlInsertNodeEx(a1 + 16, v43, v41, v11);
  MiUnlockWorkingSetExclusive(v37, v42);
  if ( (*(_DWORD *)(v68 + 56) & 0x400) == 0 )
  {
    v78[0] = v68;
    MiManageSubsectionView(v78, v11 + 64, 3LL);
  }
  v46 = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v46, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v46);
  v70 = 0;
  v47 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v46) == 1 )
    v48 = (unsigned int)MmGetSessionIdEx(v47->ApcState.Process);
  else
    v48 = 0xFFFFFFFFLL;
  --v47->SpecialApcDisable;
  if ( ++v47->AbAllocationRegionCount == 1 )
    v40 = 1;
  v49 = ((char)v47->AbEntrySummary | (char)v47->AbOrphanedEntrySummary) ^ 0x3F;
  v50 = !_BitScanReverse((unsigned int *)&v51, v49);
  v75 = v51;
  if ( v50 )
    goto LABEL_70;
  while ( 1 )
  {
    v52 = 1 << v51;
    v53 = v51;
    v54 = &v47->LockEntries[v53];
    v49 &= ~v52;
    if ( (v54->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v54->LockState.0 & 1) == 0
      && (*(_QWORD *)&v54->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v46 & 0x7FFFFFFFFFFFFFFCLL)
      && v54->LockState.SessionId == (_DWORD)v48 )
    {
      v54->AcquiredByte &= ~1u;
      if ( v54->LockState.0 )
        break;
    }
    v50 = !_BitScanReverse((unsigned int *)&v51, v49);
    v75 = v51;
    if ( v50 )
      goto LABEL_70;
  }
  if ( !v54 )
  {
LABEL_70:
    if ( (*((_DWORD *)&v47->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v47, v46, v48, 0LL);
  }
  else
  {
    v54->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v54->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v47->LockEntries[v53].TreeNode);
    v70 = 0;
    v70 = v54->BoostBitmap.AllFields & 0x1FFFF;
    v54->BoostBitmap.AllFields &= 0xFFFE0000;
    v54->ThreadLocalFlags &= ~1u;
    v54->LockState.0 = 0LL;
    v55 = ((char *)v54 - (char *)v47 - 800) / 96;
    if ( v40 )
      v47->AbEntrySummary |= 1 << v55;
    else
      _InterlockedOr8((volatile signed __int8 *)&v47->AbOrphanedEntrySummary, 1 << v55);
  }
  --v47->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v47, v46, &v70);
  v50 = v47->SpecialApcDisable++ == -1;
  if ( v50 && ($005F0E83B22994B61E86C72E0CE43C71 *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  v56 = v68;
  if ( (v25 & 1) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v68 + 92));
  v57 = 0;
  if ( v13 )
  {
    v58 = 0xFFFFF6FB7DBED000uLL;
    do
    {
      *v12 = ZeroPte;
      if ( (unsigned __int64)v12 >= v58 && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v12, ZeroPte);
      ++v57;
      ++v12;
    }
    while ( v57 < v13 );
    v56 = v68;
  }
  v59 = MiAddMappedPtes((int)v12 - 8 * (int)v13, (v72 != 0) + (unsigned int)(a2 >> 12), v56, (_DWORD)a4, SessionId);
  if ( v59 < 0 )
  {
    v66 = v73;
    ++*(_DWORD *)(a1 + 28);
    MiRemoveFromSystemSpace(a1, v66, 0LL);
  }
  else
  {
    *a7 = v73;
  }
  return (unsigned int)v59;
}

/*
 * XREFs of MiFreeUnusedPfnPages @ 0x14017A360
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetNextNonGapPfnPage @ 0x14017A7D8 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x14017A9CC (MiPfnRangeIsZero.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlCompareMemoryUlong @ 0x1401B32E0 (RtlCompareMemoryUlong.c)
 */

__int64 __fastcall MiFreeUnusedPfnPages(ULONG_PTR *a1)
{
  ULONG_PTR *v1; // r14
  char *AnyMultiplexedVm; // rax
  struct _KTHREAD *CurrentThread; // r12
  ULONG_PTR v5; // rsi
  __int64 v6; // rdi
  unsigned int SessionId; // r13d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  LONG *SharedVm; // rbx
  KIRQL v12; // al
  unsigned __int8 v13; // r12
  __int64 v14; // r8
  _QWORD *NextNonGapPfnPage; // rbx
  __int64 v16; // r8
  SIZE_T v17; // rdi
  SIZE_T v18; // rax
  __int64 v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KTHREAD *v24; // rbx
  unsigned __int8 v25; // r14
  __int64 v26; // rdx
  bool v27; // zf
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  _KLOCK_ENTRY *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 result; // rax
  __int64 v35; // rdx
  _QWORD *v36; // r15
  char *v37; // r15
  char *v38; // r12
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _KTHREAD *v42; // rbx
  __int64 v43; // rdx
  unsigned __int8 v44; // r12
  unsigned int v45; // r8d
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  _KLOCK_ENTRY *v49; // rdi
  __int64 v50; // rdx
  struct _KTHREAD *v51; // rbx
  unsigned __int8 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  _KLOCK_ENTRY *v57; // rdi
  __int64 v58; // rdx
  SIZE_T Length; // [rsp+30h] [rbp-49h] BYREF
  int v60; // [rsp+38h] [rbp-41h]
  int v61; // [rsp+3Ch] [rbp-3Dh]
  int v62; // [rsp+40h] [rbp-39h]
  __int64 v63; // [rsp+48h] [rbp-31h] BYREF
  char *v64; // [rsp+50h] [rbp-29h]
  struct _KTHREAD *v65; // [rsp+58h] [rbp-21h]
  ULONG_PTR v66; // [rsp+60h] [rbp-19h] BYREF
  __int16 v67; // [rsp+68h] [rbp-11h] BYREF
  char v68; // [rsp+6Ah] [rbp-Fh]
  int v69; // [rsp+6Ch] [rbp-Dh]
  _QWORD v70[2]; // [rsp+70h] [rbp-9h] BYREF
  ULONG_PTR *v71; // [rsp+80h] [rbp+7h]
  KIRQL v72; // [rsp+E0h] [rbp+67h]
  int v73; // [rsp+E8h] [rbp+6Fh] BYREF
  int v74; // [rsp+F0h] [rbp+77h] BYREF
  int v75; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = &MiSystemPartition;
  if ( a1 )
    v1 = a1;
  v71 = v1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  CurrentThread = KeGetCurrentThread();
  v5 = (ULONG_PTR)(v1 + 23);
  v6 = (__int64)AnyMultiplexedVm;
  v64 = AnyMultiplexedVm;
  v65 = CurrentThread;
  SessionId = -1;
  while ( 1 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v1 + 23), 0LL);
    if ( !a1 && *((_BYTE *)v1 + 196) == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v1 + 23, v8, v9, v10);
      v74 = 0;
      v51 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v1 + 23)) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v51->ApcState.Process);
      --v51->SpecialApcDisable;
      v52 = ++v51->AbAllocationRegionCount;
      LODWORD(v53) = ((char)v51->AbEntrySummary | (char)v51->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v27 = !_BitScanReverse((unsigned int *)&v54, v53);
        v61 = v54;
        if ( v27 )
          goto LABEL_85;
        v55 = 1 << v54;
        v56 = v54;
        v57 = &v51->LockEntries[v56];
        v53 = ~v55 & (unsigned int)v53;
        if ( (v57->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v57->LockState.0 & 1) == 0
          && (*(_QWORD *)&v57->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
          && v57->LockState.SessionId == SessionId )
        {
          v57->AcquiredByte &= ~1u;
          if ( v57->LockState.0 )
            break;
        }
      }
      if ( v57 )
      {
        v57->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v57->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v51->LockEntries[v56].TreeNode, v53);
        v74 = 0;
        v74 = v57->BoostBitmap.AllFields & 0x1FFFF;
        v57->BoostBitmap.AllFields &= 0xFFFE0000;
        v57->ThreadLocalFlags &= ~1u;
        v57->LockState.0 = 0LL;
        v58 = ((char *)v57 - (char *)v51 - 800) / 96;
        if ( v52 == 1 )
          v51->AbEntrySummary |= 1 << v58;
        else
          _InterlockedOr8((volatile signed __int8 *)&v51->AbOrphanedEntrySummary, 1 << v58);
      }
      else
      {
LABEL_85:
        if ( (*((_DWORD *)&v51->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v51, v5, SessionId, 0LL);
      }
      --v51->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v51, v5, (__int64)&v74);
      v27 = v51->SpecialApcDisable++ == -1;
      if ( v27 && ($005F0E83B22994B61E86C72E0CE43C71 *)v51->ApcState.ApcListHead[0].Flink != &v51->152 )
        KiCheckForKernelApcDelivery();
      v33 = (__int64)CurrentThread;
      return KiLeaveGuardedRegionUnsafe(v33);
    }
    SharedVm = MiGetSharedVm(v6);
    v12 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v13 = v12;
    v72 = v12;
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1 + 48);
    if ( !v1[5] )
      break;
    if ( a1 )
    {
      v67 = 263;
      v70[1] = v70;
      v70[0] = v70;
      v66 = v1[11];
      v1[11] = (ULONG_PTR)&v66;
      v68 = 6;
      v69 = 0;
    }
    else
    {
      v1[6] = 0LL;
      v1[8] = (ULONG_PTR)MiFreeUnusedPfnPages;
      v1[9] = (ULONG_PTR)v1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 6), DelayedWorkQueue);
      *((_BYTE *)v1 + 196) = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 48);
    __writecr8(2uLL);
    MiUnlockWorkingSetExclusive(v6, v13);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1 + 23, v39, v40, v41);
    v73 = 0;
    v42 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v1 + 23)) == 1 )
      v43 = (unsigned int)MmGetSessionIdEx((__int64)v42->ApcState.Process);
    else
      v43 = 0xFFFFFFFFLL;
    --v42->SpecialApcDisable;
    v44 = ++v42->AbAllocationRegionCount;
    v45 = ((char)v42->AbEntrySummary | (char)v42->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v27 = !_BitScanReverse((unsigned int *)&v46, v45);
      v60 = v46;
      if ( v27 )
        goto LABEL_61;
      v47 = 1 << v46;
      v48 = v46;
      v49 = &v42->LockEntries[v48];
      v45 &= ~v47;
      if ( (v49->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v49->LockState.0 & 1) == 0
        && (*(_QWORD *)&v49->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
        && v49->LockState.SessionId == (_DWORD)v43 )
      {
        v49->AcquiredByte &= ~1u;
        if ( v49->LockState.0 )
          break;
      }
    }
    if ( !v49 )
    {
LABEL_61:
      if ( (*((_DWORD *)&v42->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v42, (ULONG_PTR)(v1 + 23), (unsigned int)v43, 0LL);
      goto LABEL_73;
    }
    v49->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v49->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v42->LockEntries[v48].TreeNode, v43);
    v73 = 0;
    v73 = v49->BoostBitmap.AllFields & 0x1FFFF;
    v49->BoostBitmap.AllFields &= 0xFFFE0000;
    v49->ThreadLocalFlags &= ~1u;
    v49->LockState.0 = 0LL;
    v50 = ((char *)v49 - (char *)v42 - 800) / 96;
    if ( v44 == 1 )
      v42->AbEntrySummary |= 1 << v50;
    else
      _InterlockedOr8((volatile signed __int8 *)&v42->AbOrphanedEntrySummary, 1 << v50);
LABEL_73:
    --v42->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v42, (__int64)(v1 + 23), (__int64)&v73);
    v27 = v42->SpecialApcDisable++ == -1;
    if ( v27 && ($005F0E83B22994B61E86C72E0CE43C71 *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
      KiCheckForKernelApcDelivery();
    CurrentThread = v65;
    result = KiLeaveGuardedRegionUnsafe((__int64)v65);
    if ( !a1 )
      return result;
    KeWaitForGate((__int64)&v67, 0x12u);
    v6 = (__int64)v64;
  }
  if ( !a1 )
    *((_BYTE *)v1 + 196) = 1;
  v63 = 0LL;
  LOBYTE(v14) = v13;
  NextNonGapPfnPage = (_QWORD *)MiGetNextNonGapPfnPage(&v63, &Length, v14, 1LL);
  if ( !NextNonGapPfnPage )
    goto LABEL_18;
  do
  {
    v17 = Length;
    if ( (Length & 0xFFF) != 0 )
      goto LABEL_16;
    do
    {
      if ( *NextNonGapPfnPage )
        goto LABEL_38;
      v18 = RtlCompareMemoryUlong(NextNonGapPfnPage, v17, 0);
      v19 = v18;
      if ( v18 < 0x1000 )
      {
        if ( v18 )
          goto LABEL_14;
LABEL_38:
        v19 = 4096LL;
        goto LABEL_14;
      }
      Length = (SIZE_T)NextNonGapPfnPage;
      v35 = (__int64)(NextNonGapPfnPage + 0xB000000000LL) / 48;
      v36 = (_QWORD *)(48 * v35 - 0x58000000000LL);
      if ( v36 != NextNonGapPfnPage
        && (!MiIsAddressValid(48 * v35 - 0x58000000000LL) || RtlCompareMemoryUlong(v36, 0x30uLL, 0) != 48) )
      {
        Length = (SIZE_T)(NextNonGapPfnPage + 512);
      }
      v37 = (char *)NextNonGapPfnPage + (v19 & 0xFFFFFFFFFFFFF000uLL);
      v38 = (char *)(48 * ((__int64)(v37 + 0x58000000000LL) / 48) - 0x58000000000LL);
      if ( v38 != v37 && (!MiIsAddressValid((__int64)(v38 + 48)) || RtlCompareMemoryUlong(v38, 0x30uLL, 0) != 48) )
        v37 -= 4096;
      MiPfnRangeIsZero(Length, v37);
LABEL_14:
      v20 = (v19 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      NextNonGapPfnPage = (_QWORD *)((char *)NextNonGapPfnPage + v20);
      v17 -= v20;
    }
    while ( v17 >= 0x1000 );
    v13 = v72;
    Length = v17;
LABEL_16:
    LOBYTE(v16) = v13;
    NextNonGapPfnPage = (_QWORD *)MiGetNextNonGapPfnPage(&v63, &Length, v16, 1LL);
  }
  while ( NextNonGapPfnPage );
  v1 = v71;
  SessionId = -1;
  v6 = (__int64)v64;
  v5 = (ULONG_PTR)(v71 + 23);
LABEL_18:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 48);
  __writecr8(2uLL);
  MiUnlockWorkingSetExclusive(v6, v13);
  *((_BYTE *)v1 + 196) = 0;
  v1[10] = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5, v21, v22, v23);
  v75 = 0;
  v24 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v24->ApcState.Process);
  --v24->SpecialApcDisable;
  v25 = ++v24->AbAllocationRegionCount;
  LODWORD(v26) = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v27 = !_BitScanReverse((unsigned int *)&v28, v26);
    v62 = v28;
    if ( v27 )
      break;
    v29 = 1 << v28;
    v30 = v28;
    v31 = &v24->LockEntries[v30];
    v26 = ~v29 & (unsigned int)v26;
    if ( (v31->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v31->LockState.0 & 1) == 0
      && (*(_QWORD *)&v31->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
      && v31->LockState.SessionId == SessionId )
    {
      v31->AcquiredByte &= ~1u;
      if ( v31->LockState.0 )
      {
        if ( v31 )
        {
          v31->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v31->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v24->LockEntries[v30].TreeNode, v26);
          v75 = 0;
          v75 = v31->BoostBitmap.AllFields & 0x1FFFF;
          v31->BoostBitmap.AllFields &= 0xFFFE0000;
          v31->ThreadLocalFlags &= ~1u;
          v31->LockState.0 = 0LL;
          v32 = ((char *)v31 - (char *)v24 - 800) / 96;
          if ( v25 == 1 )
            v24->AbEntrySummary |= 1 << v32;
          else
            _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v32);
          goto LABEL_34;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v24, v5, SessionId, 0LL);
LABEL_34:
  --v24->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v24, v5, (__int64)&v75);
  v27 = v24->SpecialApcDisable++ == -1;
  if ( v27 && ($005F0E83B22994B61E86C72E0CE43C71 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
    KiCheckForKernelApcDelivery();
  v33 = (__int64)v65;
  return KiLeaveGuardedRegionUnsafe(v33);
}

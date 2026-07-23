/*
 * XREFs of MiFreeUnusedPfnPages @ 0x140144320
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiPfnRangeIsZero @ 0x140144C40 (MiPfnRangeIsZero.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlCompareMemoryUlong @ 0x140189680 (RtlCompareMemoryUlong.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiFreeUnusedPfnPages(ULONG_PTR *a1)
{
  ULONG_PTR *v1; // r13
  ULONG_PTR *v2; // rdi
  unsigned __int64 v3; // rsi
  ULONG_PTR v4; // r15
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r12
  LONG *SharedVm; // rdi
  KIRQL v10; // al
  __int64 v11; // rdx
  struct _KTHREAD *v12; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v14; // r12
  unsigned int v15; // r8d
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 result; // rax
  struct _KTHREAD *v22; // rdi
  ULONG_PTR v23; // r9
  unsigned __int8 v24; // si
  unsigned int v25; // edx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _KLOCK_ENTRY *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r13
  __int64 NextPageTable; // rax
  __int64 v34; // r11
  SIZE_T v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rdx
  unsigned __int64 v38; // r14
  __int64 PteShadow; // rax
  PVOID v40; // r9
  __int64 v41; // r10
  __int64 v42; // rax
  unsigned __int64 i; // rsi
  __int64 v44; // rax
  __int64 v45; // r14
  SIZE_T v46; // rax
  __int64 v47; // rdx
  void *v48; // r12
  char *v49; // r12
  char *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned int v53; // [rsp+38h] [rbp-51h] BYREF
  __int64 v54; // [rsp+40h] [rbp-49h] BYREF
  char *AnyMultiplexedVm; // [rsp+48h] [rbp-41h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-39h]
  ULONG_PTR v57; // [rsp+58h] [rbp-31h] BYREF
  __int16 v58; // [rsp+60h] [rbp-29h] BYREF
  char v59; // [rsp+62h] [rbp-27h]
  int v60; // [rsp+64h] [rbp-25h]
  _QWORD v61[2]; // [rsp+68h] [rbp-21h] BYREF
  PVOID Source; // [rsp+78h] [rbp-11h]
  unsigned __int64 v63; // [rsp+80h] [rbp-9h]
  ULONG_PTR *v64; // [rsp+88h] [rbp-1h]
  ULONG_PTR *v65; // [rsp+90h] [rbp+7h]
  __int64 v67; // [rsp+F0h] [rbp+67h]
  KIRQL v68; // [rsp+F8h] [rbp+6Fh]
  int v69; // [rsp+100h] [rbp+77h] BYREF
  int v70; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = &MiSystemPartition;
  v2 = a1;
  if ( a1 )
    v1 = a1;
  v65 = v1;
  v3 = (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = (ULONG_PTR)(v1 + 23);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v64 = v1 + 23;
  while ( 1 )
  {
    v7 = v6 + (v5 & ((unsigned __int64)(48 * qword_1403885E0 - 0x57FFFFFFFD0LL) >> 9));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v8 = v7 - 8;
    v63 = v7 - 8;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v1 + 23), 0LL);
    if ( !v2 && *((_BYTE *)v1 + 196) == 1 )
      break;
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v10 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v68 = v10;
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1 + 48);
    if ( !v1[5] )
    {
      if ( !a1 )
        *((_BYTE *)v1 + 196) = 1;
      if ( v3 <= v8 )
      {
        v32 = 4096LL;
        do
        {
          NextPageTable = MiGetNextPageTable(v3, v8, 0LL, 0x11u, 7u, &v53);
          v34 = NextPageTable;
          if ( !NextPageTable )
            break;
          if ( v53 )
          {
            v35 = 0x200000LL;
            if ( v53 > 1 )
            {
              v36 = v53 - 1;
              do
              {
                v35 <<= 9;
                --v36;
              }
              while ( v36 );
            }
            v37 = (__int64)(v8 - NextPageTable) >> 3;
            v38 = NextPageTable;
            if ( v35 >> 12 > v37 + 1 )
              v35 = (v37 + 1) << 12;
          }
          else
          {
            v3 = NextPageTable;
            while ( 1 )
            {
              PteShadow = *(_QWORD *)v3;
              if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
                PteShadow = MiReadPteShadow(v3, *(_QWORD *)v3);
              v54 = PteShadow;
              if ( (PteShadow & 1) != 0 )
              {
                v40 = qword_1403891E8;
                v41 = qword_1403891F0;
                if ( qword_1403891E8 == (PVOID)qword_1403891F0 )
                  break;
                v42 = MI_GET_PAGE_FRAME_FROM_PTE(&v54);
                if ( (PVOID)v42 != v40 )
                  break;
              }
              v3 += 8LL;
              if ( v3 > v8 )
                goto LABEL_106;
              if ( (v3 & 0xFFF) == 0 )
                goto LABEL_105;
            }
            v38 = v3;
            v35 = 4096LL;
            for ( i = v3 + 8; i <= v8; v35 += 4096LL )
            {
              if ( (i & 0xFFF) == 0 )
                break;
              v44 = *(_QWORD *)i;
              if ( i >= 0xFFFFF6FB7DBED000uLL && i <= 0xFFFFF6FB7DBED7F8uLL )
                v44 = MiReadPteShadow(i, *(_QWORD *)i);
              i += 8LL;
              v54 = v44;
              if ( (v44 & 1) == 0 || v40 != (PVOID)v41 && (PVOID)MI_GET_PAGE_FRAME_FROM_PTE(&v54) == qword_1403891E8 )
                break;
            }
          }
          v45 = (__int64)(v38 << 25) >> 16;
          v3 = v34 + 8 * (v35 >> 12);
          do
          {
            if ( !*(_QWORD *)v45 )
            {
              v46 = RtlCompareMemoryUlong((PVOID)v45, v35, 0);
              v32 = v46;
              if ( v46 < 0x1000 )
              {
                if ( !v46 )
                  v32 = 4096LL;
              }
              else
              {
                v67 = v45;
                v47 = (v45 + 0x58000000000LL) / 48;
                v48 = (void *)(48 * v47 - 0x58000000000LL);
                if ( v48 != (void *)v45
                  && (!MiIsAddressValid(48 * v47 - 0x58000000000LL) || RtlCompareMemoryUlong(v48, 0x30uLL, 0) != 48) )
                {
                  v67 = v45 + 4096;
                }
                v49 = (char *)(v45 + (v32 & 0xFFFFFFFFFFFFF000uLL));
                v50 = (char *)(48 * ((__int64)(v49 + 0x58000000000LL) / 48) - 0x58000000000LL);
                Source = v50;
                if ( v50 != v49
                  && (!MiIsAddressValid((__int64)(v50 + 48)) || RtlCompareMemoryUlong(Source, 0x30uLL, 0) != 48) )
                {
                  v49 -= 4096;
                }
                MiPfnRangeIsZero(v67, v49);
              }
            }
            v51 = v32 + 4095;
            v32 = 4096LL;
            v51 &= 0xFFFFFFFFFFFFF000uLL;
            v45 += v51;
            v35 -= v51;
          }
          while ( v35 >= 0x1000 );
          v8 = v63;
LABEL_105:
          ;
        }
        while ( v3 <= v8 );
LABEL_106:
        v4 = (ULONG_PTR)v64;
        v1 = v65;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 48);
      __writecr8(2uLL);
      LOBYTE(v52) = v68;
      MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v52);
      v1[10] = 0LL;
      *((_BYTE *)v1 + 196) = 0;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v4);
      KeAbPostRelease(v4);
      return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( a1 )
    {
      v58 = 263;
      v61[1] = v61;
      v59 = 6;
      v61[0] = v61;
      v57 = v1[11];
      v1[11] = (ULONG_PTR)&v57;
      v60 = 0;
    }
    else
    {
      v3 = v7;
      v1[6] = 0LL;
      v1[9] = (ULONG_PTR)v1;
      v1[8] = (ULONG_PTR)MiFreeUnusedPfnPages;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 6), DelayedWorkQueue);
      *((_BYTE *)v1 + 196) = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 48);
    __writecr8(2uLL);
    LOBYTE(v11) = v68;
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v11);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1 + 23);
    v69 = 0;
    v12 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(v1 + 23)) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v12->ApcState.Process);
    else
      SessionId = -1;
    --v12->SpecialApcDisable;
    v14 = ++v12->AbAllocationRegionCount;
    v15 = ((char)v12->AbEntrySummary | (char)v12->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v16 = !_BitScanReverse((unsigned int *)&v17, v15);
      if ( v16 )
        break;
      v18 = (__int64)&v12->LockEntries[v17];
      v15 &= ~(1 << v17);
      if ( (*(_BYTE *)(v18 + 26) & 1) != 0
        && (*(_DWORD *)(v18 + 32) & 1) == 0
        && (*(_QWORD *)(v18 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v18 + 40) == SessionId )
      {
        *(_BYTE *)(v18 + 26) &= ~1u;
        if ( *(_QWORD *)(v18 + 32) )
        {
          if ( v18 )
          {
            *(_BYTE *)(v18 + 32) |= 2u;
            if ( *(__int64 *)(v18 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v18);
            v69 = 0;
            v69 = *(_DWORD *)(v18 + 88) & 0x1FFFF;
            *(_DWORD *)(v18 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v18 + 25) &= ~1u;
            *(_QWORD *)(v18 + 32) = 0LL;
            v19 = (v18 - (__int64)v12 - 800) / 96;
            if ( v14 == 1 )
              v12->AbEntrySummary |= 1 << v19;
            else
              _InterlockedOr8((volatile signed __int8 *)&v12->AbOrphanedEntrySummary, 1 << v19);
            goto LABEL_28;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v12->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v12, (ULONG_PTR)(v1 + 23), SessionId, 0LL);
LABEL_28:
    --v12->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v12, (__int64)(v1 + 23), (unsigned int *)&v69);
    v16 = v12->SpecialApcDisable++ == -1;
    if ( v16 && ($B476B70DB57F76B110DA5B9238C3E934 *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
      KiCheckForKernelApcDelivery(v20);
    result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v2 = a1;
    if ( !a1 )
      return result;
    KeWaitForGate((__int64)&v58, 0x12u);
    v5 = 0x7FFFFFFFF8LL;
    v6 = 0xFFFFF68000000000uLL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  v70 = 0;
  v22 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    v23 = (unsigned int)MmGetSessionIdEx((__int64)v22->ApcState.Process);
  else
    v23 = 0xFFFFFFFFLL;
  --v22->SpecialApcDisable;
  v24 = ++v22->AbAllocationRegionCount;
  v25 = ((char)v22->AbEntrySummary | (char)v22->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v26, v25);
    if ( v16 )
      break;
    v27 = 1 << v26;
    v28 = v26;
    v29 = &v22->LockEntries[v28];
    v25 &= ~v27;
    if ( (v29->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v29->LockState.0 & 1) == 0
      && (*(_QWORD *)&v29->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && v29->LockState.SessionId == (_DWORD)v23 )
    {
      v29->AcquiredByte &= ~1u;
      if ( v29->LockState.0 )
      {
        if ( v29 )
        {
          v29->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v29->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v22->LockEntries[v28].TreeNode);
          v70 = 0;
          v70 = v29->BoostBitmap.AllFields & 0x1FFFF;
          v29->BoostBitmap.AllFields &= 0xFFFE0000;
          v29->ThreadLocalFlags &= ~1u;
          v29->LockState.0 = 0LL;
          v30 = ((char *)v29 - (char *)v22 - 800) / 96;
          if ( v24 == 1 )
            v22->AbEntrySummary |= 1 << v30;
          else
            _InterlockedOr8((volatile signed __int8 *)&v22->AbOrphanedEntrySummary, 1 << v30);
          goto LABEL_53;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v22->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v22, v4, v23, 0LL);
LABEL_53:
  --v22->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v22, v4, (unsigned int *)&v70);
  v16 = v22->SpecialApcDisable++ == -1;
  if ( v16 && ($B476B70DB57F76B110DA5B9238C3E934 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
    KiCheckForKernelApcDelivery(v31);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}

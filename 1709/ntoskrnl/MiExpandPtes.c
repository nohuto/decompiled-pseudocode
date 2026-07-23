/*
 * XREFs of MiExpandPtes @ 0x1400F5BA0
 * Callers:
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x1400F61D8 (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiSplitBitmapPages @ 0x1400F7414 (MiSplitBitmapPages.c)
 *     MiObtainSessionVa @ 0x1400F85C0 (MiObtainSessionVa.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiExpandPtes(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  int v4; // r8d
  BOOL v5; // r12d
  unsigned int v6; // ebx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR *v14; // r13
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rax
  char v24; // r10
  volatile signed __int32 *v25; // r8
  unsigned __int64 v26; // rcx
  ULONG_PTR v28; // r13
  struct _KTHREAD *v29; // rbx
  unsigned int SessionId; // edx
  unsigned int v31; // r8d
  bool v32; // zf
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  _KLOCK_ENTRY *v36; // rdi
  __int64 v37; // rdx
  unsigned __int64 v38; // rdi
  unsigned int v39; // [rsp+30h] [rbp-50h]
  int v40; // [rsp+34h] [rbp-4Ch]
  int v41; // [rsp+3Ch] [rbp-44h]
  unsigned __int64 v42; // [rsp+40h] [rbp-40h]
  unsigned __int64 v43; // [rsp+48h] [rbp-38h]
  __int64 v44; // [rsp+50h] [rbp-30h]
  unsigned __int64 v45; // [rsp+58h] [rbp-28h]
  __int64 v46; // [rsp+60h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int8 v49; // [rsp+D0h] [rbp+50h]
  int v50; // [rsp+D8h] [rbp+58h] BYREF

  v2 = a2;
  if ( a2 + 511 < a2 )
    return 0LL;
  v4 = *((_DWORD *)a1 + 6);
  v5 = 0;
  v6 = *((_DWORD *)a1 + 7);
  v39 = v6;
  if ( a2 >= 0x200 )
    v5 = a1 == &qword_140389360;
  v7 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v8 = v7 >> 9;
  v9 = (v4 & 4) != 0 ? 16LL : 1LL;
  v45 = v9;
  v43 = v7 / v9;
  if ( (v4 & 2) != 0 )
  {
    v40 = 16;
    v10 = v6;
    if ( v5 )
      v10 = 14LL;
    v11 = MiObtainSystemVa(v8, v10);
  }
  else
  {
    v40 = 1;
    v11 = MiObtainSessionVa(v8, v7 % v9);
  }
  v42 = v11;
  if ( !v11 )
    return 0LL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v44 = (unsigned int)((v12 - a1[2]) >> 3);
  if ( !v5 )
  {
    CurrentThread = KeGetCurrentThread();
    v14 = (ULONG_PTR *)(a1 + 6);
    v46 = (__int64)CurrentThread;
    v15 = (unsigned int)((v12 - a1[2]) >> 3) / v9;
    v16 = a1[1] + (v15 >> 3);
    if ( (a1[3] & 2) != 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(*v14, 0LL);
    }
    v17 = v16;
    v6 = v39;
    v18 = MiSplitBitmapPages(v39, v17, v43 + (v15 & 7));
    v19 = *((_DWORD *)a1 + 6);
    v41 = v18;
    if ( (v19 & 2) != 0 )
    {
      if ( v18 == 1 )
      {
        v20 = (v7 + v44) / v45;
        if ( v20 > *a1 )
          *a1 = v20;
        v21 = v15 & 0xFFFFFFFFFFFFFFC0uLL;
        if ( (v15 & 0x3F) == 0 )
          v21 = v15;
        if ( v21 < a1[10] || (v19 & 8) == 0 )
        {
          a1[10] = v21;
          *((_DWORD *)a1 + 6) = v19 | 8;
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    else
    {
      v28 = *v14;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v28);
      v50 = 0;
      v29 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v28) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v29->ApcState.Process);
      else
        SessionId = -1;
      --v29->SpecialApcDisable;
      v49 = ++v29->AbAllocationRegionCount;
      v31 = ((char)v29->AbEntrySummary | (char)v29->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v32 = !_BitScanReverse((unsigned int *)&v33, v31);
        if ( v32 )
          break;
        v34 = 1 << v33;
        v35 = v33;
        v36 = &v29->LockEntries[v35];
        v31 &= ~v34;
        if ( (v36->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v36->LockState.0 & 1) == 0
          && (*(_QWORD *)&v36->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v28 & 0x7FFFFFFFFFFFFFFCLL)
          && v36->LockState.SessionId == SessionId )
        {
          v36->AcquiredByte &= ~1u;
          if ( v36->LockState.0 )
          {
            if ( v36 )
            {
              v36->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v36->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&v29->LockEntries[v35].TreeNode);
              v50 = 0;
              v50 = v36->BoostBitmap.AllFields & 0x1FFFF;
              v36->BoostBitmap.AllFields &= 0xFFFE0000;
              v36->ThreadLocalFlags &= ~1u;
              v36->LockState.0 = 0LL;
              v37 = ((char *)v36 - (char *)v29 - 800) / 96;
              if ( v49 == 1 )
                v29->AbEntrySummary |= 1 << v37;
              else
                _InterlockedOr8((volatile signed __int8 *)&v29->AbOrphanedEntrySummary, 1 << v37);
              goto LABEL_54;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v29->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v29, v28, SessionId, 0LL);
LABEL_54:
      --v29->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v29, v28, (unsigned int *)&v50);
      v32 = v29->SpecialApcDisable++ == -1;
      if ( v32 && ($B476B70DB57F76B110DA5B9238C3E934 *)v29->ApcState.ApcListHead[0].Flink != &v29->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(v46);
      v6 = v39;
    }
    if ( !v41 )
      goto LABEL_66;
    v2 = a2;
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(v12, v12 + 8 * (v7 - 1), v40, v6) )
  {
    if ( v5 )
      v6 = 14;
LABEL_66:
    MiReturnSystemVa(v42, (__int64)((v7 << 28) + (v12 << 25)) >> 16, v6, 0LL);
    return 0LL;
  }
  _InterlockedExchangeAdd64(a1 + 12, v43);
  _InterlockedExchangeAdd64(a1 + 8, v43);
  if ( (dword_14040010C & 2) != 0 && a1 == &qword_140389360 )
  {
    v38 = qword_140388F20 + ((unsigned __int64)(2 * v44) >> 3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
    if ( !(unsigned int)MiSplitBitmapPages(v39, v38, ((2 * (_BYTE)v44) & 7) + 2 * v43) )
      dword_14040010C &= ~2u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( !v5 && v2 != v7 )
  {
    v22 = (v7 - v2) / v45;
    v23 = (v2 + v44) / v45;
    v24 = v23 & 0x1F;
    v25 = (volatile signed __int32 *)(a1[1] + 4 * (v23 >> 5));
    if ( v22 + (v23 & 0x1F) <= 0x20 )
    {
      if ( v22 == 32 )
        *v25 = 0;
      else
        _InterlockedAnd(v25, ~(((1 << v22) - 1) << v24));
    }
    else
    {
      if ( (v23 & 0x1F) != 0 )
      {
        _InterlockedAnd(v25, ~(((1 << (32 - (v23 & 0x1F))) - 1) << v24));
        v22 -= 32 - (unsigned int)(v23 & 0x1F);
        ++v25;
      }
      if ( v22 >= 0x20 )
      {
        v26 = v22 >> 5;
        v22 += -32LL * (v22 >> 5);
        do
        {
          *v25++ = 0;
          --v26;
        }
        while ( v26 );
      }
      if ( v22 )
        _InterlockedAnd(v25, ~((1 << v22) - 1));
    }
  }
  return v12;
}

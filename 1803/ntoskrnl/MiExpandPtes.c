/*
 * XREFs of MiExpandPtes @ 0x14004A560
 * Callers:
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1400465B8 (MiSplitBitmapPages.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x140049998 (MiObtainSystemVa.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiObtainSessionVa @ 0x1400CB090 (MiObtainSessionVa.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiExpandPtes(__int64 *a1, unsigned __int64 a2)
{
  int v3; // r8d
  BOOL v4; // r12d
  int v5; // r13d
  unsigned __int64 v6; // r15
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  int v9; // edx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  KSPIN_LOCK *v14; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  char v25; // r10
  volatile signed __int32 *v26; // r8
  unsigned __int64 v27; // rcx
  ULONG_PTR v29; // r13
  struct _KTHREAD *v30; // rbx
  unsigned int SessionId; // edx
  unsigned int v32; // r8d
  bool v33; // zf
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  _KLOCK_ENTRY *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rsi
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rdi
  unsigned int v43; // [rsp+30h] [rbp-39h]
  __int64 v44; // [rsp+38h] [rbp-31h]
  int v45; // [rsp+44h] [rbp-25h]
  int v46; // [rsp+48h] [rbp-21h]
  unsigned __int64 v47; // [rsp+50h] [rbp-19h]
  unsigned __int64 v48; // [rsp+58h] [rbp-11h]
  unsigned __int64 v49; // [rsp+60h] [rbp-9h]
  struct _KTHREAD *v50; // [rsp+68h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int8 v53; // [rsp+E0h] [rbp+77h]
  int v54; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( a2 + 511 < a2 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 6);
  v4 = 0;
  v5 = *((_DWORD *)a1 + 7);
  v45 = v5;
  if ( a2 >= 0x200 )
    v4 = a1 == &qword_1403CC5E0;
  v6 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v7 = v6 >> 9;
  v8 = (v3 & 4) != 0 ? 16LL : 1LL;
  v49 = v8;
  v48 = v6 / v8;
  if ( (v3 & 2) != 0 )
  {
    v43 = 16;
    v9 = v5;
    if ( v4 )
      v9 = 14;
    v10 = MiObtainSystemVa(v7, v9);
  }
  else
  {
    v43 = 1;
    v10 = MiObtainSessionVa(v7);
  }
  v47 = v10;
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = (unsigned int)((v12 - a1[2]) >> 3);
  v44 = v13;
  if ( v4 )
  {
    v20 = (unsigned int)((v12 - a1[2]) >> 3);
  }
  else
  {
    v14 = (KSPIN_LOCK *)(a1 + 6);
    CurrentThread = KeGetCurrentThread();
    v50 = CurrentThread;
    v16 = v13 / v8;
    v17 = a1[1] + ((v13 / v8) >> 3);
    if ( (a1[3] & 2) != 0 )
    {
      KeAcquireInStackQueuedSpinLock(v14, &LockHandle);
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(*v14, 0LL);
    }
    v18 = MiSplitBitmapPages(v5, v17, v48 + (v16 & 7));
    v19 = *((_DWORD *)a1 + 6);
    v46 = v18;
    if ( (v19 & 2) != 0 )
    {
      v20 = v44;
      if ( v18 == 1 )
      {
        v21 = (v44 + v6) / v49;
        if ( v21 > *a1 )
          *a1 = v21;
        v22 = v16 & 0xFFFFFFFFFFFFFFC0uLL;
        if ( (v16 & 0x3F) == 0 )
          v22 = v16;
        if ( v22 < a1[9] || (v19 & 8) == 0 )
        {
          a1[9] = v22;
          *((_DWORD *)a1 + 6) = v19 | 8;
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    else
    {
      v29 = a1[6];
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v29);
      v54 = 0;
      v30 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v29) == 1 )
        SessionId = MmGetSessionIdEx(v30->ApcState.Process);
      else
        SessionId = -1;
      --v30->SpecialApcDisable;
      v53 = ++v30->AbAllocationRegionCount;
      v32 = ((char)v30->AbEntrySummary | (char)v30->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v33 = !_BitScanReverse((unsigned int *)&v34, v32);
        if ( v33 )
          break;
        v35 = 1 << v34;
        v36 = v34;
        v37 = &v30->LockEntries[v36];
        v32 &= ~v35;
        if ( (v37->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v37->LockState.0 & 1) == 0
          && (*(_QWORD *)&v37->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v29 & 0x7FFFFFFFFFFFFFFCLL)
          && v37->LockState.SessionId == SessionId )
        {
          v37->AcquiredByte &= ~1u;
          if ( v37->LockState.0 )
          {
            if ( v37 )
            {
              v37->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v37->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&v30->LockEntries[v36].TreeNode);
              v54 = 0;
              v54 = v37->BoostBitmap.AllFields & 0x1FFFF;
              v37->BoostBitmap.AllFields &= 0xFFFE0000;
              v37->ThreadLocalFlags &= ~1u;
              v37->LockState.0 = 0LL;
              v38 = ((char *)v37 - (char *)v30 - 800) / 96;
              if ( v53 == 1 )
                v30->AbEntrySummary |= 1 << v38;
              else
                _InterlockedOr8((volatile signed __int8 *)&v30->AbOrphanedEntrySummary, 1 << v38);
              goto LABEL_55;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v30->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v30, v29, SessionId, 0LL);
LABEL_55:
      --v30->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v30, v29, &v54);
      v33 = v30->SpecialApcDisable++ == -1;
      if ( v33 && ($005F0E83B22994B61E86C72E0CE43C71 *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(v50);
      v5 = v45;
      v20 = v44;
    }
    if ( !v46 )
    {
      v39 = v12 << 25;
      v40 = v47;
LABEL_66:
      MiReturnSystemVa(v40, (__int64)((v6 << 28) + v39) >> 16, v5);
      return 0LL;
    }
    v11 = v47;
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(v12, v12 + 8 * (v6 - 1), v43, v5) )
  {
    if ( v4 )
      v5 = 14;
    v39 = v12 << 25;
    v40 = v11;
    goto LABEL_66;
  }
  _InterlockedExchangeAdd64(a1 + 11, v48);
  _InterlockedExchangeAdd64(a1 + 7, v48);
  if ( (dword_14044B16C & 2) != 0 && a1 == &qword_1403CC5E0 )
  {
    v41 = 2 * v20;
    v42 = qword_1403CC1E0 + (v41 >> 3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
    if ( !(unsigned int)MiSplitBitmapPages(v5, v42, (v41 & 7) + 2 * v48) )
      dword_14044B16C &= ~2u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( !v4 && a2 != v6 )
  {
    v23 = (v6 - a2) / v49;
    v24 = (a2 + v44) / v49;
    v25 = v24 & 0x1F;
    v26 = (volatile signed __int32 *)(a1[1] + 4 * (v24 >> 5));
    if ( v23 + (v24 & 0x1F) <= 0x20 )
    {
      if ( v23 == 32 )
        *v26 = 0;
      else
        _InterlockedAnd(v26, ~(((1 << v23) - 1) << v25));
    }
    else
    {
      if ( (v24 & 0x1F) != 0 )
      {
        _InterlockedAnd(v26, ~(((1 << (32 - (v24 & 0x1F))) - 1) << v25));
        v23 -= 32 - (unsigned int)(v24 & 0x1F);
        ++v26;
      }
      if ( v23 >= 0x20 )
      {
        v27 = v23 >> 5;
        v23 += -32LL * (v23 >> 5);
        do
        {
          *v26++ = 0;
          --v27;
        }
        while ( v27 );
      }
      if ( v23 )
        _InterlockedAnd(v26, ~((1 << v23) - 1));
    }
  }
  return v12;
}

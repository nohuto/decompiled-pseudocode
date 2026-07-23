/*
 * XREFs of MiExpandPtes @ 0x14012793C
 * Callers:
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     MiObtainSessionVa @ 0x140125850 (MiObtainSessionVa.c)
 *     MiSplitBitmapPages @ 0x140127E80 (MiSplitBitmapPages.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x1401282A4 (MiObtainSystemVa.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiExpandPtes(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  int v4; // r9d
  unsigned int v5; // edi
  BOOL v6; // r12d
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR *v15; // rbx
  unsigned __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ecx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  char v25; // r10
  volatile signed __int32 *v26; // r8
  unsigned __int64 v28; // rcx
  ULONG_PTR v29; // r13
  struct _KTHREAD *v30; // rbx
  int SystemRegionType; // eax
  ULONG_PTR BugCheckParameter4; // r11
  int v33; // r10d
  __int64 SessionId; // rdx
  unsigned int v35; // r8d
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int16 v41; // ax
  __int64 v42; // rsi
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rdi
  unsigned int v45; // [rsp+30h] [rbp-50h]
  unsigned int v46; // [rsp+34h] [rbp-4Ch]
  int v47; // [rsp+3Ch] [rbp-44h]
  unsigned __int64 v48; // [rsp+40h] [rbp-40h]
  unsigned __int64 v49; // [rsp+48h] [rbp-38h]
  unsigned __int64 v50; // [rsp+50h] [rbp-30h]
  unsigned __int64 v51; // [rsp+58h] [rbp-28h]
  __int64 v52; // [rsp+60h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+D0h] [rbp+50h]
  int v56; // [rsp+D8h] [rbp+58h] BYREF

  v2 = a2;
  if ( a2 + 511 < a2 )
    return 0LL;
  v4 = *((_DWORD *)a1 + 6);
  v5 = *((_DWORD *)a1 + 7);
  v45 = v5;
  v6 = 0;
  if ( a2 >= 0x200 )
    v6 = a1 == &qword_14036D0A0;
  v7 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v50 = (v4 & 4) != 0 ? 16 : 1;
  v49 = v7 / v50;
  v8 = (unsigned int)(v7 >> 9);
  if ( (v4 & 2) != 0 )
  {
    v46 = 16;
    v9 = v5;
    if ( v6 )
      v9 = 15LL;
    v10 = MiObtainSystemVa(v8, v9);
  }
  else
  {
    v46 = 1;
    v10 = MiObtainSessionVa(v8);
  }
  v48 = v10;
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = (unsigned int)((v12 - a1[2]) >> 3);
  v51 = v13;
  if ( !v6 )
  {
    CurrentThread = KeGetCurrentThread();
    v15 = (ULONG_PTR *)(a1 + 6);
    v52 = (__int64)CurrentThread;
    v16 = v13 / v50;
    v17 = a1[1] + ((v13 / v50) >> 3);
    if ( (a1[3] & 2) != 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
    }
    else
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(*v15, 0LL);
    }
    v18 = v17;
    v5 = v45;
    v19 = MiSplitBitmapPages(v45, v18, v49 + (v16 & 7));
    v20 = *((_DWORD *)a1 + 6);
    v47 = v19;
    if ( (v20 & 2) != 0 )
    {
      if ( v19 == 1 )
      {
        v21 = (v7 + v51) / v50;
        if ( v21 > *a1 )
          *a1 = v21;
        v22 = v16 & 0xFFFFFFFFFFFFFFC0uLL;
        if ( (v16 & 0x3F) == 0 )
          v22 = v16;
        if ( v22 < a1[10] || (v20 & 8) == 0 )
        {
          a1[10] = v22;
          *((_DWORD *)a1 + 6) = v20 | 8;
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    else
    {
      v29 = *v15;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)*v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v29);
      v56 = 0;
      v30 = KeGetCurrentThread();
      SystemRegionType = MiGetSystemRegionType(v29);
      v33 = BugCheckParameter4 + 1;
      if ( SystemRegionType == (_DWORD)BugCheckParameter4 + 1 )
      {
        SessionId = (unsigned int)MmGetSessionIdEx(v30->ApcState.Process);
        v33 = 1;
        BugCheckParameter4 = 0LL;
      }
      else
      {
        SessionId = 0xFFFFFFFFLL;
      }
      --v30->SpecialApcDisable;
      v30->AbAllocationRegionCount += v33;
      AbAllocationRegionCount = v30->AbAllocationRegionCount;
      v35 = ((char)v30->AbEntrySummary | (char)v30->AbOrphanedEntrySummary) ^ 0x3F;
      while ( _BitScanReverse((unsigned int *)&v37, v35) )
      {
        v38 = (__int64)&v30->LockEntries[v37];
        v35 &= ~(v33 << v37);
        if ( ((unsigned __int8)v33 & *(_BYTE *)(v38 + 26)) != 0
          && ((unsigned __int8)*(_DWORD *)(v38 + 32) & (unsigned __int8)v33) == 0
          && (*(_QWORD *)(v38 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v29 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v38 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v38 + 26) &= ~1u;
          if ( *(_QWORD *)(v38 + 32) )
          {
            if ( v38 )
            {
              *(_BYTE *)(v38 + 32) |= 2u;
              if ( ((*(__int64 *)(v38 + 32) < 0) & (unsigned __int8)v33) != 0 )
              {
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v38, SessionId);
                LOBYTE(v33) = 1;
                BugCheckParameter4 = 0LL;
              }
              v56 = BugCheckParameter4;
              v56 = *(_DWORD *)(v38 + 88) & 0x1FFFF;
              *(_DWORD *)(v38 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v38 + 25) &= ~1u;
              *(_QWORD *)(v38 + 32) = BugCheckParameter4;
              v39 = (v38 - (__int64)v30 - 800) / 96;
              if ( AbAllocationRegionCount == (_BYTE)v33 )
                v30->AbEntrySummary |= 1 << v39;
              else
                _InterlockedOr8((volatile signed __int8 *)&v30->AbOrphanedEntrySummary, (_BYTE)v33 << v39);
              goto LABEL_54;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v30->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v30, v29, (unsigned int)SessionId, BugCheckParameter4);
LABEL_54:
      --v30->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(&v30->Header.Lock, v29, (unsigned int *)&v56);
      v41 = v30->SpecialApcDisable + 1;
      v30->SpecialApcDisable = v41;
      if ( !v41 && ($69CD3F157F9F39B6F7113F2231989901 *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
        KiCheckForKernelApcDelivery(v40);
      KiLeaveGuardedRegionUnsafe(v52);
      v5 = v45;
    }
    if ( !v47 )
    {
      v42 = v12 << 25;
      v43 = v48;
LABEL_65:
      MiReturnSystemVa(v43, (__int64)((v7 << 28) + v42) >> 16, v5, 0LL);
      return 0LL;
    }
    v2 = a2;
    v11 = v48;
  }
  if ( !(unsigned int)MiMakeZeroedPageTables(v12, v12 + 8 * (v7 - 1), v46, v5) )
  {
    if ( v6 )
      v5 = 15;
    v42 = v12 << 25;
    v43 = v11;
    goto LABEL_65;
  }
  _InterlockedExchangeAdd64(a1 + 12, v49);
  _InterlockedExchangeAdd64(a1 + 8, v49);
  if ( (dword_1403E310C & 2) != 0 && a1 == &qword_14036D0A0 )
  {
    v44 = qword_14036CD20 + ((2 * v51) >> 3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 6, &LockHandle);
    if ( !(unsigned int)MiSplitBitmapPages(v45, v44, ((2 * (_BYTE)v51) & 7) + 2 * v49) )
      dword_1403E310C &= ~2u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( !v6 && v2 != v7 )
  {
    v23 = (v7 - v2) / v50;
    v24 = (v2 + v51) / v50;
    v25 = v24 & 0x1F;
    v26 = (volatile signed __int32 *)(a1[1] + 4 * (v24 >> 5));
    if ( v23 + (v24 & 0x1F) > 0x20 )
    {
      if ( (v24 & 0x1F) != 0 )
      {
        _InterlockedAnd(v26, ~(((1 << (32 - (v24 & 0x1F))) - 1) << v25));
        v23 -= 32 - (unsigned int)(v24 & 0x1F);
        ++v26;
      }
      if ( v23 >= 0x20 )
      {
        v28 = v23 >> 5;
        v23 += -32LL * (v23 >> 5);
        do
        {
          *v26++ = 0;
          --v28;
        }
        while ( v28 );
      }
      if ( v23 )
        _InterlockedAnd(v26, ~((1 << v23) - 1));
    }
    else if ( v23 == 32 )
    {
      *v26 = 0;
    }
    else
    {
      _InterlockedAnd(v26, ~(((1 << v23) - 1) << v25));
    }
  }
  return v12;
}

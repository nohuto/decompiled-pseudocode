/*
 * XREFs of MiCoalesceFreeLargePages @ 0x1400E89A0
 * Callers:
 *     MiProcessLargeCoalesceList @ 0x14006FDBC (MiProcessLargeCoalesceList.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiConstructNewLargeFreePage @ 0x1400A3550 (MiConstructNewLargeFreePage.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400E7480 (MiUnlinkNodeLargePageHelper.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 */

__int64 __fastcall MiCoalesceFreeLargePages(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v4; // rbx
  signed __int64 *v7; // r13
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r11
  ULONG_PTR v11; // r9
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r10d
  __int64 v17; // rbx
  unsigned __int8 v18; // dl
  __int64 v19; // rsi
  unsigned int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rbx
  _QWORD *v23; // r13
  unsigned int i; // edx
  char v25; // r15
  __int64 v26; // rsi
  unsigned int j; // r14d
  __int64 v28; // rcx
  _QWORD *v29; // rax
  char v30; // al
  __int64 k; // rcx
  ULONG_PTR v32; // rcx
  struct _KTHREAD *v33; // rcx
  unsigned __int8 v35; // al
  unsigned int v36; // [rsp+30h] [rbp-88h]
  __int64 v37; // [rsp+38h] [rbp-80h]
  struct _KTHREAD *v38; // [rsp+40h] [rbp-78h]
  unsigned __int64 v39; // [rsp+48h] [rbp-70h]
  signed __int64 *BugCheckParameter2; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int8 v42; // [rsp+C0h] [rbp+8h]
  char v45; // [rsp+D8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  v45 = 0;
  v38 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  v7 = (signed __int64 *)(a1 + 184);
  BugCheckParameter2 = (signed __int64 *)(a1 + 184);
  ExAcquirePushLockSharedEx(a1 + 184, 0LL);
  v36 = v4 - 1;
  v8 = MiLargePageSizes[v4];
  v39 = MiLargePageSizes[(unsigned int)(v4 - 1)];
  v9 = MiLargePageContainingFrames[v4];
  v10 = 48 * a2 - 0x58000000000LL;
  v37 = v10;
  v11 = a2;
  v12 = v39 / v8;
  if ( v39 / v8 )
  {
    do
    {
      if ( !(unsigned int)MiIsPfnInline(v11)
        || (*(_BYTE *)(v14 + 34) & 7u) > 1
        || (v13 & *(_QWORD *)(v14 + 40)) != v9
        || *(__int64 *)(v14 + 8) >= 0
        || *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL)) != a1 )
      {
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v7);
        KeAbPostRelease((ULONG_PTR)v7);
        v33 = CurrentThread;
        return KiLeaveGuardedRegionUnsafe(v33);
      }
      v17 = 48 * v8;
      v11 = v8 + v15;
    }
    while ( (unsigned int)(v16 + 1) < v12 );
  }
  else
  {
    v17 = 48 * v8;
  }
  v18 = 17;
  v42 = 17;
  v19 = v10;
  v20 = 0;
  if ( !v12 )
  {
LABEL_16:
    v21 = *(_QWORD *)(v10 + 40) >> 58;
    v22 = v10;
    LockHandle.LockQueue.Next = 0LL;
    v23 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 1984 * v21);
    LockHandle.LockQueue.Lock = v23 + 241;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v23 + 241);
    for ( i = 0; i < v12; v22 += 48 * v8 )
    {
      if ( (*(_BYTE *)(v22 + 34) & 7u) > 1 )
        break;
      if ( (*(_QWORD *)(v22 + 40) & 0xFFFFFFFFFLL) != v9 )
        break;
      if ( *(__int64 *)(v22 + 8) >= 0 )
        break;
      if ( *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL)) != a1 )
        break;
      ++i;
    }
    v25 = 0;
    if ( i == v12 )
    {
      v26 = v37;
      v45 = 10;
      for ( j = 0; j < v12; v26 += 48 * v8 )
      {
        v28 = *(_QWORD *)v26;
        if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 || (v29 = *(_QWORD **)(v26 + 8), *v29 != v26) )
          __fastfail(3u);
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        MiUnlinkNodeLargePageHelper(v23, v26, a3, (*(_QWORD *)(v26 + 40) >> 36) & 3, 10);
        v30 = *(_BYTE *)(v26 + 34);
        if ( (v30 & 7) != 0 )
          v25 = 1;
        ++j;
        *(_BYTE *)(v26 + 34) = v30 & 0xF8 | 5;
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    for ( k = 48 * (v39 + a2 - v8) - 0x58000000000LL; k != v37; k -= 48 * v8 )
      _InterlockedAnd64((volatile signed __int64 *)(k + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(k + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v45 & 2) != 0 )
      MiConstructNewLargeFreePage(a2, v36, v25);
    __writecr8(v42);
    if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(BugCheckParameter2);
    v32 = (ULONG_PTR)BugCheckParameter2;
    goto LABEL_36;
  }
  while ( 1 )
  {
    if ( v19 == v10 )
    {
      v35 = MiLockPageInline(v19);
      v10 = v37;
      v18 = v35;
      v42 = v35;
      goto LABEL_11;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
      break;
LABEL_11:
    if ( (*(_BYTE *)(v19 + 34) & 7u) > 1
      || (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFLL) != v9
      || *(__int64 *)(v19 + 8) >= 0
      || *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v19 + 40) >> 40) & 0x3FFLL)) != a1 )
    {
      for ( ; v19 != v10; v19 -= v17 )
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_41;
    }
    ++v20;
    v19 += v17;
    if ( v20 >= v12 )
      goto LABEL_16;
  }
  for ( v19 -= v17; v19 != v10; v19 -= v17 )
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_41:
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v18);
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  v32 = (ULONG_PTR)v7;
LABEL_36:
  KeAbPostRelease(v32);
  v33 = v38;
  return KiLeaveGuardedRegionUnsafe(v33);
}

/*
 * XREFs of MiZeroLargePage @ 0x1400B5CC0
 * Callers:
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiZeroLargePages @ 0x14015C30C (MiZeroLargePages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLargePageFreeToZero @ 0x1400B3450 (MiLargePageFreeToZero.c)
 *     MiReleaseLargeZeroingVa @ 0x1400B3778 (MiReleaseLargeZeroingVa.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1401852C0 (KeZeroPages.c)
 *     HvlNotifyPageHeat @ 0x140269C18 (HvlNotifyPageHeat.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroLargePage(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r13
  unsigned __int64 v7; // rcx
  __int64 v8; // r12
  int v9; // ecx
  int v10; // edx
  int v11; // r12d
  unsigned __int64 v12; // r14
  struct _KTHREAD *CurrentThread; // r8
  int v14; // eax
  char v15; // r13
  BOOL v16; // ebx
  int v17; // eax
  __int64 v18; // r8
  _QWORD *v19; // rdx
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r14
  __int64 v22; // rbx
  int v23; // [rsp+28h] [rbp-B0h]
  int v25; // [rsp+30h] [rbp-A8h]
  unsigned int v26; // [rsp+38h] [rbp-A0h]
  __int64 v27; // [rsp+40h] [rbp-98h] BYREF
  __int64 v28; // [rsp+48h] [rbp-90h]
  __int64 v29; // [rsp+50h] [rbp-88h]
  PVOID P; // [rsp+58h] [rbp-80h]
  struct _KTHREAD *v31; // [rsp+60h] [rbp-78h]
  __int64 v32; // [rsp+70h] [rbp-68h]
  __int64 CurrentIrql; // [rsp+78h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-58h] BYREF
  int v35; // [rsp+98h] [rbp-40h]
  int v36; // [rsp+9Ch] [rbp-3Ch]
  unsigned __int64 v37; // [rsp+A0h] [rbp-38h] BYREF

  v32 = a2;
  P = (PVOID)a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0LL;
  v28 = 0LL;
  v4 = *(_QWORD *)(a1 + 72);
  v31 = (struct _KTHREAD *)v4;
  v5 = *(unsigned int *)(a1 + 64);
  v26 = *(_DWORD *)(a1 + 64);
  v29 = MiLargePageSizes[v5];
  v27 = v29;
  v6 = a1;
  v7 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 104) == 1 )
  {
    v8 = 512LL;
    v29 = 512LL;
    v27 = 512LL;
    if ( !(_DWORD)v5 )
    {
      v3 = *(_QWORD *)(a1 + 112);
      v28 = v3;
      v7 = *(_QWORD *)(v3 + 176) + ((unsigned __int64)*(unsigned __int16 *)(a1 + 106) << 21);
      v6 = v3;
    }
  }
  else
  {
    v8 = v29;
  }
  KeZeroPages(v7, v8 << 12);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 168);
    KeAcquireInStackQueuedSpinLock(
      (PKSPIN_LOCK)(qword_140380230 + 2152 + 2184LL * *(unsigned int *)(v3 + 184)),
      &LockHandle);
  }
  P = 0LL;
  v9 = 1;
  v23 = 1;
  LODWORD(v28) = 1;
  v10 = 1;
  v25 = 1;
  v11 = 0;
  v12 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v31 = CurrentThread;
  if ( (HvlEnlightenments & 0x200000) != 0
    && HvlMemoryHeatHintEnabled
    && !CurrentThread->Priority
    && !*(_BYTE *)(a1 + 104)
    && !*(_BYTE *)(v6 + 68) )
  {
    v11 = 1;
    KeSetActualBasePriorityThread(CurrentThread, 1LL);
    --v31->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v32 + 224, 0LL);
    v9 = 1;
    v10 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LODWORD(v27) = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v27);
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) );
    v9 = 1;
    v10 = 1;
  }
  if ( v3 )
  {
    v9 = 0;
    v23 = 0;
    if ( *(_BYTE *)(v6 + 68) != 1 )
    {
      if ( ++*(_DWORD *)(v3 + 192) == 512 )
      {
        v9 = 1;
        v23 = 1;
      }
      else
      {
        v10 = 0;
        v25 = 0;
      }
    }
    v14 = v9;
    if ( v10 == 1 )
    {
      v17 = *(_DWORD *)(v3 + 188);
      if ( v17 == 1 )
      {
        v18 = *(_QWORD *)(v3 + 72);
        v19 = *(_QWORD **)(v3 + 80);
        if ( *(_QWORD *)(v18 + 8) != v3 + 72 || *v19 != v3 + 72 )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        v14 = 1;
        P = (PVOID)v3;
      }
      else
      {
        *(_DWORD *)(v3 + 188) = v17 - 1;
        v14 = v9;
      }
    }
  }
  else
  {
    v14 = v28;
  }
  v15 = *(_BYTE *)(v6 + 68);
  if ( v14 == 1 )
  {
    MiReleaseLargeZeroingVa(a1);
    v9 = v23;
  }
  if ( v3 && v25 == 1 )
    *(_QWORD *)(a1 + 112) = 0LL;
  if ( v9 != 1 || v15 == 1 )
  {
    v16 = 0;
  }
  else
  {
    v12 = (v4 + 0x58000000000LL) / 48;
    v16 = v11 != 0;
    MiLargePageFreeToZero(v12, v26);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8((unsigned __int8)CurrentIrql);
  if ( v3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v16 )
  {
    v35 = 0;
    v36 = 1;
    v20 = v12 << 12;
    if ( v29 == 16 )
    {
      v21 = v20 & 0xFFFFFFFFFFFFFC00uLL | 0xF;
    }
    else if ( v29 == 512 )
    {
      v21 = v20 & 0xFFFFFFFFFFFFF3FFuLL | 0x400;
    }
    else
    {
      v21 = v20 & 0xFFFFFFFFFFFFF3FFuLL | 0x800;
    }
    v37 = v21;
    HvlNotifyPageHeat(0LL, 1LL, &v37);
  }
  if ( v11 )
  {
    v22 = v32;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 224), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v22 + 224);
    KeAbPostRelease(v22 + 224);
    KiLeaveGuardedRegionUnsafe(v31);
    KeSetActualBasePriorityThread(v31, 0LL);
  }
}

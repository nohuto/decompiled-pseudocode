/*
 * XREFs of MiModifiedPageWriter @ 0x140162A30
 * Callers:
 *     <none>
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x140029F68 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14002A0CC (MiUseLowIoPriorityForModifiedPages.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeQueryPriorityThread @ 0x140054910 (KeQueryPriorityThread.c)
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 *     MiInitializePagefileBitmapsCache @ 0x14015988C (MiInitializePagefileBitmapsCache.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiFreeModifiedReservations @ 0x14021A050 (MiFreeModifiedReservations.c)
 */

LONG __fastcall MiModifiedPageWriter(__int64 a1, __int64 a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KEVENT *v6; // r15
  struct _KEVENT *v7; // rsi
  struct _KEVENT *v8; // r14
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r13
  signed __int32 v12; // r11d
  int v13; // eax
  _SINGLE_LIST_ENTRY *v14; // r8
  __int64 v15; // r9
  int v16; // r15d
  int v17; // r14d
  __int64 v18; // rsi
  _QWORD *v19; // rax
  unsigned int v20; // edx
  __int64 *v21; // r12
  unsigned int v22; // r11d
  unsigned int v23; // r10d
  __int64 v24; // rdx
  char v25; // al
  unsigned int v26; // r9d
  __int64 v27; // r8
  __int64 **v28; // rcx
  __int64 **v29; // rax
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned __int64 v32; // r12
  __int64 *v33; // r14
  __int64 v34; // r15
  __int64 v35; // rsi
  char v36; // al
  _SINGLE_LIST_ENTRY *v37; // r8
  __int64 v38; // r9
  _SINGLE_LIST_ENTRY *v39; // r8
  __int64 v40; // r9
  unsigned int v41; // eax
  _QWORD *v42; // rsi
  struct _KTHREAD *v43; // r13
  __int64 v44; // r14
  __int64 v45; // r12
  _QWORD *v46; // r15
  signed __int32 v48[8]; // [rsp+8h] [rbp-100h] BYREF
  KPROCESSOR_MODE WaitMode; // [rsp+28h] [rbp-E0h]
  BOOLEAN Alertable[8]; // [rsp+30h] [rbp-D8h]
  PLARGE_INTEGER Timeout; // [rsp+38h] [rbp-D0h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+40h] [rbp-C8h]
  struct _KTHREAD *v53; // [rsp+48h] [rbp-C0h]
  __int64 v54; // [rsp+50h] [rbp-B8h]
  _QWORD *v55; // [rsp+58h] [rbp-B0h]
  PVOID Object[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-98h] BYREF
  struct _KWAIT_BLOCK v58; // [rsp+88h] [rbp-80h] BYREF
  PVOID v59[6]; // [rsp+E8h] [rbp-20h] BYREF
  struct _KWAIT_BLOCK v60; // [rsp+118h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 976) = CurrentThread;
  v53 = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  LODWORD(v54) = KeSetActualBasePriorityThread((__int64)CurrentThread, 18, a3, a4);
  *(_QWORD *)(a1 + 872) = 0LL;
  Object[0] = (PVOID)(a1 + 136);
  Object[1] = (PVOID)(a1 + 768);
  v6 = (struct _KEVENT *)(a1 + 912);
  v59[0] = (PVOID)(a1 + 136);
  v59[2] = (PVOID)(a1 + 952);
  v7 = (struct _KEVENT *)(a1 + 728);
  v59[1] = (PVOID)(a1 + 912);
  WaitBlockArray = &v58;
  v8 = (struct _KEVENT *)(a1 + 1040);
  Timeout = 0LL;
  Alertable[0] = 0;
  WaitMode = 0;
  v59[3] = (PVOID)(a1 + 728);
  v59[4] = (PVOID)(a1 + 1040);
  *(_DWORD *)(a1 + 880) = 0;
  if ( KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, WaitMode, Alertable[0], Timeout, WaitBlockArray) )
  {
    while ( !*(_DWORD *)(a1 + 140) )
    {
      if ( *(_QWORD *)(a1 + 6256) )
      {
        --CurrentThread->SpecialApcDisable;
        v21 = (__int64 *)(a1 + 936);
        if ( (__int64 *)*v21 == v21 )
        {
          *(_BYTE *)(a1 + 705) = 1;
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          if ( !KeWaitForMultipleObjects(5u, v59, WaitAny, WrPageOut, 0, 0, 0LL, &v60) )
            break;
          --CurrentThread->SpecialApcDisable;
          *(_BYTE *)(a1 + 705) = 0;
        }
        if ( *(_DWORD *)(a1 + 732) )
        {
          KeResetEvent(v7);
          if ( *(_DWORD *)(a1 + 724) )
            IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
        }
        if ( *(_DWORD *)(a1 + 916) )
        {
          KeResetEvent(v6);
          _InterlockedOr(v48, 0);
          v22 = *(_DWORD *)(a1 + 5592);
          v23 = 0;
          if ( v22 )
          {
            v24 = a1 + 5600;
            do
            {
              v25 = *(_BYTE *)(*(_QWORD *)v24 + 206LL);
              if ( (v25 & 1) != 0 )
              {
                v26 = 0;
                *(_BYTE *)(*(_QWORD *)v24 + 206LL) = v25 & 0xFE;
                v27 = 64LL;
                do
                {
                  v28 = *(__int64 ***)(v27 + *(_QWORD *)v24);
                  if ( v28 && *v28 == (__int64 *)2575857425LL )
                  {
                    v29 = *(__int64 ***)(a1 + 944);
                    if ( *v29 != v21 )
                      __fastfail(3u);
                    *v28 = v21;
                    v28[1] = (__int64 *)v29;
                    *v29 = (__int64 *)v28;
                    *(_QWORD *)(a1 + 944) = v28;
                  }
                  ++v26;
                  v27 += 8LL;
                }
                while ( v26 < 2 );
              }
              ++v23;
              v24 += 8LL;
            }
            while ( v23 < v22 );
          }
        }
        if ( *(_DWORD *)(a1 + 1044) )
        {
          KeResetEvent(v8);
          MiStoreUpdateMemoryConditions(a1);
        }
        v9 = *(_QWORD *)(a1 + 5824);
        v10 = *(_QWORD *)(a1 + 6256);
        v11 = *(_QWORD *)(a1 + 2496);
        if ( v9 < 0 )
          v9 = 0LL;
        if ( *(_QWORD *)(a1 + 864) >= 0x800uLL
          || v10 <= *(_QWORD *)(a1 + 5584) >> 2 && v10 <= (unsigned __int64)v9 >> 2
          || (v30 = *(_DWORD *)(a1 + 880), v30 < 0x40)
          || *(_DWORD *)(a1 + 872) / v30 >= (unsigned int)dword_1403E3124 >> 3 )
        {
          v12 = 1;
        }
        else
        {
          v31 = *(_DWORD *)(a1 + 5592);
          v12 = 1;
          v32 = 3 * (v10 >> 2);
          if ( v31 )
          {
            v33 = (__int64 *)(a1 + 5600);
            v34 = v31;
            do
            {
              v35 = *v33;
              if ( (*(_BYTE *)(*v33 + 204) & 0x60) == 0 )
              {
                if ( v11 > v32 )
                {
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v35 + 232), &LockHandle);
                  v36 = *(_BYTE *)(v35 + 207);
                  if ( (v36 & 1) == 0 )
                  {
                    *(_BYTE *)(v35 + 207) = v36 | 1;
                    MiInitializePagefileBitmapsCache(v35);
                    *(_DWORD *)(v35 + 124) = dword_1403E3124;
                  }
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                  __writecr8(LockHandle.OldIrql);
                }
                MiFreeModifiedReservations(v35, 0LL);
                v12 = 1;
              }
              ++v33;
              --v34;
            }
            while ( v34 );
            CurrentThread = v53;
            v7 = (struct _KEVENT *)(a1 + 728);
            v6 = (struct _KEVENT *)(a1 + 912);
          }
          ++*(_DWORD *)(a1 + 888);
          if ( v11 > v32 )
          {
            *(_QWORD *)(a1 + 896) = KiQueryUnbiasedInterruptTime();
            _InterlockedOr(v48, 0);
            *(_WORD *)(a1 + 908) |= v12;
            *(_DWORD *)(a1 + 884) += v12;
          }
          *(_DWORD *)(a1 + 880) = 0;
          v21 = (__int64 *)(a1 + 936);
          *(_QWORD *)(a1 + 872) = 0LL;
        }
        if ( (__int64 *)*v21 == v21 )
        {
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          goto LABEL_22;
        }
        v13 = *(_DWORD *)(a1 + 1184);
        if ( ((unsigned __int8)v13 & (unsigned __int8)v12) != 0
          && (v13 & 0xFFFFFFFE) == 0
          && v12 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1184), 0, v12) )
        {
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          KeResetEvent((PRKEVENT)(a1 + 768));
        }
        else
        {
          if ( !MiUseLowIoPriorityForModifiedPages(a1) )
          {
            if ( *(_DWORD *)(a1 + 724) )
              IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
            v16 = 2;
            v17 = -1;
            goto LABEL_19;
          }
          if ( *(_QWORD *)(a1 + 6256) >= *(_QWORD *)(a1 + 760) )
          {
            v16 = 0;
            *(_DWORD *)(a1 + 752) = 4;
            v17 = KeSetActualBasePriorityThread((__int64)CurrentThread, 4, v14, v15);
LABEL_19:
            v18 = *v21;
            v19 = *(_QWORD **)*v21;
            if ( *(__int64 **)(*v21 + 8) != v21 || v19[1] != v18 )
              __fastfail(3u);
            *v21 = (__int64)v19;
            v19[1] = v21;
            v20 = (4 * v16) | *(_DWORD *)(v18 + 40) & 0xFFFFFFE3;
            *(_QWORD *)v18 = 97LL;
            *(_DWORD *)(v18 + 40) = v20;
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            MiGatherPagefilePages(v18);
            v7 = (struct _KEVENT *)(a1 + 728);
            v6 = (struct _KEVENT *)(a1 + 912);
            if ( v17 != -1 )
            {
              if ( KeQueryPriorityThread(CurrentThread) != 18 )
                KeSetActualBasePriorityThread((__int64)CurrentThread, v17, v37, v38);
              *(_DWORD *)(a1 + 752) = 18;
              v7 = (struct _KEVENT *)(a1 + 728);
              v6 = (struct _KEVENT *)(a1 + 912);
            }
            goto LABEL_22;
          }
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
      }
      *(_QWORD *)(a1 + 872) = 0LL;
      *(_DWORD *)(a1 + 880) = 0;
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &v58) )
        break;
LABEL_22:
      v8 = (struct _KEVENT *)(a1 + 1040);
    }
  }
  if ( *(_DWORD *)(a1 + 724) )
    IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 984));
  v41 = *(_DWORD *)(a1 + 5592);
  if ( v41 )
  {
    v42 = (_QWORD *)(a1 + 5600);
    v53 = (struct _KTHREAD *)*(unsigned int *)(a1 + 5592);
    v43 = (struct _KTHREAD *)v41;
    v55 = (_QWORD *)(a1 + 5600);
    do
    {
      if ( *v42 )
      {
        --CurrentThread->SpecialApcDisable;
        v44 = 64LL;
        v45 = 2LL;
        do
        {
          v46 = *(_QWORD **)(v44 + *v42);
          if ( v46 )
          {
            while ( *v46 == 97LL )
            {
              *(_BYTE *)(a1 + 705) = 1;
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              KeWaitForSingleObject((PVOID)(a1 + 952), WrPageOut, 0, 0, 0LL);
              --CurrentThread->SpecialApcDisable;
            }
            v42 = v55;
          }
          v44 += 8LL;
          --v45;
        }
        while ( v45 );
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v43 = v53;
      }
      ++v42;
      v43 = (struct _KTHREAD *)((char *)v43 - 1);
      v55 = v42;
      v53 = v43;
    }
    while ( v43 );
  }
  KeSetActualBasePriorityThread((__int64)CurrentThread, v54, v39, v40);
  return KeSetEvent((PRKEVENT)(a1 + 792), 0, 0);
}

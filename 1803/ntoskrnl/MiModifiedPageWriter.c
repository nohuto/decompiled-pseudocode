/*
 * XREFs of MiModifiedPageWriter @ 0x14017CFC0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     MiStoreUpdateMemoryConditions @ 0x140081410 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14008158C (MiUseLowIoPriorityForModifiedPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoBoostThreadIoPriority @ 0x140089520 (IoBoostThreadIoPriority.c)
 *     KeQueryPriorityThread @ 0x140091160 (KeQueryPriorityThread.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1400D0C58 (MiStoreCheckCompleteWriteBatch.c)
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInitializePagefileBitmapsCache @ 0x14017DFE4 (MiInitializePagefileBitmapsCache.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiFreeModifiedReservations @ 0x14025F79C (MiFreeModifiedReservations.c)
 */

LONG __fastcall MiModifiedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KEVENT *v3; // r12
  struct _KEVENT *v4; // rsi
  struct _KEVENT *v5; // r14
  NTSTATUS v6; // eax
  __int64 *v7; // r15
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r13
  signed __int32 v10; // r11d
  int v11; // eax
  unsigned int v12; // r14d
  int v13; // ecx
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // r11d
  unsigned int v18; // r10d
  __int64 v19; // rdx
  char v20; // al
  unsigned int v21; // r9d
  __int64 v22; // r8
  __int64 **v23; // rcx
  __int64 **v24; // rax
  unsigned __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned __int64 v28; // r12
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // rsi
  char v32; // al
  unsigned int v33; // eax
  _QWORD *v34; // rsi
  struct _KTHREAD *v35; // r13
  __int64 v36; // r14
  __int64 v37; // r12
  _QWORD *v38; // r15
  signed __int32 v40[8]; // [rsp+8h] [rbp-100h] BYREF
  struct _KTHREAD *v41; // [rsp+48h] [rbp-C0h]
  __int64 v42; // [rsp+50h] [rbp-B8h]
  _QWORD *v43; // [rsp+58h] [rbp-B0h]
  PVOID Object[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-98h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+88h] [rbp-80h] BYREF
  PVOID v47[6]; // [rsp+E8h] [rbp-20h] BYREF
  struct _KWAIT_BLOCK v48; // [rsp+118h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 928) = CurrentThread;
  v41 = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  LODWORD(v42) = KeSetActualBasePriorityThread((__int64)CurrentThread, 18LL);
  Object[0] = (PVOID)(a1 + 104);
  Object[1] = (PVOID)(a1 + 720);
  v3 = (struct _KEVENT *)(a1 + 864);
  v47[0] = (PVOID)(a1 + 104);
  v4 = (struct _KEVENT *)(a1 + 680);
  v47[2] = (PVOID)(a1 + 904);
  v5 = (struct _KEVENT *)(a1 + 992);
  v47[1] = (PVOID)(a1 + 864);
  v47[3] = (PVOID)(a1 + 680);
  v47[4] = (PVOID)(a1 + 992);
  *(_BYTE *)(a1 + 658) = 1;
LABEL_2:
  *(_QWORD *)(a1 + 824) = 0LL;
  *(_DWORD *)(a1 + 832) = 0;
  *(_BYTE *)(a1 + 658) = 0;
  MiStoreCheckCompleteWriteBatch(a1);
  v6 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrPageOut, 0, 0, 0LL, &WaitBlockArray);
  *(_BYTE *)(a1 + 658) = 1;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 108) )
        goto LABEL_71;
      if ( !*(_QWORD *)(a1 + 7536) )
        goto LABEL_2;
      --CurrentThread->SpecialApcDisable;
      MiStoreCheckCompleteWriteBatch(a1);
      v7 = (__int64 *)(a1 + 888);
      if ( (__int64 *)*v7 == v7 )
      {
        *(_BYTE *)(a1 + 657) = 1;
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( !KeWaitForMultipleObjects(5u, v47, WaitAny, WrPageOut, 0, 0, 0LL, &v48) )
          goto LABEL_71;
        --CurrentThread->SpecialApcDisable;
        *(_BYTE *)(a1 + 657) = 0;
      }
      if ( *(_DWORD *)(a1 + 684) )
      {
        KeResetEvent(v4);
        if ( *(_DWORD *)(a1 + 676) )
          IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
      }
      if ( *(_DWORD *)(a1 + 868) )
      {
        KeResetEvent(v3);
        _InterlockedOr(v40, 0);
        v17 = *(_DWORD *)(a1 + 6872);
        v18 = 0;
        if ( v17 )
        {
          v19 = a1 + 6880;
          do
          {
            v20 = *(_BYTE *)(*(_QWORD *)v19 + 206LL);
            if ( (v20 & 1) != 0 )
            {
              v21 = 0;
              *(_BYTE *)(*(_QWORD *)v19 + 206LL) = v20 & 0xFE;
              v22 = 64LL;
              do
              {
                v23 = *(__int64 ***)(v22 + *(_QWORD *)v19);
                if ( v23 && *v23 == (__int64 *)2575857425LL )
                {
                  v24 = *(__int64 ***)(a1 + 896);
                  if ( *v24 != v7 )
                    __fastfail(3u);
                  *v23 = v7;
                  v23[1] = (__int64 *)v24;
                  *v24 = (__int64 *)v23;
                  *(_QWORD *)(a1 + 896) = v23;
                }
                ++v21;
                v22 += 8LL;
              }
              while ( v21 < 2 );
            }
            ++v18;
            v19 += 8LL;
          }
          while ( v18 < v17 );
        }
      }
      if ( *(_DWORD *)(a1 + 996) )
      {
        KeResetEvent(v5);
        MiStoreUpdateMemoryConditions(a1);
      }
      v8 = *(_QWORD *)(a1 + 7536);
      v9 = *(_QWORD *)(a1 + 2688);
      if ( *(_QWORD *)(a1 + 816) >= 0x800uLL )
        goto LABEL_15;
      if ( v8 <= *(_QWORD *)(a1 + 6864) >> 2 )
      {
        v25 = 0LL;
        if ( *(__int64 *)(a1 + 7104) >= 0 )
          v25 = *(_QWORD *)(a1 + 7104);
        if ( v8 <= v25 >> 2 )
          goto LABEL_15;
      }
      v26 = *(_DWORD *)(a1 + 832);
      if ( v26 < 0x40 || *(_DWORD *)(a1 + 824) / v26 >= (unsigned int)dword_14044B180 >> 3 )
      {
LABEL_15:
        v10 = 1;
      }
      else
      {
        v27 = *(_DWORD *)(a1 + 6872);
        v10 = 1;
        v28 = 3 * (v8 >> 2);
        if ( v27 )
        {
          v29 = a1 + 6880;
          v30 = v27;
          do
          {
            v31 = *(_QWORD *)v29;
            if ( (*(_BYTE *)(*(_QWORD *)v29 + 204LL) & 0x60) == 0 )
            {
              if ( v9 > v28 )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v31 + 232), &LockHandle);
                v32 = *(_BYTE *)(v31 + 207);
                if ( (v32 & 1) == 0 )
                {
                  *(_BYTE *)(v31 + 207) = v32 | 1;
                  MiInitializePagefileBitmapsCache(v31);
                  *(_DWORD *)(v31 + 124) = dword_14044B180;
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                __writecr8(LockHandle.OldIrql);
              }
              MiFreeModifiedReservations(v31, 0LL);
              v10 = 1;
            }
            v29 += 8LL;
            --v30;
          }
          while ( v30 );
          CurrentThread = v41;
          v7 = (__int64 *)(a1 + 888);
          v4 = (struct _KEVENT *)(a1 + 680);
        }
        ++*(_DWORD *)(a1 + 840);
        if ( v9 > v28 )
        {
          *(_QWORD *)(a1 + 848) = KiQueryUnbiasedInterruptTime();
          _InterlockedOr(v40, 0);
          *(_WORD *)(a1 + 860) |= v10;
          *(_DWORD *)(a1 + 836) += v10;
        }
        *(_DWORD *)(a1 + 832) = 0;
        v3 = (struct _KEVENT *)(a1 + 864);
        *(_QWORD *)(a1 + 824) = 0LL;
      }
      if ( (__int64 *)*v7 == v7 )
        break;
      v11 = *(_DWORD *)(a1 + 1136);
      if ( ((unsigned __int8)v11 & (unsigned __int8)v10) != 0
        && (v11 & 0xFFFFFFFE) == 0
        && v10 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1136), 0, v10) )
      {
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        KeResetEvent((PRKEVENT)(a1 + 720));
LABEL_45:
        v5 = (struct _KEVENT *)(a1 + 992);
        goto LABEL_2;
      }
      if ( MiUseLowIoPriorityForModifiedPages(a1) )
      {
        if ( *(_QWORD *)(a1 + 7536) < *(_QWORD *)(a1 + 712) )
        {
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          goto LABEL_45;
        }
        *(_DWORD *)(a1 + 704) = 4;
        v12 = KeSetActualBasePriorityThread((__int64)CurrentThread, 4LL);
        v13 = 0;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 676) )
          IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
        v12 = -1;
        v13 = 8;
      }
      v14 = *v7;
      if ( *(__int64 **)(*v7 + 8) != v7 || (v15 = *(_QWORD *)v14, *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14) )
        __fastfail(3u);
      *v7 = v15;
      *(_QWORD *)(v15 + 8) = v7;
      v16 = *(_DWORD *)(v14 + 40) & 0xFFFFFFE3;
      *(_QWORD *)v14 = 97LL;
      *(_DWORD *)(v14 + 40) = v13 | v16;
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      *(_QWORD *)(v14 + 200) = v14 + 208;
      MiGatherPagefilePages(v14);
      v4 = (struct _KEVENT *)(a1 + 680);
      if ( v12 == -1 )
      {
        v5 = (struct _KEVENT *)(a1 + 992);
      }
      else
      {
        if ( KeQueryPriorityThread(CurrentThread) != 18 )
          KeSetActualBasePriorityThread((__int64)CurrentThread, v12);
        *(_DWORD *)(a1 + 704) = 18;
        v4 = (struct _KEVENT *)(a1 + 680);
LABEL_28:
        v5 = (struct _KEVENT *)(a1 + 992);
      }
    }
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    goto LABEL_28;
  }
LABEL_71:
  if ( *(_DWORD *)(a1 + 676) )
    IoBoostThreadIoPriority((KSPIN_LOCK *)CurrentThread, 2, 0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 936));
  v33 = *(_DWORD *)(a1 + 6872);
  if ( v33 )
  {
    v34 = (_QWORD *)(a1 + 6880);
    v41 = (struct _KTHREAD *)*(unsigned int *)(a1 + 6872);
    v43 = (_QWORD *)(a1 + 6880);
    v35 = (struct _KTHREAD *)v33;
    do
    {
      if ( *v34 )
      {
        --CurrentThread->SpecialApcDisable;
        v36 = 64LL;
        v37 = 2LL;
        do
        {
          v38 = *(_QWORD **)(v36 + *v34);
          if ( v38 )
          {
            while ( *v38 == 97LL )
            {
              *(_BYTE *)(a1 + 657) = 1;
              KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
              KeWaitForSingleObject((PVOID)(a1 + 904), WrPageOut, 0, 0, 0LL);
              --CurrentThread->SpecialApcDisable;
            }
            v34 = v43;
          }
          v36 += 8LL;
          --v37;
        }
        while ( v37 );
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v35 = v41;
      }
      ++v34;
      v35 = (struct _KTHREAD *)((char *)v35 - 1);
      v43 = v34;
      v41 = v35;
    }
    while ( v35 );
  }
  KeSetActualBasePriorityThread((__int64)CurrentThread, (unsigned int)v42);
  return KeSetEvent((PRKEVENT)(a1 + 744), 0, 0);
}

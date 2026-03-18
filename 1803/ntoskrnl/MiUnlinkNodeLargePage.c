/*
 * XREFs of MiUnlinkNodeLargePage @ 0x1400E7040
 * Callers:
 *     MiGetFreeZeroLargePage @ 0x140055FD0 (MiGetFreeZeroLargePage.c)
 *     MiDemoteLocalLargePage @ 0x1400E6D90 (MiDemoteLocalLargePage.c)
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 *     MiGetPagesToZero @ 0x14017B8BC (MiGetPagesToZero.c)
 *     MiGetHugePageToZero @ 0x14017B9F8 (MiGetHugePageToZero.c)
 *     MiScrubNodeLargePageList @ 0x14026C284 (MiScrubNodeLargePageList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400E7480 (MiUnlinkNodeLargePageHelper.c)
 *     MiBeginPageAccessor @ 0x1400E7730 (MiBeginPageAccessor.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall MiUnlinkNodeLargePage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  char v7; // bl
  __int64 v8; // rsi
  char *v9; // r15
  unsigned __int8 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r11
  unsigned int v15; // ecx
  __int64 v16; // r10
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r12
  unsigned int v21; // eax
  __int64 v22; // rdx
  _QWORD *v23; // r12
  __int64 v24; // r8
  __int64 v25; // rdi
  int v26; // eax
  volatile __int64 *v27; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v30; // rdx
  unsigned int *v31; // r15
  __int64 v32; // rdi
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 Next; // rax
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  _QWORD *v39; // rax
  int v40; // eax
  unsigned __int8 CurrentIrql; // di
  _QWORD *v42; // rax
  int v43; // eax
  int v44; // [rsp+30h] [rbp-71h]
  int v45; // [rsp+34h] [rbp-6Dh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-69h] BYREF
  __int64 v47; // [rsp+50h] [rbp-51h]
  __int64 v48; // [rsp+58h] [rbp-49h]
  __int64 v49; // [rsp+60h] [rbp-41h]
  unsigned int v50; // [rsp+68h] [rbp-39h]
  int v51; // [rsp+6Ch] [rbp-35h]
  int v52; // [rsp+70h] [rbp-31h]
  __int64 v53; // [rsp+78h] [rbp-29h]
  unsigned __int8 *v54; // [rsp+80h] [rbp-21h]
  unsigned int *v55; // [rsp+88h] [rbp-19h]
  __int64 v56; // [rsp+90h] [rbp-11h]
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+47h]
  unsigned int v58; // [rsp+F0h] [rbp+4Fh]
  int v59; // [rsp+F8h] [rbp+57h]
  char v60; // [rsp+100h] [rbp+5Fh] BYREF
  char v61; // [rsp+101h] [rbp+60h] BYREF
  unsigned int v62; // [rsp+108h] [rbp+67h]

  v62 = a4;
  v59 = a2;
  v7 = a6;
  a2 = (unsigned int)a2;
  v44 = 0;
  v47 = a2;
  v58 = dword_1403CB6E8[(unsigned int)a2];
  v8 = *(_QWORD *)(a1 + 16) + 1984LL * a3;
  if ( !*(_QWORD *)(v8 + 1808) && (_DWORD)InitializationPhase )
    return 0LL;
  if ( (a6 & 4) != 0 )
    v49 = 0x100000000LL;
  else
    v49 = 1LL;
  LOBYTE(v48) = 17;
  v55 = (unsigned int *)(a5 + 4LL * (unsigned int)a2);
  do
  {
LABEL_5:
    v51 = *(unsigned __int8 *)(v8 + 1912);
    if ( (_DWORD)a4 == 4 )
    {
      v9 = (char *)(v8 + 1918);
      v10 = (unsigned __int8 *)(v8 + 1918 + (unsigned int)MmNumberOfChannels);
    }
    else
    {
      v60 = a4;
      v9 = &v60;
      v10 = (unsigned __int8 *)&v61;
    }
    v54 = v10;
LABEL_8:
    v11 = (unsigned __int8)*v9;
    v12 = 0LL;
    v52 = (unsigned __int8)*v9;
    v53 = v11;
    v56 = 8 * v11;
    v13 = (unsigned int)v11;
    v14 = 144LL;
LABEL_9:
    v15 = 0;
    v16 = v8 + 272 * a2;
    while ( 1 )
    {
      v17 = *((int *)&v49 + v15);
      v18 = v13 + 4 * (v17 + 2 * v12);
      v19 = *(_QWORD *)(v16 + 8 * v18 + 144);
      if ( *(_QWORD *)(v16 + 8 * v18 + 16) )
        break;
LABEL_11:
      if ( ++v15 >= (unsigned int)((v7 & 2) != 0) + 1 )
      {
        a2 = v47;
        ++v12;
        v14 += 64LL;
        if ( v12 <= ((v7 & 1) == 0) )
          goto LABEL_9;
        if ( ++v9 != (char *)v54 )
          goto LABEL_8;
        if ( !v51 )
        {
          if ( v44 )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8((unsigned __int8)v48);
          }
          return 0LL;
        }
        LODWORD(a4) = v62;
        if ( !v44 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          LOBYTE(v48) = CurrentIrql;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 1928);
          LockHandle.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v8 + 1928));
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(CurrentIrql);
          a2 = v47;
          LODWORD(a4) = v62;
        }
        goto LABEL_5;
      }
    }
    v21 = *v55;
    v50 = *v55;
    if ( v58 == 16 )
      v22 = v21 & 0xF;
    else
      v22 = v21 % v58;
    v45 = v22;
    v23 = (_QWORD *)(v19 + 24 * v22);
    v24 = 0LL;
    if ( !v58 )
    {
LABEL_28:
      v13 = v53;
      goto LABEL_11;
    }
    v25 = v14 + v56 + 32 * v17;
    while ( (_QWORD *)*v23 == v23 )
    {
      v26 = v22 + 1;
      if ( (_DWORD)v22 + 1 == v58 )
        v23 = *(_QWORD **)(v25 + v16);
      else
        v23 += 3;
      LODWORD(v22) = 0;
      v24 = (unsigned int)(v24 + 1);
      if ( v26 != v58 )
        LODWORD(v22) = v26;
      v45 = v22;
      if ( (unsigned int)v24 >= v58 )
        goto LABEL_28;
    }
    if ( !v44 )
    {
      v44 = 1;
      v48 = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.LockQueue.Next = 0LL;
      v27 = (volatile __int64 *)(v8 + 1928);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 1928);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v40 = SchedulerAssist[5];
          SchedulerAssist[5] = v40 + 1;
          if ( v40 == -1 )
          {
            v24 = *((unsigned __int8 *)SchedulerAssist + 27);
            if ( !*((_BYTE *)SchedulerAssist + 25) && !(_BYTE)v24 )
              KiPerformUnboostKick(CurrentPrcb);
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v27);
      }
      else
      {
        v30 = (_QWORD *)_InterlockedExchange64(v27, (__int64)&LockHandle);
        if ( v30 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v30);
      }
    }
    v31 = v55;
    a2 = v47;
    a4 = v62;
  }
  while ( v50 != *v55 || (_QWORD *)*v23 == v23 );
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v23[1] + 24LL), 0x3FuLL) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8((unsigned __int8)v48);
    a2 = v47;
    LODWORD(a4) = v62;
    v44 = 0;
    goto LABEL_5;
  }
  v32 = v23[1];
  v33 = *(_QWORD **)(v32 + 8);
  if ( *(_QWORD **)v32 != v23 || *v33 != v32 )
    __fastfail(3u);
  v34 = a7;
  v35 = v23[1];
  v23[1] = v33;
  *v33 = v23;
  if ( v34 )
  {
    v39 = (_QWORD *)*v23;
    if ( *(_QWORD **)(*v23 + 8LL) != v23 )
      __fastfail(3u);
    *(_QWORD *)v32 = v39;
    *(_QWORD *)(v32 + 8) = v23;
    v39[1] = v32;
    *v23 = v32;
    if ( (unsigned int)MiBeginPageAccessor(v34, v32, v24, a4) )
LABEL_41:
      *v31 = v45 + 1;
    else
      v35 = 0LL;
  }
  else
  {
    v35 = MiUnlinkNodeLargePageHelper(v8, v32, v59, v52, v7);
    if ( v35 )
      goto LABEL_41;
    v42 = (_QWORD *)v23[1];
    if ( (_QWORD *)*v42 != v23 )
      __fastfail(3u);
    *(_QWORD *)v32 = v23;
    *(_QWORD *)(v32 + 8) = v42;
    *v42 = v32;
    v23[1] = v32;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_45;
  }
  _m_prefetchw(&LockHandle);
  Next = (__int64)LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
  {
LABEL_56:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_45;
  }
  if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                       0LL,
                                       (signed __int64)&LockHandle) != &LockHandle )
  {
    Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    goto LABEL_56;
  }
LABEL_45:
  v37 = KeGetCurrentPrcb();
  v38 = v37->SchedulerAssist;
  if ( v38 )
  {
    if ( v37->NestingLevel <= 1u )
    {
      v43 = v38[5] - 1;
      v38[5] = v43;
      if ( !v43 && !*((_BYTE *)v38 + 25) && !*((_BYTE *)v38 + 27) )
        KiPerformUnboostKick(v37);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8((unsigned __int8)v48);
  return v35;
}

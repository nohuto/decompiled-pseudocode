/*
 * XREFs of ExpApplyPriorityBoost @ 0x1400EE7A0
 * Callers:
 *     ExpConvertExclusiveToSharedLite @ 0x1400BB3D8 (ExpConvertExclusiveToSharedLite.c)
 *     ExpApplyPrewaitBoost @ 0x1400EEEB0 (ExpApplyPrewaitBoost.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140100730 (ExpAcquireResourceExclusiveLite.c)
 *     ExpApplyRewaitBoost @ 0x14014BE90 (ExpApplyRewaitBoost.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140039664 (KiAbQueueAutoBoostDpc.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     IoBoostThreadIoPriority @ 0x140089520 (IoBoostThreadIoPriority.c)
 *     ExGetExtensionTable @ 0x14009C120 (ExGetExtensionTable.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1400BEEF0 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbThreadInsertList @ 0x1400C38F0 (KiAbThreadInsertList.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KeSetPriorityBoost @ 0x1400EE490 (KeSetPriorityBoost.c)
 *     ObpIncrPointerCount @ 0x1400F3900 (ObpIncrPointerCount.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 */

__int64 __fastcall ExpApplyPriorityBoost(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  bool v7; // cc
  int v8; // r14d
  int v9; // r8d
  volatile __int64 *v10; // r15
  int v11; // r12d
  int v12; // r13d
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v15; // al
  _QWORD *v16; // rdx
  __int16 v17; // ax
  int v18; // edx
  char v19; // cl
  int v20; // eax
  __int64 v21; // rsi
  __int64 Next; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  char v27; // al
  _QWORD *v28; // rdx
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  __int64 v31; // rsi
  unsigned int v32; // r13d
  unsigned int i; // r15d
  int v34; // edx
  __int64 v35; // r14
  int v36; // eax
  int v37; // eax
  __int16 v38; // cx
  volatile __int64 *v39; // r9
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  char v42; // al
  _QWORD *v43; // rdx
  __int64 v44; // rax
  unsigned __int8 CurrentIrql; // r15
  struct _KDPC *v46; // r14
  int v47; // eax
  int v48; // eax
  unsigned __int64 ExtensionTable; // rax
  int v50; // eax
  unsigned __int64 v51; // rax
  int v52; // eax
  unsigned __int8 v53[8]; // [rsp+20h] [rbp-48h] BYREF
  int v54; // [rsp+28h] [rbp-40h]
  int v55; // [rsp+2Ch] [rbp-3Ch]
  int v56; // [rsp+30h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+20h] BYREF
  unsigned __int8 v59; // [rsp+90h] [rbp+28h] BYREF
  unsigned __int8 v60; // [rsp+A8h] [rbp+40h] BYREF

  result = (__int64)&retaddr;
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    return result;
  v6 = (*(_DWORD *)(a3 + 1744) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 544) + 772LL) & 0x100000) != 0 )
    v6 = 0;
  v7 = v6 <= 2;
  if ( v6 < 2 )
  {
    if ( (struct _KTHREAD *)a3 == KeGetCurrentThread() && *(_DWORD *)(a3 + 1800) )
      v6 = 2;
    v7 = v6 <= 2;
  }
  if ( v7 )
    v6 = 2;
  v54 = 0;
  v59 = 2;
  v8 = a2 & 0xFF00;
  LockHandle.LockQueue.Next = 0LL;
  v9 = a2 & 4;
  v56 = v8;
  v10 = (volatile __int64 *)(a1 + 96);
  v55 = v9;
  v11 = a2 & 2;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  v12 = 0;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v47 = SchedulerAssist[5];
      SchedulerAssist[5] = v47 + 1;
      if ( v47 == -1 )
      {
        if ( !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
        v9 = v55;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v15 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 96, &v59);
  }
  else
  {
    v15 = 0;
    v16 = (_QWORD *)_InterlockedExchange64(v10, (__int64)&LockHandle);
    if ( !v16 )
      goto LABEL_10;
    KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v16, &v59);
    v15 = 1;
  }
  v9 = v55;
LABEL_10:
  if ( v15 )
  {
    _disable();
    __writecr8(v59);
  }
  v17 = *(_WORD *)(a1 + 26);
  if ( v9 )
  {
    v17 |= 4u;
    *(_WORD *)(a1 + 26) = v17;
  }
  if ( v11 )
    *(_WORD *)(a1 + 26) = v17 | 2;
  if ( v8 )
  {
    v18 = *(char *)(a3 + 195);
    if ( v18 > *(unsigned __int8 *)(a1 + 27) )
    {
      v19 = 15;
      if ( (unsigned __int8)v18 < 0xFu )
        v19 = *(_BYTE *)(a3 + 195);
      *(_BYTE *)(a1 + 27) = v19;
    }
  }
  v20 = *(_DWORD *)(a1 + 56);
  v21 = *(_QWORD *)(a1 + 48);
  if ( (v20 & 2) != 0 )
  {
    v21 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v21 & 3) != 0 )
  {
    goto LABEL_56;
  }
  if ( v21 )
  {
    if ( v9
      && (v20 & 1) == 0
      && ((*(_DWORD *)(*(_QWORD *)(v21 + 544) + 772LL) & 0x100000) != 0 || (*(_DWORD *)(v21 + 1744) & 0xE00u) < 0x400) )
    {
      v12 = 4;
      v54 = 4;
      PsBoostThreadIo(v21, 0LL);
      *(_DWORD *)(a1 + 56) |= 1u;
    }
    if ( v11 && (*(_DWORD *)(a1 + 56) & 4) == 0 )
    {
      v12 |= 2u;
      v54 = v12;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v21 + 1804)) == 1 && *(_BYTE *)(v21 + 793) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v46 = (struct _KDPC *)KeGetCurrentPrcb();
        if ( (unsigned int)KiAbThreadInsertList(v21, &v46[401].DpcData, (_QWORD *)(v21 + 1376)) )
          KiAbQueueAutoBoostDpc(v46);
        __writecr8(CurrentIrql);
        v8 = v56;
        v10 = (volatile __int64 *)(a1 + 96);
      }
      *(_DWORD *)(a1 + 56) |= 4u;
    }
    if ( v8 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v21 + 195) )
    {
      v12 |= 0xFF00u;
      v54 = v12;
    }
    if ( !v12 )
      goto LABEL_55;
    if ( ObpTraceFlags )
      ObpPushStackInfo(v21 - 48);
    ObpIncrPointerCount(v21 - 48);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_42;
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    }
LABEL_42:
    v23 = KeGetCurrentPrcb();
    v24 = v23->SchedulerAssist;
    if ( v24 )
    {
      if ( v23->NestingLevel <= 1u )
      {
        v48 = v24[5] - 1;
        v24[5] = v48;
        if ( !v48 && !*((_BYTE *)v24 + 25) && !*((_BYTE *)v24 + 27) )
          KiPerformUnboostKick(v23);
      }
    }
    _enable();
    if ( (v12 & 4) != 0 )
    {
      ++ExpResourceIoBoosted;
      IoBoostThreadIoPriority((KSPIN_LOCK *)v21, v6, 0);
    }
    if ( (v12 & 2) != 0 )
    {
      if ( *(_DWORD *)(v21 + 1808) )
      {
        ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
        if ( ExtensionTable )
        {
          (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(v21);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
        }
      }
    }
    if ( (v12 & 0xFF00) != 0 )
    {
      __incgsdword(0x63E8u);
      KeSetPriorityBoost(v21, *(unsigned __int8 *)(a1 + 27));
    }
    v54 = 0;
    ObDereferenceObjectDeferDelete((PVOID)v21);
    v60 = 2;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v10;
    LockHandle.LockQueue.Next = 0LL;
    _disable();
    v25 = KeGetCurrentPrcb();
    v26 = v25->SchedulerAssist;
    if ( v26 )
    {
      if ( v25->NestingLevel <= 1u )
      {
        v50 = v26[5];
        v26[5] = v50 + 1;
        if ( v50 == -1 && !*((_BYTE *)v26 + 25) && !*((_BYTE *)v26 + 27) )
          KiPerformUnboostKick(v25);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v27 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, v10, &v60);
    }
    else
    {
      v27 = 0;
      v28 = (_QWORD *)_InterlockedExchange64(v10, (__int64)&LockHandle);
      if ( v28 )
      {
        KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v28, &v60);
        v27 = 1;
      }
    }
    if ( v27 )
    {
      _disable();
      __writecr8(v60);
    }
LABEL_55:
    v9 = v55;
  }
LABEL_56:
  if ( *(char *)(a1 + 26) >= 0 )
  {
    v31 = *(_QWORD *)(a1 + 16);
    if ( v31 )
    {
      v32 = *(_DWORD *)(v31 + 8);
      for ( i = 1; i < v32; ++i )
      {
        v34 = *(_DWORD *)(v31 + 24);
        v31 += 16LL;
        v35 = *(_QWORD *)v31;
        if ( (v34 & 2) != 0 )
        {
          v35 &= 0xFFFFFFFFFFFFFFFCuLL;
        }
        else if ( (v35 & 3) != 0 )
        {
          goto LABEL_68;
        }
        if ( v35 )
        {
          LOBYTE(v36) = v34;
          if ( v9 )
          {
            if ( (v34 & 1) == 0 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(v35 + 544) + 772LL) & 0x100000) != 0
                || (LOBYTE(v36) = v34, (*(_DWORD *)(v35 + 1744) & 0xE00u) < 0x400) )
              {
                v54 |= 4u;
                PsBoostThreadIo(v35, 0LL);
                *(_DWORD *)(v31 + 8) |= 1u;
                v36 = *(_DWORD *)(v31 + 8);
              }
            }
          }
          if ( v11 && (v36 & 4) == 0 )
          {
            v54 |= 2u;
            if ( _InterlockedIncrement((volatile signed __int32 *)(v35 + 1804)) == 1 )
              KeAbProcessEffectiveIoPriorityChange(v35, 0);
            *(_DWORD *)(v31 + 8) |= 4u;
          }
          if ( v56 )
          {
            v37 = v54;
            if ( *(unsigned __int8 *)(a1 + 27) > *(char *)(v35 + 195) )
            {
              v37 = v54 | 0xFF00;
              v54 |= 0xFF00u;
            }
          }
          else
          {
            v37 = v54;
          }
          if ( v37 )
          {
            ObfReferenceObjectWithTag((PVOID)v35, 0x746C6644u);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            _enable();
            v38 = v54;
            if ( (v54 & 4) != 0 )
            {
              ++ExpResourceIoBoostedShared;
              IoBoostThreadIoPriority((KSPIN_LOCK *)v35, v6, 0);
              v38 = v54;
            }
            if ( (v38 & 2) != 0 && *(_DWORD *)(v35 + 1808) )
            {
              v51 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)IopIoRateExtensionHost);
              if ( v51 )
              {
                (*(void (__fastcall **)(__int64))(v51 + 16))(v35);
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
              }
              v38 = v54;
            }
            if ( (v38 & 0xFF00) != 0 )
            {
              __incgsdword(0x63ECu);
              KeSetPriorityBoost(v35, *(unsigned __int8 *)(a1 + 27));
            }
            ObDereferenceObjectDeferDelete((PVOID)v35);
            v53[0] = 2;
            v39 = (volatile __int64 *)(a1 + 96);
            v54 = 0;
            LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
            LockHandle.LockQueue.Next = 0LL;
            _disable();
            v40 = KeGetCurrentPrcb();
            v41 = v40->SchedulerAssist;
            if ( v41 )
            {
              if ( v40->NestingLevel <= 1u )
              {
                v52 = v41[5];
                v41[5] = v52 + 1;
                if ( v52 == -1 && !*((_BYTE *)v41 + 25) && !*((_BYTE *)v41 + 27) )
                {
                  KiPerformUnboostKick(v40);
                  v39 = (volatile __int64 *)(a1 + 96);
                }
              }
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              v42 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, v39, v53);
            }
            else
            {
              v42 = 0;
              v43 = (_QWORD *)_InterlockedExchange64(v39, (__int64)&LockHandle);
              if ( v43 )
              {
                KxWaitForLockOwnerShipWithIrql((__int64)&LockHandle, v43, v53);
                v42 = 1;
              }
            }
            if ( v42 )
            {
              _disable();
              __writecr8(v53[0]);
            }
            v44 = *(_QWORD *)(a1 + 16);
            if ( !v44 || *(_DWORD *)(v44 + 8) != v32 )
              break;
          }
        }
LABEL_68:
        v9 = v55;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    result = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                 0LL,
                 (signed __int64)&LockHandle);
      if ( (struct _KLOCK_QUEUE_HANDLE *)result == &LockHandle )
        goto LABEL_60;
      result = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_60:
  v29 = KeGetCurrentPrcb();
  v30 = v29->SchedulerAssist;
  if ( v30 )
  {
    if ( v29->NestingLevel <= 1u )
    {
      result = (unsigned int)(v30[5] - 1);
      v30[5] = result;
      if ( !(_DWORD)result )
      {
        result = *((unsigned __int8 *)v30 + 25);
        if ( !(_BYTE)result && !*((_BYTE *)v30 + 27) )
          result = KiPerformUnboostKick(v29);
      }
    }
  }
  _enable();
  return result;
}

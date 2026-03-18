/*
 * XREFs of ExpBoostIoAfterAcquire @ 0x140091CD0
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14008F610 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14009C290 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140143640 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KiAbThreadInsertList @ 0x1400309BC (KiAbThreadInsertList.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     ExpFindCurrentThread @ 0x1400909C0 (ExpFindCurrentThread.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall ExpBoostIoAfterAcquire(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // r9
  int v7; // ebx
  __int64 v8; // rax
  int v9; // edx
  unsigned __int64 *v10; // rcx
  char v11; // al
  __int64 v12; // rdx
  _QWORD *CurrentThread; // rax
  _QWORD *v14; // rsi
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 ExtensionTable; // rax
  struct _KLOCK_QUEUE_HANDLE v19; // [rsp+30h] [rbp-48h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 v21; // [rsp+80h] [rbp+8h] BYREF

  v3 = *(_WORD *)(a1 + 26);
  if ( (v3 & 8) == 0 )
  {
    v7 = 0;
    if ( (v3 & 4) != 0 )
    {
      v8 = *(_QWORD *)(a2 + 544);
      v9 = (*(_DWORD *)(a2 + 1736) >> 9) & 7;
      if ( (*(_DWORD *)(v8 + 772) & 0x100000) != 0 || v9 < 2 )
        v7 = 4;
    }
    if ( (v3 & 2) != 0 )
      v7 |= 2u;
    if ( v7 )
    {
      v10 = (unsigned __int64 *)(a1 + 96);
      v19.LockQueue.Lock = v10;
      v21 = 2;
      v19.LockQueue.Next = 0LL;
      _disable();
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        v11 = KiFastAcquireQueuedSpinLockInstrumented(&v19, v10, &v21);
      }
      else
      {
        v11 = 0;
        v12 = _InterlockedExchange64((volatile __int64 *)v10, (__int64)&v19);
        if ( v12 )
        {
          KxWaitForLockOwnerShipWithIrql(&v19, v12, &v21);
          v11 = 1;
        }
      }
      if ( v11 )
      {
        _disable();
        __writecr8(v21);
      }
      CurrentThread = ExpFindCurrentThread(a1, a2, &v19, 0, 1, a3);
      v14 = CurrentThread;
      if ( (v7 & 4) != 0 )
      {
        if ( (CurrentThread[1] & 1) != 0 )
        {
          v7 &= ~4u;
        }
        else
        {
          PsBoostThreadIo(a2, 0LL);
          *((_DWORD *)v14 + 2) |= 1u;
        }
      }
      if ( (v7 & 2) != 0 )
      {
        if ( (v14[1] & 4) != 0 )
        {
          v7 &= ~2u;
        }
        else
        {
          if ( _InterlockedIncrement((volatile signed __int32 *)(a2 + 1796)) == 1 && *(_BYTE *)(a2 + 793) )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            CurrentPrcb = KeGetCurrentPrcb();
            if ( (unsigned int)KiAbThreadInsertList(a2, &CurrentPrcb->AbPropagateBoostsList.Next, (_QWORD *)(a2 + 1376)) )
              KiAbQueueAutoBoostDpc(CurrentPrcb);
            __writecr8(CurrentIrql);
          }
          *((_DWORD *)v14 + 2) |= 4u;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v19, retaddr);
      }
      else
      {
        _m_prefetchw(&v19);
        Next = v19.LockQueue.Next;
        if ( !v19.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)v19.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&v19) == &v19 )
            goto LABEL_22;
          Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v19);
        }
        v19.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
      }
LABEL_22:
      _enable();
      if ( v7 )
      {
        if ( (v7 & 4) != 0 )
          IoBoostThreadIoPriority(a2, 2LL, 0LL);
        if ( (v7 & 2) != 0 && *(_DWORD *)(a2 + 1800) )
        {
          ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
          if ( ExtensionTable )
          {
            (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(a2);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
          }
        }
      }
    }
  }
}

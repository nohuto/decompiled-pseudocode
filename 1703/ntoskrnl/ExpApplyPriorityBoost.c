/*
 * XREFs of ExpApplyPriorityBoost @ 0x1400913C0
 * Callers:
 *     ExpApplyPrewaitBoost @ 0x140025088 (ExpApplyPrewaitBoost.c)
 *     ExpConvertExclusiveToSharedLite @ 0x140025ACC (ExpConvertExclusiveToSharedLite.c)
 *     ExpApplyRewaitBoost @ 0x140035F60 (ExpApplyRewaitBoost.c)
 *     ExpAcquireResourceSharedLite @ 0x14008F610 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14008FC20 (ExpAcquireResourceExclusiveLite.c)
 * Callees:
 *     KiAbThreadInsertList @ 0x1400309BC (KiAbThreadInsertList.c)
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     PsGetBaseIoPriorityThread @ 0x14004AA70 (PsGetBaseIoPriorityThread.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObpIncrPointerCount @ 0x140091B70 (ObpIncrPointerCount.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 */

_KSPIN_LOCK_QUEUE *__fastcall ExpApplyPriorityBoost(__int64 a1, __int16 a2, __int64 a3, __int64 a4)
{
  _KSPIN_LOCK_QUEUE *volatile result; // rax
  int v7; // edi
  bool v8; // cc
  bool v9; // r13
  bool v10; // r14
  volatile __int64 *v11; // r12
  int v12; // r15d
  char v13; // al
  __int64 v14; // rdx
  int v15; // edx
  char v16; // al
  int v17; // eax
  ULONG_PTR v18; // rsi
  signed __int64 v19; // rax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // rsi
  unsigned int v24; // r13d
  unsigned int i; // r15d
  int v26; // eax
  __int64 v27; // r14
  int v28; // eax
  __int64 v29; // rax
  struct _SINGLE_LIST_ENTRY *v30; // r8
  __int64 v31; // r9
  __int16 v32; // ax
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v38; // rax
  __int64 ExtensionTable; // rax
  int v40; // [rsp+38h] [rbp-29h]
  unsigned __int8 v41[8]; // [rsp+40h] [rbp-21h] BYREF
  unsigned __int8 v42[8]; // [rsp+48h] [rbp-19h] BYREF
  bool v43; // [rsp+50h] [rbp-11h]
  bool v44; // [rsp+51h] [rbp-10h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-9h] BYREF
  PVOID SystemArgument1; // [rsp+70h] [rbp+Fh]
  __int64 v47; // [rsp+78h] [rbp+17h]
  void *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF
  bool v49; // [rsp+C8h] [rbp+67h]
  unsigned __int8 v50; // [rsp+E0h] [rbp+7Fh] BYREF

  result = (_KSPIN_LOCK_QUEUE *volatile)&retaddr;
  if ( (*(_BYTE *)(a1 + 26) & 8) == 0 )
  {
    v7 = (*(_DWORD *)(a3 + 1736) >> 9) & 7;
    if ( (*(_DWORD *)(*(_QWORD *)(a3 + 544) + 772LL) & 0x100000) != 0 )
      v7 = 0;
    v8 = v7 <= 2;
    if ( v7 < 2 )
    {
      if ( (struct _KTHREAD *)a3 == KeGetCurrentThread() && *(_DWORD *)(a3 + 1792) )
        v7 = 2;
      v8 = v7 <= 2;
    }
    if ( v8 )
      v7 = 2;
    v49 = (a2 & 0xFF00) != 0;
    v9 = (a2 & 4) != 0;
    v43 = v9;
    v10 = (a2 & 2) != 0;
    v11 = (volatile __int64 *)(a1 + 96);
    v44 = v10;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
    v12 = 0;
    v40 = 0;
    v50 = 2;
    LockHandle.LockQueue.Next = 0LL;
    _disable();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v13 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 96, &v50);
    }
    else
    {
      v13 = 0;
      v14 = _InterlockedExchange64(v11, (__int64)&LockHandle);
      if ( v14 )
      {
        KxWaitForLockOwnerShipWithIrql(&LockHandle, v14, &v50);
        v13 = 1;
      }
    }
    if ( v13 )
    {
      _disable();
      __writecr8(v50);
    }
    if ( v9 )
      *(_WORD *)(a1 + 26) |= 4u;
    if ( v10 )
      *(_WORD *)(a1 + 26) |= 2u;
    if ( v49 )
    {
      v15 = *(char *)(a3 + 195);
      if ( v15 > *(unsigned __int8 *)(a1 + 27) )
      {
        if ( (unsigned __int8)v15 >= 0xFu )
          v16 = 15;
        else
          v16 = *(_BYTE *)(a3 + 195);
        *(_BYTE *)(a1 + 27) = v16;
      }
    }
    v17 = *(_DWORD *)(a1 + 56);
    v18 = *(_QWORD *)(a1 + 48);
    if ( (v17 & 2) != 0 )
    {
      v18 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v18 & 3) != 0 )
    {
      goto LABEL_54;
    }
    if ( !v18 )
      goto LABEL_54;
    if ( v9
      && (v17 & 1) == 0
      && ((*(_DWORD *)(*(_QWORD *)(v18 + 544) + 772LL) & 0x100000) != 0 || ((*(_DWORD *)(v18 + 1736) >> 9) & 7u) < 2) )
    {
      v12 = 4;
      v40 = 4;
      PsBoostThreadIo(v18, 0LL);
      *(_DWORD *)(a1 + 56) |= 1u;
    }
    if ( v10 && (*(_DWORD *)(a1 + 56) & 4) == 0 )
    {
      v12 |= 2u;
      v40 = v12;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v18 + 1796)) == 1 && *(_BYTE *)(v18 + 793) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentPrcb = KeGetCurrentPrcb();
        if ( (unsigned int)KiAbThreadInsertList(v18, &CurrentPrcb->AbPropagateBoostsList.Next, (_QWORD *)(v18 + 1376)) )
          KiAbQueueAutoBoostDpc(CurrentPrcb);
        __writecr8(CurrentIrql);
        v12 = v40;
      }
      *(_DWORD *)(a1 + 56) |= 4u;
    }
    if ( v49 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v18 + 195) )
    {
      v12 |= 0xFF00u;
      v40 = v12;
    }
    if ( !v12 )
    {
LABEL_54:
      if ( *(char *)(a1 + 26) >= 0 )
      {
        v23 = *(_QWORD *)(a1 + 16);
        if ( v23 )
        {
          v24 = *(_DWORD *)(v23 + 8);
          for ( i = 1; i < v24; ++i )
          {
            v26 = *(_DWORD *)(v23 + 24);
            v23 += 16LL;
            v27 = *(_QWORD *)v23;
            if ( (v26 & 2) != 0 )
            {
              v27 &= 0xFFFFFFFFFFFFFFFCuLL;
            }
            else if ( (v27 & 3) != 0 )
            {
              continue;
            }
            if ( v27 )
            {
              if ( v43 && (v26 & 1) == 0 && (unsigned int)PsGetBaseIoPriorityThread(v27) < 2 )
              {
                v40 |= 4u;
                PsBoostThreadIo(v27, 0LL);
                *(_DWORD *)(v23 + 8) |= 1u;
              }
              if ( v44 && (*(_DWORD *)(v23 + 8) & 4) == 0 )
              {
                v40 |= 2u;
                if ( _InterlockedIncrement((volatile signed __int32 *)(v27 + 1796)) == 1 && *(_BYTE *)(v27 + 793) )
                {
                  v47 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  SystemArgument1 = KeGetCurrentPrcb();
                  if ( (unsigned int)KiAbThreadInsertList(v27, (_QWORD *)SystemArgument1 + 3255, (_QWORD *)(v27 + 1376)) )
                    KiAbQueueAutoBoostDpc(SystemArgument1);
                  __writecr8((unsigned __int8)v47);
                }
                *(_DWORD *)(v23 + 8) |= 4u;
              }
              if ( v49 )
              {
                v28 = v40;
                if ( *(unsigned __int8 *)(a1 + 27) > *(char *)(v27 + 195) )
                {
                  v28 = v40 | 0xFF00;
                  v40 |= 0xFF00u;
                }
              }
              else
              {
                v28 = v40;
              }
              if ( v28 )
              {
                v29 = v27 - 48;
                if ( ObpTraceFlags )
                {
                  ObpPushStackInfo(v27 - 48);
                  v29 = v27 - 48;
                }
                ObpIncrPointerCount(v29);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                _enable();
                v32 = v40;
                if ( (v40 & 4) != 0 )
                {
                  ++ExpResourceIoBoostedShared;
                  IoBoostThreadIoPriority(v27, (unsigned int)v7, 0LL);
                  v32 = v40;
                }
                if ( (v32 & 2) != 0 && *(_DWORD *)(v27 + 1800) )
                {
                  ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                  if ( ExtensionTable )
                  {
                    (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(v27);
                    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                  }
                  v32 = v40;
                }
                if ( (v32 & 0xFF00) != 0 )
                {
                  __incgsdword(0x652Cu);
                  KeSetPriorityBoost(v27, *(unsigned __int8 *)(a1 + 27), v30, v31);
                }
                ObDereferenceObjectDeferDelete((PVOID)v27);
                v42[0] = 2;
                v40 = 0;
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
                _disable();
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                {
                  v33 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 96, v42);
                }
                else
                {
                  v33 = 0;
                  v34 = _InterlockedExchange64(v11, (__int64)&LockHandle);
                  if ( v34 )
                  {
                    KxWaitForLockOwnerShipWithIrql(&LockHandle, v34, v42);
                    v33 = 1;
                  }
                }
                if ( v33 )
                {
                  _disable();
                  __writecr8(v42[0]);
                }
                v35 = *(_QWORD *)(a1 + 16);
                if ( !v35 || *(_DWORD *)(v35 + 8) != v24 )
                  break;
              }
            }
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        result = (_KSPIN_LOCK_QUEUE *volatile)KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_58;
      }
      _m_prefetchw(&LockHandle);
      result = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        result = (_KSPIN_LOCK_QUEUE *volatile)_InterlockedCompareExchange64(
                                                (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                0LL,
                                                (signed __int64)&LockHandle);
        if ( result == (_KSPIN_LOCK_QUEUE *volatile)&LockHandle )
        {
LABEL_58:
          _enable();
          return result;
        }
        result = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&result->Lock, 1uLL);
      goto LABEL_58;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo(v18 - 48);
    v19 = _InterlockedIncrement64((volatile signed __int64 *)(v18 - 48));
    if ( v19 <= 1 )
      KeBugCheckEx(0x18u, 0LL, v18, 0x10uLL, v19);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_43;
    }
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_43:
        _enable();
        if ( (v12 & 4) != 0 )
        {
          ++ExpResourceIoBoosted;
          IoBoostThreadIoPriority(v18, (unsigned int)v7, 0LL);
        }
        if ( (v12 & 2) != 0 )
        {
          if ( *(_DWORD *)(v18 + 1800) )
          {
            v38 = ExGetExtensionTable(IopIoRateExtensionHost);
            if ( v38 )
            {
              (*(void (__fastcall **)(ULONG_PTR))(v38 + 16))(v18);
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
            }
          }
        }
        if ( (v12 & 0xFF00) != 0 )
        {
          __incgsdword(0x6528u);
          KeSetPriorityBoost(v18, *(unsigned __int8 *)(a1 + 27), (struct _SINGLE_LIST_ENTRY *)a3, a4);
        }
        v40 = 0;
        ObDereferenceObjectDeferDelete((PVOID)v18);
        v41[0] = 2;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
        LockHandle.LockQueue.Next = 0LL;
        _disable();
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          v21 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 96, v41);
        }
        else
        {
          v21 = 0;
          v22 = _InterlockedExchange64(v11, (__int64)&LockHandle);
          if ( v22 )
          {
            KxWaitForLockOwnerShipWithIrql(&LockHandle, v22, v41);
            v21 = 1;
          }
        }
        if ( v21 )
        {
          _disable();
          __writecr8(v41[0]);
        }
        goto LABEL_54;
      }
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    goto LABEL_43;
  }
  return result;
}
